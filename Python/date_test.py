from datetime import date, timedelta

page_number = 894443    
sdate = date(2012, 1, 1)   # start date
edate = date(2014, 2, 1)  # end date



delta = edate - sdate       # as timedelta

for i in range(delta.days + 1):
    
    day = sdate + timedelta(days=i) 
    #print(day) # this will print in the format yyyy-mm-dd
    
    url = "http://archive.indianexpress.com/news/sebi-committee-examining-eipo-proposal/" + str(page_number) 
    print(url)

    new_day = day.strftime("%d/%m/%Y") + ","+ str(page_number)  #for printing date in dd-mm-yyyy
    page_number += 1
    print(new_day)