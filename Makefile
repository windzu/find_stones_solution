# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/runner/work/find_stones_solution/find_stones_solution

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/runner/work/find_stones_solution/find_stones_solution/build

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target test
test:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running tests..."
	/usr/local/bin/ctest --force-new-ctest-process $(ARGS)
.PHONY : test

# Special rule for the target test
test/fast: test
.PHONY : test/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/local/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/local/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# The main all target
all: cmake_check_build_system
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(CMAKE_COMMAND) -E cmake_progress_start /home/runner/work/find_stones_solution/find_stones_solution/build/CMakeFiles /home/runner/work/find_stones_solution/find_stones_solution/build/test//CMakeFiles/progress.marks
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test/all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/runner/work/find_stones_solution/find_stones_solution/build/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test/clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test/preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test/preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

# Convenience name for target.
test/CMakeFiles/unit_test.dir/rule:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 test/CMakeFiles/unit_test.dir/rule
.PHONY : test/CMakeFiles/unit_test.dir/rule

# Convenience name for target.
unit_test: test/CMakeFiles/unit_test.dir/rule
.PHONY : unit_test

# fast build rule for target.
unit_test/fast:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f test/CMakeFiles/unit_test.dir/build.make test/CMakeFiles/unit_test.dir/build
.PHONY : unit_test/fast

test.o: test.cpp.o
.PHONY : test.o

# target to build an object file
test.cpp.o:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f test/CMakeFiles/unit_test.dir/build.make test/CMakeFiles/unit_test.dir/test.cpp.o
.PHONY : test.cpp.o

test.i: test.cpp.i
.PHONY : test.i

# target to preprocess a source file
test.cpp.i:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f test/CMakeFiles/unit_test.dir/build.make test/CMakeFiles/unit_test.dir/test.cpp.i
.PHONY : test.cpp.i

test.s: test.cpp.s
.PHONY : test.s

# target to generate assembly for a file
test.cpp.s:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(MAKE) $(MAKESILENT) -f test/CMakeFiles/unit_test.dir/build.make test/CMakeFiles/unit_test.dir/test.cpp.s
.PHONY : test.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... test"
	@echo "... unit_test"
	@echo "... test.o"
	@echo "... test.i"
	@echo "... test.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	cd /home/runner/work/find_stones_solution/find_stones_solution/build && $(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
