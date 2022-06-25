#
# Be sure to run `pod lib lint ${POD_NAME}.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'pilot-ios-sdk'
  s.version          = '1.0.0'
  s.summary          = 'Pilot SDK is MultiCDN for iOS project'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/piltekvn/pilot-ios-sdk'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Sao Nguyen' => 'piltekvn@gmail.com' }
  s.source           = { :git => 'https://github.com/piltekvn/pilot-ios-sdk.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'
  s.source_files = 'include/*.h'
  s.public_header_files = 'include/*.h'
  s.vendored_libraries = 'lib/libPilotCDN.a'
  s.xcconfig = { 'HEADER_SEARCH_PATHS' => "${PODS_ROOT}/#{s.name}/include/**" }
  s.static_framework = true
end