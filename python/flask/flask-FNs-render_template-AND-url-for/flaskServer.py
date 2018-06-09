# Simple Flask Program depicting 
# 1 render_template(),and
# 2 url_for()

from flask import Flask, render_template
app = Flask(__name__)

@app.route("/")
@app.route("/window_1")
def fn1():
    return render_template("window_1.html")

@app.route("/window_2")
def fn2():
    return render_template("window_2.html")

if __name__ == "__main__":
    app.debug = True
    app.run(host = "0.0.0.0", port = 5000)