
Pod::Spec.new do |s|
  s.name         = "HHEAColourfulProgressView"
  s.version      = "0.0.3"
  s.summary      = "a progressView in masonry."
  s.homepage     = "https://github.com/HH-Medic/HHEAColourfulProgressView"
  s.license      = "MIT"

  s.author             = { "HH-Medic" => "HHMedic@HH-Medic.com" }

  # s.platform     = :ios
   s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/HH-Medic/HHEAColourfulProgressView.git", :tag => s.version}

  s.source_files  = "EAColourfulProgressView/*.{h,m}"


   s.dependency "Masonry"

end
