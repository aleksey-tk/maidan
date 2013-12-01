<!-- Nav Bar -->
<header>
  <div class="row">
    <div class="col-lg-12">
      <div class="pull-right">
        <div class="fb-like" data-href="http://maidan.alexisyes.com/" data-layout="standard" data-action="like" data-show-faces="false" data-share="true"></div>

        <ul class="nav navbar-nav">
        <!-- Header menu generation using _config.yml -->
        {% for link in site.header-navigation %}
        {% assign current = nil %}
        {% if page.url == link.url or page.layout == link.layout %}
          {% assign current = 'active' %}
        {% endif %}        
         <li class="{% if forloop.first %}first{% endif %} {{ current }} {% if forloop.last %}last{% endif %}">
          <a class="{{ current }} button" href="{{ link.url }}">{{ link.text }}</a>
         </li>
        {% endfor %}
        </ul>
      </div>
      <h1>{{site.name}} <small>{{site.slogan}}</small></h1>
      <hr />
    </div>
  </div>
</header>
<!-- End Nav -->