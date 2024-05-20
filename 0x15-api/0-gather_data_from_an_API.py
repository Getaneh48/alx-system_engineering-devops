#!/usr/bin/python3
"""a Python script that, using this REST API, for a given employee ID,
returns information about his/her TODO list progress
"""

if __name__ == '__main__':
    """main function"""
    import requests
    import sys

    eid = sys.argv[1]
    todos_url = f"https://jsonplaceholder.typicode.com/users/{eid}/todos"
    user_url = f"https://jsonplaceholder.typicode.com/users/{eid}"
    todos = requests.get(todos_url).json()
    user = requests.get(user_url).json()

    d_task = 0
    for todo in todos:
        if todo["completed"] is True:
            d_task += 1
    t_task = len(todos)
    print(f"Employee {user['name']} is done with tasks({d_task}/{t_task})")
    for todo in todos:
        print(f"\t{todo['title']}")
