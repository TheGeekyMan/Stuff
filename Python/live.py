import scrapy
import datetime
from newspaper import Article
import csv
import newspaper
import feedparser
import time

    def livearticles():
        bs_live = feedparser.parse("https://economictimes.indiatimes.com/rssfeedstopstories.cms")
        bs_compare = bs_live.entries[0].published
        hindu_live = feedparser.parse("https://indianexpress.com/section/world/feed/")
        hindu_compare = hindu_live.entries[0].published
        # bl_live = feedparser.parse("https://www.thehindubusinessline.com/feeder/default.rss")
        # bl_compare = bl_live.entries[0].published
        var = 1
        with open('NewsArticles.csv', 'a+', newline='', encoding="UTF-8") as file:
            writer = csv.writer(file)
            while var == 1:
                print("-----------------------------------------------------------------------------------------------------------")
                bs_live = feedparser.parse("https://economictimes.indiatimes.com/rssfeedstopstories.cms")
                for entry in bs_live.entries:
                    if entry.published > bs_compare:
                        url = entry.link
                        article = Article(url)
                        article.download()
                        article.parse()
                        article.nlp()
                        title = article.title
                        summary = article.summary
                        keywords = ', '.join(article.keywords)
                        date = entry.published
                        writer.writerow([title, date, keywords, summary, url])
                        print(entry.title)
                        print(entry.published)
                        print("the business-standard")
                        t = time.localtime()
                        current_time = time.strftime("%H:%M:%S", t)
                        print(current_time)
                    else:
                        bs_compare = bs_live.entries[0].published
                        break
                print("-----------------------------------------------------------------------------------------------------------")
                hindu_live = feedparser.parse("https://indianexpress.com/section/world/feed/")
                for entry in hindu_live.entries:
                    if entry.published > hindu_compare:
                        url = entry.link
                        article = Article(url)
                        article.download()
                        article.parse()
                        article.nlp()
                        title = article.title
                        summary = article.summary
                        keywords = ', '.join(article.keywords)
                        date = entry.published
                        writer.writerow([title, date, keywords, summary, url])
                        print(entry.title)
                        print(entry.published)
                        print("the hindu")
                        t = time.localtime()
                        current_time = time.strftime("%H:%M:%S", t)
                        print(current_time)
                    else:
                        hindu_compare = hindu_live.entries[0].published
                        break
                print("-----------------------------------------------------------------------------------------------------------")
                # bl_live = feedparser.parse("https://www.thehindubusinessline.com/feeder/default.rss")
                # for entry in bl_live.entries:
                #     if entry.published > bl_compare:
                #         url = entry.link
                #         article = Article(url)
                #         article.download()
                #         article.parse()
                #         article.nlp()
                #         title = article.title
                #         summary = article.summary
                #         keywords = ', '.join(article.keywords)
                #         date = entry.published
                #         writer.writerow([title, date, keywords, summary, url])
                #         print(entry.title)
                #         print(entry.published)
                #         print("the business line")
                #         t = time.localtime()
                #         current_time = time.strftime("%H:%M:%S", t)
                #         print(current_time)
                #     else:
                #         bl_compare = bl_live.entries[0].published
                #         break
                time.sleep(5)
