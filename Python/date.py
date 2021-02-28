from datetime import date, timedelta

page_number = 39083
sdate = date(2020, 1, 1)   # start date
edate = date(2007, 1, 1)  # end date

delta = edate - sdate       # as timedelta

for i in range(delta.days + 1):
    
    day = sdate + timedelta(days=i) 
    #print(day) # this will print in the format yyyy-mm-dd
    

    # inc_cal = '01 / 01 / 2020'
    # mdate = inc_cal.split("/")
    # print(mdate)


    url = "https://economictimes.indiatimes.com/archivelist/year-" + str(year) + ",month-" + str(month) + ",starttime-" + str(page_number) + ".cms"
    print(url)


    # new_day = day.strftime("%d/%m/%Y") + "," + str(page_number) + url
    #  #for printing date in dd-mm-yyyy
    # page_number += 1
    # print(new_day)
    
    
