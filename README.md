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

-00-