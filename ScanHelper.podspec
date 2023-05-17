Pod::Spec.new do |spec|

  spec.name         = 'ScanHelper'
  spec.version      = '0.0.8'
  spec.license      = { :type => 'MIT', :file => 'LICENSE' }

  spec.summary      = 'A lightweight scanning component based on system API in Swift5.0'
  spec.description  = <<-DESC
		     No memory leaks, Support scaling, Support light sense to automatically turn on the flash, Support auto zoom, Support custom UI.
                      DESC

  spec.author       = { 'Charlie' => 'a51095@hotmail.com' }
  spec.homepage     = 'https://github.com/a51095/ScanHelper'
  spec.source       = { :git => 'https://github.com/a51095/ScanHelper.git', :tag => spec.version }

  spec.swift_version = '5.0'
  spec.platform      = :ios, '11.0'
  spec.ios.deployment_target = '11.0'

  spec.ios.vendored_frameworks  = 'lib/ScanHelperSDK.framework'

end
