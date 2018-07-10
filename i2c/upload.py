import urllib2
import json
import random


def upload_image(image_path):
    file_name = image_path.split("/")[-1]
    # To get a unique file name
    random_file_name = str(random.randint(10000, 99999)) + "-" + file_name

    my_file = open(image_path, "rb")
    my_bytes = my_file.read()
    my_url = "https://firebasestorage.googleapis.com/v0/b/test-a8261.appspot.com/o/{}".format(random_file_name)

    my_headers = {"Content-Type": "text/plain"}
    my_method = "POST"
    my_request = urllib2.Request(my_url, data=my_bytes, headers=my_headers)
    my_request.get_method = lambda: my_method

    try:
        loader = urllib2.urlopen(my_request)
    except urllib2.URLError as e:
        message = json.loads(e.reason())
        return 102, message
    else:
        # the image link of the uploaded image
        image_link = my_url + "?alt=media"
        return 101, image_link
