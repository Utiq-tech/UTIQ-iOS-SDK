#!/bin/bash

XCFRAMEWORK_PATH="./Utiq.xcframework"
BINARY_NAME="MyLibrary" # Replace with your actual binary name
EXCLUDE_ARCHITECTURE="x86_64" # Example architecture to exclude (if needed)

# Function to analyze the architectures of binaries in the .xcframework
analyze_architectures() {
    echo "Analyzing architectures in $XCFRAMEWORK_PATH"
    find "$XCFRAMEWORK_PATH" -name "$BINARY_NAME" | while read -r binary; do
        echo "Binary: $binary"
        lipo -info "$binary"
    done
}

# Function to strip unnecessary symbols
strip_symbols() {
    echo "Stripping debug symbols from binaries in $XCFRAMEWORK_PATH"
    find "$XCFRAMEWORK_PATH" -name "$BINARY_NAME" | while read -r binary; do
        echo "Stripping symbols from $binary"
        strip -S "$binary"
    done
}

# Function to remove unwanted architectures
remove_architecture() {
    echo "Removing architecture: $EXCLUDE_ARCHITECTURE from binaries"
    find "$XCFRAMEWORK_PATH" -name "$BINARY_NAME" | while read -r binary; do
        echo "Processing $binary"
        lipo -remove "$EXCLUDE_ARCHITECTURE" -output "$binary.tmp" "$binary"
        mv "$binary.tmp" "$binary"
        echo "Removed $EXCLUDE_ARCHITECTURE from $binary"
    done
}

# Execute functions
analyze_architectures
strip_symbols
remove_architecture
analyze_architectures # Re-check after modifications
