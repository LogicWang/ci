# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.6)
# 项目信息
project(luna)

#INCLUDE_DIRECTORIES("/Users/page/learn/explore/cpp/luna/include")
#INCLUDE_DIRECTORIES("/Users/page/learn/explore/cpp/luna")
# 查找当前目录下的所有源文件 并将名称保存到 DIR_SRCS 变量
AUX_SOURCE_DIRECTORY(./src DIR_SRCS)
AUX_SOURCE_DIRECTORY(./header DIR_HEADERS)

# 添加 src子目录
# add_subdirectory(src)

# SET(TEST_MATH  ${DIR_SRCS})

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# 指定生成目标
add_executable(luna main.cpp ${DIR_SRCS} ${DIR_HEADERS})

# 添加链接库
#target_link_libraries(luna mathFunctions)
