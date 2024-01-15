Pod::Spec.new do |spec|
    spec.name                     = 'UTIQ'
    spec.version                  = ENV['LIB_VERSION'] || '0.0.1' #fallback to major version
    spec.summary                  = 'UTIQ for iOS'
    spec.homepage                 = 'https://github.com/Utiq-tech/UTIQ-iOS-SDK'
    spec.source                   = { :git=> 'https://github.com/Utiq-tech/UTIQ-iOS-SDK.git', :tag => spec.version }
    spec.pod_target_xcconfig      = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig     = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.authors                  = { 'UTIQ' => 'ahmad.mahmoud@teavaro.org' }
    spec.license                  = 'Commercial'
    spec.vendored_frameworks      = 'UTIQ.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12'
end