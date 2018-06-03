from flask import Flask
app = Flask(__name__)

# @ are decorators below.
@app.route("/")
@app.route("/hello")
def HelloWorld():
    # "Hello World" is returned to the user
    content = """<html>
                <title>Flask-WebServer</title>
                <body>
                <h1>Hello World!!!</h1>
                </body>
                </html>"""
    return content

if __name__ == "__main__":
    # Below given statement makes our web-server reload
    # The code as soon as it sees any change.
    app.debug = True
    # run function below is used to run the server.
    # Below 0.0.0.0 means all public ip addresses supported.
    app.run(host = "0.0.0.0", port = 5000)