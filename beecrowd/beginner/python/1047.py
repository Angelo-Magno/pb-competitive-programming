entry = list(map(int, input().split()))

start = entry[0] * 60 + entry[1]
end = entry[2] * 60 + entry[3]

if start >= end:
    game_time = end - start + 24 * 60
    print(f'O JOGO DUROU {game_time // 60} HORA(S) E {game_time % 60} MINUTO(S)')
else:
    game_time = end - start
    print(f'O JOGO DUROU {game_time // 60} HORA(S) E {game_time % 60} MINUTO(S)')
