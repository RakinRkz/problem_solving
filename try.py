import requests
import pprint
from bs4 import BeautifulSoup as bs


def getUsage(username, password):
    with requests.Session() as s:

        headers = {
            "Content-Type": "application/x-www-form-urlencoded",
        }

        data = "username=" + username + "&password=" + password

        r = s.post(
            "http://10.220.20.12/index.php/home/loginProcess",
            headers=headers,
            data=data,
            verify=False
        )

        soup = bs(r.content.decode("utf-8"), "html.parser")

        print(soup)

        table = soup.find("table", attrs={"class": "table invoicefor"})
        table_body = table.find("tbody")

        rows = table_body.find_all("tr")

        usageData = []

        for row in rows:
            cols = row.find_all("td")
            cols = [ele.text.strip() for ele in cols]
            usageData.append([ele for ele in cols if ele])  # Get rid of empty values

        usageData = usageData[5][1].strip(' Minute')
        usageData = int(usageData)

        return usageData
    
_username = 'rakinuzzaman'
_password = 'rakin1234'
print(getUsage(_username, _password))
