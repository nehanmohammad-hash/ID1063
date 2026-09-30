from datetime import date

day = int(input("Day: "))
month = int(input("Month: "))

year = 2026
target_date = date(year, month, day)
start_date = date(year, 1, 1)

# Calculate elapsed days (inclusive of the given day)
elapsed = (target_date - start_date).days + 1

print(f"Elapsed: {elapsed}")

