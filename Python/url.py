from datetime import date, timedelta

page_number = 1

sdate = date(2015, 1, 1)
edate = date(2020, 9, 7)

delta = edate - sdate

for i in range(delta.days + 1):
    
    day = sdate + timedelta(days=i)
    #print(day)
    new_day = day.strftime("%d/%m/%Y")
    page_number += 1
    
    mdate = new_day.split("/")
    mm = int(mdate[1])
    yy = mdate[2]
    # if page_number == 400:
    #     # yy += 1
    #     page_number = 1

        

    url = "https://www.ebmnews.com/" + str(yy) +"/month/" + str(mm) +"/page/" + str(page_number) + "/"
    print(url)
