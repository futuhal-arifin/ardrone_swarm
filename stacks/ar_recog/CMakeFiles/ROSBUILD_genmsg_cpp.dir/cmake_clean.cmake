FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "src/ar_recog/msg"
  "src/ar_recog/srv"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "msg_gen/cpp/include/ar_recog/Tags.h"
  "msg_gen/cpp/include/ar_recog/Tag.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
