Pod::Spec.new do |s|
  s.name            = "HHEAColourfulProgressView"
  s.version         = "0.1.0"
  s.summary         = "A simple Progress View that allows colour changing via Interface Builder"

  s.homepage        = "https://github.com/Eddpt/EAColourfulProgressView"
  s.license         = 'MIT'
  s.author          = { "Edgar Antunes" => "Eddpt@users.noreply.github.com" }
  s.source          = { :git => "https://github.com/Eddpt/EAColourfulProgressView.git", :tag => s.version.to_s }

  s.platform 		= :ios, '7.0'
  s.screenshots     = "https://raw.githubusercontent.com/Eddpt/EAColourfulProgressView/master/demo.gif", "https://raw.githubusercontent.com/Eddpt/EAColourfulProgressView/master/IBInspectable.png"
  s.requires_arc	= true

  s.source_files	= 'EAColourfulProgressView/*.{h,m}'
  s.frameworks		= 'UIKit'
  
  s.dependency 'masonry'
end
