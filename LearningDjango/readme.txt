Tutorial: https://youtu.be/Rp5vd34d-z4?si=T5xJbebU9a9Rqrmb

Chapter 1
---------
step-1: create a project
    django-admin startproject myproject
step-2: goto the main project directory
step-3: run the server
    py manage.py runserver
step-4: from main project directory open 'urls.py' and add paths into the urlpatterns directory. E.g.; homepage, about etc.
    note: these are the page routes
step-5: create views for the paths or pages. 
    E.g.; homepage(request):
             return HttpResponse("Hellow World")
step-6: goto urls.py and import views.py then add the views to the specific paths
    E.g.; from . import views
          path('',views.homepage), 2nd parameter is callback function
          path('about/',views.about), etc
step-7: step (1-6) is very basic just showing text as a website, now from this step-7 we will create different webpage using html,css and js
    goto main project directory and create a directory 'templates'
step-8: create different html files
    E.g.; inside templates create homepage.html
step-9: telling django where templates are
    goto setting.py inside this TEMPLATES[
    'DIR':['templates']    
    ]
step-10: now implement the templates inside the views.py
    from django.shortcuts import render
    def homepage(request):
        return render(request, 'home.html')
    def about(request):
        return render(request, 'about.html')
step-11: to add css and js to html files create a directory named 'static' in the main project directory;
    why static? because this directory contains staic assets
    create css and js directory
    inside css create style.css
step-12: telling django where the static files are located; for this goto settings.py and under neth 'STATIC_URL' add a line: 
    STATICFILES_DIRS = [
        os.path.join(BASE_DIR,'staic')
    ]
step-13: now implement the css on html files
    1st-> load the 'staic' folder just under the <!DOCTYPE html> 
        {% load static %}
    2nd-> link the css file 
        <link rel="stylesheet" href="{% static 'css/style.css' %}">
        for js <script src = "{% static 'js/main.js' %}" defer></script>
            here 'defer' means load this script after loading all of the pages load this js

Chapter 2: Apps and Templates
-----------------------------








Chapter 3: Models and Migrations
--------------------------------

Chapter 4: Django ORM
---------------------

Chapter 5: Django ORM
---------------------

Chapter 6: Pages URLs and Slugs
-------------------------------

Chapter 7: Upload Images
------------------------

Chapter 8: Challenge
---------------------