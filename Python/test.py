from datetime import date, timedelta

page_number = 1

sdate = date(2015, 1, 1)
edate = date(2020, 9, 7)

delta = edate - sdate

for i in range(days <= 365):
    
    mdate = new_day.split("/")
    mm = int(mdate[1])
    yy = mdate[2]

    url = "https://www.ebmnews.com/" + str(yy) + '''"/page/" + str(page_number) +''' + "/"
    print(url)