FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "src/ar_recog/msg"
  "src/ar_recog/srv"
  "CMakeFiles/tests"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
