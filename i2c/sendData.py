
import requests
import json
'''
Requierments
# pip install requests


'''
def send_url(Photourl):
    url = 'http://104.196.121.39:5000/camera'
    payload = {
        'urll':Photourl,
    }
    headers = {'content-type': 'application/json'}
    r = requests.post(url, data=json.dumps(payload), headers=headers)
    print r.status_code, r.reason


def send_water(water_m):
    url = 'http://104.196.121.39:5000/water'
    payload = {
        'water':water_m,
    }
    headers = {'content-type': 'application/json'}
    r = requests.post(url, data=json.dumps(payload), headers=headers)
    print r.status_code, r.reason


def send_electric(electric_m):
    url = 'http://104.196.121.39:5000/electric'
    payload = {
        'electric':electric_m,
    }
    headers = {'content-type': 'application/json'}
    r = requests.post(url, data=json.dumps(payload), headers=headers)
    print r.status_code, r.reason    



def send_temp(val1,val2):
    Interior_Value = val1
    Exterior_Value = val2
    url = 'http://104.196.121.39:5000/temp'
    payload = {
        'i_val':Interior_Value,
        'e_val':Exterior_Value
    }
    headers = {'content-type': 'application/json'}
    r = requests.post(url, data=json.dumps(payload), headers=headers)
    print r.status_code, r.reason





# test
# to import  ===>   from sendData import *
# and then you can call the function whenever you want
#send_url('hellooooooo5.jpg')    # camera photo url
#send_electric(100)      # electic Mesures
#send_water(50)          # water Mesures
#send_temp(30,35)        # internal value , external value
