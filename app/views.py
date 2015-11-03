from flask import render_template
from app import app

@app.route('/')
@app.route('/index')
def index():
    user = {'nickname':'Timon'}
    return render_template('index.html',
                           title = 'Awesome Lights',
                           user = user)
