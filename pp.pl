%%%%%%%%%%%%%%%%%%%%%%%
% HECHOS
%%%%%%%%%%%%%%%%%%%%%%%

% Los objetos
%
objeto(0, piedra).
objeto(1, papel).
objeto(2, tijera).

% Qué objeto gana a qué objeto
%
ganar(piedra, tijera).
ganar(tijera, papel).
ganar(papel, piedra).

%%%%%%%%%%%%%%%%%%%%%%%
% REGLAS
%%%%%%%%%%%%%%%%%%%%%%%

% Analizamos quien gana
%
quiengana(X, X):-
	   writeln('Empatamos!').
quiengana(X, Obj):-
	   ganar(X, Obj)
   ,	writeln('Tu ganas!\n').
quiengana(X, Obj):-
	   ganar(Obj, X)
   ,	writeln('Yo gano!\n').

% Regla para lanzar 1 jugada
%
jugada(X) :-
      maplist(write, ['Tu juegas con ', X, '\n'])
   ,  Y is random(3)
   ,  objeto(Y, Obj)
   ,  maplist(write, ['Yo juego con ', Obj, '\n'])
   ,  quiengana(X, Obj).

% Hacer que puedas jugar con un número

/*jugada(X) :-
    not(number(x)), write('Tu juegas con objeto'),
    tab(2),writeln(x),
    Y is random(3),
    objeto(Y,Obj),
    write('juego con'),
    writeln(Obj),
    quiengana(X,Obj).

jugada(X) :-
     integer(X), 0=<X, X=<3,
     write('Tu juegas con numero'),tab(2),
     write(X),objeto(X,XX),tab(2),
     write('que es el objeto'),tab(2),writeln(XX),
     Y is random(3),write('Yo juego con'),objeto(Y,YY),writeln(YY),
     quien gana(XX,YY).

*/
