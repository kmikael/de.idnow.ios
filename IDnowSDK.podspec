Pod::Spec.new do |spec|
  spec.name = 'IDnowSDK'
  
  spec.version = '1.0.0'
  
  spec.authors = ['IDnow GmbH']
  spec.summary = 'The IDnowSDK for iOS.'
  spec.description = 'The IDnowSDK for iOS. The IDnowSDK for iOS.'
  spec.homepage = 'http://www.idnow.eu/developers'
  
  spec.platform = :ios, '8.0'
  spec.requires_arc = true
  
  spec.source = {git: 'https://github.com/kmikael/de.idnow.ios.git', tag: 'v1.0.0'}
  
  spec.dependency 'Masonry', '0.6.1'
  spec.dependency 'SocketRocket', '0.4.0'
  spec.dependency 'AFNetworking', '2.5.4'
  spec.dependency 'UIAlertView+Blocks', '0.8.1'
  spec.dependency 'OpenTok', '2.4.1'
  
  spec.ios.vendored_libraries  = 'idnow-sdk/libidnow-sdk-universal.a'
  
  spec.header_dir = 'idnow-sdk/include'
  spec.header_mappings_dir = 'idnow-sdk/include'
end
