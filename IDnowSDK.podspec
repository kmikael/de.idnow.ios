Pod::Spec.new do |spec|
  spec.name = 'IDnowSDK'
  
  spec.version = '1.0.0'
  
  spec.authors = ['IDnow GmbH']
  spec.summary = 'The IDnowSDK for iOS.'
  spec.description = 'With IDnow, personal identification checks and personal signatures have finally arrived in the digital world. We offer companies and institutions innovative platform-specific solutions that guarantee the safe and legally sound verification of customers, clients and contractual partners.'
  spec.homepage = 'http://www.idnow.eu/developers'
  
  spec.platform = :ios, '8.0'
  
  spec.source = {git: 'https://github.com/kmikael/de.idnow.ios.git', tag: "v#{spec.version}"}
  
  spec.dependency 'Masonry', '0.6.1'
  spec.dependency 'SocketRocket', '0.3.1-beta2'
  spec.dependency 'AFNetworking', '2.5.4'
  spec.dependency 'UIAlertView+Blocks', '0.8.1'
  spec.dependency 'OpenTok', '2.4.1'
  
  spec.source_files = 'idnow-sdk/include/**/*.h'
  spec.public_header_files = 'idnow-sdk/include/**/*.h'
  spec.vendored_libraries  = 'idnow-sdk/libidnow-sdk-universal.a'
  
  spec.resources = ['idnow-sdk/resources']
end
