vars = {
  "webkit_trunk":
    "http://svn.webkit.org/repository/webkit/trunk",
  "webkit_revision": "51534",
  "ffmpeg_revision": "30374",
  "chromium_git": "http://src.chromium.org/git",
}

deps = {
  "src/breakpad/src":
    "http://google-breakpad.googlecode.com/svn/trunk/src@429",

  "src/build/util/support":
    "/trunk/deps/support@20411",

  "src/googleurl":
    "http://google-url.googlecode.com/svn/trunk@121",

  "src/sdch/open-vcdiff":
    "http://open-vcdiff.googlecode.com/svn/trunk@28",

  "src/testing/gtest":
    "http://googletest.googlecode.com/svn/trunk@336",

  "src/third_party/WebKit":
    "/trunk/deps/third_party/WebKit@27313",

  "src/third_party/icu":
    "/trunk/deps/third_party/icu42@33403",

  "src/third_party/hunspell":
   "/trunk/deps/third_party/hunspell128@30191",

  "src/third_party/protobuf2/src":
    "http://protobuf.googlecode.com/svn/trunk@219",

  "src/tools/gyp":
    "http://gyp.googlecode.com/svn/trunk@765",

  "src/v8":
    "http://v8.googlecode.com/svn/trunk@3376",

  "src/native_client":
    "http://nativeclient.googlecode.com/svn/trunk/src/native_client@1052",

  "src/third_party/skia/src":
    "http://skia.googlecode.com/svn/trunk/src@447",

  "src/third_party/skia/include":
    "http://skia.googlecode.com/svn/trunk/include@447",

  "src/third_party/WebKit/LayoutTests":
    Var("webkit_trunk") + "/LayoutTests@" + Var("webkit_revision"),

  "src/third_party/WebKit/JavaScriptCore":
    Var("webkit_trunk") + "/JavaScriptCore@" + Var("webkit_revision"),

  "src/third_party/WebKit/WebCore":
    Var("webkit_trunk") + "/WebCore@" + Var("webkit_revision"),

  "src/third_party/WebKit/WebKit/chromium":
    Var("webkit_trunk") + "/WebKit/chromium@" + Var("webkit_revision"),

  "src/third_party/WebKit/WebKitTools/pywebsocket":
    Var("webkit_trunk") + "/WebKitTools/pywebsocket@" + Var("webkit_revision"),

  "src/third_party/ots":
    "http://ots.googlecode.com/svn/trunk@19",

  "src/third_party/tcmalloc/tcmalloc":
    "http://google-perftools.googlecode.com/svn/trunk@77",

  "src/tools/page_cycler/acid3":
    "/trunk/deps/page_cycler/acid3@19546",

  # We run these layout tests as UI tests.  Since many of the buildbots that
  # run layout tests do NOT have access to the LayoutTest directory, we need
  # to map them here.  In practice, these do not take up much space.
  "src/chrome/test/data/layout_tests/LayoutTests/fast/events":
    Var("webkit_trunk") + "/LayoutTests/fast/events@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/fast/js/resources":
    Var("webkit_trunk") + "/LayoutTests/fast/js/resources@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/fast/workers":
    Var("webkit_trunk") + "/LayoutTests/fast/workers@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/http/tests/resources":
    Var("webkit_trunk") + "/LayoutTests/http/tests/resources@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/http/tests/workers":
    Var("webkit_trunk") + "/LayoutTests/http/tests/workers@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/http/tests/xmlhttprequest":
    Var("webkit_trunk") + "/LayoutTests/http/tests/xmlhttprequest@" +
    Var("webkit_revision"),
  "src/chrome/test/data/layout_tests/LayoutTests/storage/domstorage":
    Var("webkit_trunk") + "/LayoutTests/storage/domstorage@" +
    Var("webkit_revision"),

  "src/chrome/tools/test/reference_build":
    "/trunk/deps/reference_builds@33150",
}


deps_os = {
  "win": {
    "src/third_party/cygwin":
      "/trunk/deps/third_party/cygwin@11984",

    "src/third_party/python_24":
      "/trunk/deps/third_party/python_24@22967",

    "src/third_party/ffmpeg/binaries/chromium/win/ia32":
      "/trunk/deps/third_party/ffmpeg/binaries/win@" + Var("ffmpeg_revision"),

    # Chrome Frame related deps
    "src/third_party/xulrunner-sdk":
      "/trunk/deps/third_party/xulrunner-sdk@17887",
    "src/chrome_frame/tools/test/reference_build/chrome":
      "/trunk/deps/reference_builds/chrome_frame@27181",

    # Parses Windows PE/COFF executable format.
    "src/third_party/pefile":
      "http://pefile.googlecode.com/svn/trunk@63",
  },
  "mac": {
    "src/third_party/GTM":
      "http://google-toolbox-for-mac.googlecode.com/svn/trunk@259",
    "src/third_party/pdfsqueeze":
      "http://pdfsqueeze.googlecode.com/svn/trunk@2",
    "src/third_party/WebKit/WebKit/mac":
      Var("webkit_trunk") + "/WebKit/mac@" + Var("webkit_revision"),
    "src/third_party/WebKit/WebKitLibraries":
      Var("webkit_trunk") + "/WebKitLibraries@" + Var("webkit_revision"),

    # TODO(ajwong): Move this into the OS-independent block.
    "src/third_party/yasm/source/patched-yasm":
      "/trunk/deps/third_party/yasm/patched-yasm@29937",
    "src/third_party/ffmpeg/source/patched-ffmpeg-mt":
      "/trunk/deps/third_party/ffmpeg/patched-ffmpeg-mt@" +
      Var("ffmpeg_revision"),

    "src/third_party/ffmpeg/binaries/chromium/mac/ia32":
      "/trunk/deps/third_party/ffmpeg/binaries/mac@" + Var("ffmpeg_revision"),
    "src/third_party/ffmpeg/binaries/chromium/mac/ia32_dbg":
      "/trunk/deps/third_party/ffmpeg/binaries/mac_dbg@" +
      Var("ffmpeg_revision"),
  },
  "unix": {
    # Linux, really.
    "src/third_party/xdg-utils":
      "/trunk/deps/third_party/xdg-utils@29103",

    # TODO(ajwong): Move this into the OS-independent block.
    "src/third_party/yasm/source/patched-yasm":
      "/trunk/deps/third_party/yasm/patched-yasm@29937",
    "src/third_party/ffmpeg/source/patched-ffmpeg-mt":
      "/trunk/deps/third_party/ffmpeg/patched-ffmpeg-mt@" +
      Var("ffmpeg_revision"),

    "src/third_party/ffmpeg/binaries/chromium/linux/ia32":
      "/trunk/deps/third_party/ffmpeg/binaries/linux@" +
      Var("ffmpeg_revision"),
    "src/third_party/ffmpeg/binaries/chromium/linux/ia32_dbg":
      "/trunk/deps/third_party/ffmpeg/binaries/linux_dbg@" +
      Var("ffmpeg_revision"),

    "src/third_party/ffmpeg/binaries/chromium/linux/x64":
      "/trunk/deps/third_party/ffmpeg/binaries/linux_64@" +
      Var("ffmpeg_revision"),
    "src/third_party/ffmpeg/binaries/chromium/linux/x64_dbg":
      "/trunk/deps/third_party/ffmpeg/binaries/linux_64_dbg@" +
      Var("ffmpeg_revision"),
  },
  "chromeos": {
     "src/third_party/cros":
       Var("chromium_git") + "/cros.git@c4c0d4bc",
     "src/third_party/chromeos_login_manager":
       Var("chromium_git") + "/login_manager.git@4659678c",
     "src/third_party/chromeos_login_manager/include":
       Var("chromium_git") + "/pam-dev.git@3971bd3f",
  },
}


include_rules = [
  # Everybody can use some things.
  "+base",
  "+build",
  "+ipc",

  # For now, we allow ICU to be included by specifying "unicode/...", although
  # this should probably change.
  "+unicode",
  "+testing",

  # Allow anybody to include files from the "public" Skia directory in the
  # webkit port. This is shared between the webkit port and Chrome.
  "+webkit/port/platform/graphics/skia/public",
]


# checkdeps.py shouldn't check include paths for files in these dirs:
skip_child_includes = [
   "breakpad",
   "chrome_frame",
   "gears",
   "native_client",
   "o3d",
   "sdch",
   "skia",
   "testing",
   "third_party",
   "v8",
]


hooks = [
  {
    # A change to a .gyp, .gypi, or to GYP itself should run the generator.
    "pattern": ".",
    "action": ["python", "src/build/gyp_chromium"],
  },
  {
    # Workaround IncrediBuild problem. http://crbug.com/17706.
    "pattern": "\\.grd$",
    "action": ["python",
               "src/build/win/clobber_generated_headers.py",
               "$matching_files"],
  },
  {
    # Workaround XCode dependecies problem.
    # TODO(bradnelson): remove this when fixed.
    "pattern": ".",
    "action": ["python",
               "src/build/mac/clobber_generated_headers.py"],
  },
]
