file(REMOVE_RECURSE
  "build/file1.o"
  "build/file2.o"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/myproject.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
