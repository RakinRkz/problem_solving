import requests


def login(username, password):
    login_url = "http://10.220.20.12/index.php/home/loginProcess"

    payload = {
        "username": username,
        "password": password
    }

    headers = {
        "Content-Type": "application/x-www-form-urlencoded"
    }

    try:
        with requests.Session() as session:
            response = session.post(login_url, headers=headers, data=payload, verify=True)
            response.raise_for_status()  # Raise an HTTPError for bad responses (4xx or 5xx)
            
            # You can check the response status code or content if needed
            print("Response Status Code:", response.status_code)
            print("Response Content:", response.content)
            
            # Do further processing or return the response object if needed
            return response
    except requests.RequestException as e:
        print("Request Exception:", e)


# Example usage
login("rakinuzzaman", "rakin1234")
