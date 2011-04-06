/*
 *  Copyright (C) 2008 Nicolas Vion <nico@picapo.net>
 *
 *   This file is part of Topy.
 *
 *   Topy is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   Topy is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Topy; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

//This script was generated by php/mk_macros.php
//Don't change manually!

#ifndef _HELP_HH
#define _HELP_HH

#define HELP_SERVER \
	"list of commands:\n" \
	"=================\n" \
	"TID <n> <command>\n" \
	"	Give a Transaction Id that will be returned with the command's result\n" \
	"user <user_id> <command> [args]\n" \
	"	Execute a command on a existing user\n" \
	"	See \"user <user_id> help\" for more information\n" \
	"user* <user_id> <command> [args]\n" \
	"	Execute a command on a user.\n" \
	"	Create a new user if <user_id> doesn't exists\n" \
	"groups <command>\n" \
	"	Execute a command on groups\n" \
	"	See \"groups help\" for more information\n" \
	"sets <command>\n" \
	"	Execute a command on users sets\n" \
	"	See \"sets help\" for more information\n" \
	"contests <command>\n" \
	"	Execute a command on users contests\n" \
	"	See \"contests help\" for more information\n" \
	"fields <command>\n" \
	"	Execute a command on fields\n" \
	"	See \"fields help\" for more information\n" \
	"autodump <command>\n" \
	"	Execute a command on autodump\n" \
	"	See \"autodump help\" for more information\n" \
	"info\n" \
	"	Get server information\n" \
	"stats\n" \
	"	Get statistics about server\n" \
	"dump <path>\n" \
	"	Dump data in file <path>\n" \
	"quit\n" \
	"	Close connection with client\n" \
	"halt\n" \
	"	Stop server\n" \
	"	(available if server was compiled with a recent libevent version)\n" \
	"mode <text|php_serialize|none>\n" \
	"	Set default output format\n" \
	"report <field> [from <set>] [where <expr>]\n" \
	"	Return a report about a given field\n" \
	"clear <field> [from <set>] [where <expr>]\n" \
	"	Clear a given field to a group of users\n" \
	"top <field> [rule <rule name>] [inversed] [set <user1>, <user2>, ...] [from <set>] [where <expr>] [size <n = 32>] [join (<field>, *|<rule>) (<field>, *|<rule>)...]\n" \
	"	Show most active users of given groups\n" \
	"count [from <set>] [where <expr bool>]\n" \
	"	Count users\n" \
	"count_active <field> [limit <second = 5 * 60> OR since <gmt>] [from <set>] [where <expr bool>]\n" \
	"	Count active users\n" \
	"cleanup <field> [limit <seconds = 31 * 3600 * 24> OR since <gmt>] [from <set>] [where <expr bool>]\n" \
	"	Delete inactive users\n" \
	"time\n" \
	"	Return internal timer values\n" \
	"help\n" \
	"	Show commands list\n" \
	"debug\n" \
	"	Show debug information\n" 

#define HELP_GROUPS \
	"list of commands:\n" \
	"=================\n" \
	"add <name> [<id> <mask>]\n" \
	"	Create new group\n" \
	"delete <name>\n" \
	"	Delete group\n" \
	"list\n" \
	"	Show list of groups\n" \
	"clear\n" \
	"	Clear groups\n" \
	"stats\n" \
	"	Show number of user in each group\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_USER \
	"list of commands:\n" \
	"=================\n" \
	":: <field> <command>\n" \
	"	Execute <command> on field <field>\n" \
	"get\n" \
	"	Get user data\n" \
	"show\n" \
	"	Show user data\n" \
	"group set <name>\n" \
	"	Set user group\n" \
	"group get\n" \
	"	Get user group\n" \
	"delete\n" \
	"	Delete user\n" \
	"clear\n" \
	"	Clear user\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_USERS_SETS \
	"list of commands:\n" \
	"=================\n" \
	"select into <name> where <expr>\n" \
	"	Select all users that match <expr> into set <name>\n" \
	"delete <name>\n" \
	"	Delete user set\n" \
	"list\n" \
	"	Show list of sets\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_CONTESTS \
	"list of commands:\n" \
	"=================\n" \
	":: <name> <command>\n" \
	"	Execute <command> on contest <name>\n" \
	"generate <name> <field> [rule <rule name>] [inversed] [from <set>] [where <expr>]]\n" \
	"	Generate contest\n" \
	"delete <name>\n" \
	"	Delete user set\n" \
	"list\n" \
	"	Show list of sets\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_CONTEST \
	"list of commands:\n" \
	"=================\n" \
	"get [from <int = 0>] [limit <int = 128> [join (<field>, *|<rule>) (<field>, *|<rule>)]]\n" \
	"	Get contest content\n" \
	"find <user>\n" \
	"	Find the rank of a given user\n" \
	"clear\n" \
	"	Clear contest\n" \
	"size\n" \
	"	Return size of contest\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_FIELD \
	"list of commands:\n" \
	"=================\n" \
	"add <n>\n" \
	"	Add n to field value\n" \
	"get\n" \
	"	Get field value\n" \
	"set <value>\n" \
	"	Set field value\n" \
	"rules\n" \
	"	List score rules\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_FIELD_ULOG \
	"insert [unique] <id> [,<date>]\n" \
	"	Insert item\n" 

#define HELP_FIELD_LOG \
	"insert [unique] <id> [,<date>]\n" \
	"	Insert item\n" 

#define HELP_FIELD_EVENTS \
	"total get\n" \
	"	Get total\n" \
	"total set <value>\n" \
	"	Set total\n" 

#define HELP_AUTODUMP \
	"list of commands:\n" \
	"=================\n" \
	"stats\n" \
	"	Get stats about last autodump\n" \
	"set <target> <delay>\n" \
	"	Set autodump settings\n" \
	"enable <1/0>\n" \
	"	Enable autodump\n" \
	"force\n" \
	"	Force autodump\n" \
	"help\n" \
	"	Show commands list\n" 

#define HELP_FIELDS \
	"list of commands:\n" \
	"=================\n" \
	"add <name> <type>\n" \
	"	Add field\n" \
	"list\n" \
	"	List fields\n" \
	"help\n" \
	"	Show commands list\n" 


#endif
