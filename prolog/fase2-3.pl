:- use_module('pl-man-game/main').

do(get(left)):-see(normal,left,'I').
do(use(down)):-see(normal,down,'v'),not(see(normal,left,'>')).
do(move(left)):-see(normal,left,'.'),not(see(normal,down,'v')).
do(move(right)):-see(normal,right,'.').
do(move(down)):-see(normal,down,'.').
do(move(down)):-havingObject,see(normal,right,'E').
do(use(left)):-see(normal,left,'v'),not(see(normal,up-left,')')).
do(move(up)):-havingObject,not(see(normal,left,'.')),not(see(normal,up,'#')).
do(move(right)):-see(normal,up-left,'-').