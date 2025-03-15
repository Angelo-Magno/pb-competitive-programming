def time_in_seconds(hour, minute, second):
    return (hour * 60 * 60) + (minute * 60) + second


def format_time(time):
    hours = time // (60 * 60)
    time %= 60 * 60
    minutes = time // 60
    time %= 60
    seconds = time

    return hours, minutes, seconds


_, start_day = input().split()
start_day = int(start_day)
hour, minute, second = map(int, input().split(":"))

start_event_in_seconds = time_in_seconds(hour, minute, second)

_, end_day = input().split()
end_day = int(end_day)
hour, minute, second = map(int, input().split(":"))

end_event_in_seconds = time_in_seconds(hour, minute, second)

if start_event_in_seconds > end_event_in_seconds:
    time = time_in_seconds(24, 0, 0) - start_event_in_seconds + end_event_in_seconds
    days = end_day - (start_day + 1)
else:
    time = end_event_in_seconds - start_event_in_seconds
    days = end_day - start_day

hours, minutes, seconds = format_time(time)

print(f"{days} dia(s)")
print(f"{hours} hora(s)")
print(f"{minutes} minuto(s)")
print(f"{seconds} segundo(s)")
