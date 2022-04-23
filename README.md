# term-cal

Copyright 23 April 2022 Robin Rowe
License open source MIT

Terminal-based calendar application for all operating systems.

## Commands

	$ term-cal
	> add DATE TIME EVENT...
	> cal
	> drop #
	> ls <wildcards>
	> note #

Task fields are separated by spaces.

## ls Wildcards

Everything:

	> ls 

By task id:

	> ls 4
	
By task id range:

	> ls 2-4
	
By date

	> ls 4/23
	> ls 2022/4/23
	> ls today

## Task File Format

	1 We 04-20 Noon Angular
	2 Th 04-21 0530 MS CRM
	3 Th 04-21 0800 Flourishing
	4 Th 04-21 1000 Mindfulness
	
Filename: term-cal.txt

## Design Classes

* Date 
* Time
* DateTime
* Calendar
* Task
* Note
* Parser

## cmaker

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ /c/code/gitlab/cmaker/bash/cmaker_project.sh TermCal
	cmaker_project: /c/code/github/term-cal
	In bash set your name: % export AUTHOR="Your Name"

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ export AUTHOR="Robin Rowe"

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ echo "Open source MIT" > LICENSE

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ /c/code/gitlab/cmaker/bash/cmaker_project.sh TermCal
	cmaker_project: /c/code/github/term-cal
	License: Open source MIT
	Creating CMakeLists.txt for project TermCal...
	Creating CHANGES.md

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ /c/code/gitlab/cmaker/bash/cmaker_program.sh term-cal
	License: Open source MIT
	Creating term-cal.cpp ...
	Updating CMakeLists.txt with executable term-cal...

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$ /c/code/gitlab/cmaker/bash/cmaker_class.sh Date Time DateTime Calendar Task Note Parser
	License: Open source MIT
	Creating ./Date.h...
	Creating ./Date.cpp...
	Creating ./test/test_Date.cpp...
	Updating CMakeLists.txt with Date...
	Creating ./Time.h...
	Creating ./Time.cpp...
	Creating ./test/test_Time.cpp...
	Updating CMakeLists.txt with Time...
	Creating ./DateTime.h...
	Creating ./DateTime.cpp...
	Creating ./test/test_DateTime.cpp...
	Updating CMakeLists.txt with DateTime...
	Creating ./Calendar.h...
	Creating ./Calendar.cpp...
	Creating ./test/test_Calendar.cpp...
	Updating CMakeLists.txt with Calendar...
	Creating ./Task.h...
	Creating ./Task.cpp...
	Creating ./test/test_Task.cpp...
	Updating CMakeLists.txt with Task...
	Creating ./Note.h...
	Creating ./Note.cpp...
	Creating ./test/test_Note.cpp...
	Updating CMakeLists.txt with Note...
	Creating ./Parser.h...
	Creating ./Parser.cpp...
	Creating ./test/test_Parser.cpp...
	Updating CMakeLists.txt with Parser...

	rower@P330 MINGW64 /c/code/github/term-cal (main)
	$


-00-