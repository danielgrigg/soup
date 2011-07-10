# This package isn't used, it's merely to show how packages are declared.
PACKAGE_BOOST = {
  :name => "Boost",
  :components => "date_time filesystem",
#  :version => "1.36.0",
  :required => true,
  :optional_cmake => ""  # Insert package-missing-handler
};

PROJECT = 
{
  :name => "soup",
  :cmake_version => "2.6",

  # Projects consist of libraries and executables, 
  # or collectively for us, 'targets'.
  :targets => 
  [{
    :name => "soup",
    :type => :shared, # :shared, :static and :executable are supported.
    :install => true, # Install the target
    :sources => "src",
    :common => 
    {
      :packages => [], # [PACKAGE_BOOST]
      :definitions => [],
      :include_dirs => ["src"],
      :link_dirs => [],
      :libs => []
    },
    # The below platforms aren't needed by Soup,
    # and are only included to show all the platform-specific blocks.
    :apple => 
    {
      :packages => [],
      :definitions => ["IS_APPLE"],
      :include_dirs => [],
      :link_dirs => [] 
    },
    :linux => 
    {
      :packages => [],
      :definitions => ["IS_LINUX"],
      :include_dirs => [],
      :link_dirs => [] 
    },
    :windows => 
    {
      :packages => [],
      :definitions => ["IS_WINDOWS"],
      :include_dirs => [],
      :link_dirs => [] 
    }
  }, 
  {
    # Testing the Soup - get it? :)
    :name => "souptaste",
    :type => :executable,
    :depends => "soup",
    :install => false,
    :sources => "test/",
    :common => 
    {
      :packages => [],
      :definitions => [],
      :include_dirs => [],
      :link_dirs => [],
      :libs => ["soup"]
    }
  }]
}

