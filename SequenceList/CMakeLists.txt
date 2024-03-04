cmake_minimum_required(VERSION 3.11)

project(SequenceList VERSION 1.0)

add_executable(SqList SequenceList.cc)

target_include_directories(SqList PUBLIC
                           ${PROJECT_SOURCE_DIR}  
                          )