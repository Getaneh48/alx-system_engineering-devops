Script: 0-iam_betty
	a script that switches the current user to the user betty

Script: 1-who_am_i
	a script that prints the effective username of the current user

Script: 2-groups
	a script that prints all the groups the current user is part of

Script: 3-new_owner
	a script that changes the owner of the file hello to the user betty.

Script: 4-empty
	 a script that creates an empty file called hello.

Script: 5-execute
	a script that adds execute permission to the owner of the file hello

Script: 6-multiple_permissions
	a script that adds execute permission to the owner and the group owner, and read permission to other users, to the file hello.

Script: 7-everybody
	a script that adds execution permission to the owner, the group owner and the other users, to the file hello.

Script: 8-James_Bond
	a script that sets the permission to the file hello as follows:

    	- Owner: no permission at all
    	- Group: no permission at all
    	- Other users: all the permissions

Script: 9-John_Doe
	a script that sets the mode of the file hello to this: -rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello.

Script: 10-mirror_permissions
	a script that sets the mode of the file hello the same as olleh’s mode.
	
    	The file hello will be in the working directory
    	The file olleh will be in the working directory

Script: 11-directories_permissions
	a script that adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users. Regular files should not be changed.

Script: 12-directory_permissions
	a script that creates a directory called my_dir with permissions 751 in the working directory.

Script: 13-change_group
	a script that changes the group owner to school for the file hello.


