<!-- Nav Bar -->
<header>
  <nav class="navbar navbar-default" role="navigation">
  <!-- Brand and toggle get grouped for better mobile display -->
  <div class="navbar-header">
    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-ex1-collapse">
      <span class="sr-only">Toggle navigation</span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
      <span class="icon-bar"></span>
    </button>
    <h1><a href="/">{{site.name}} <small>{{site.slogan}}</small></a></h1>
     <a href="https://twitter.com/share" class="twitter-share-button" data-url="http://maidan.is-amazing.com" data-text="Maidan Is Amazing" data-via="shumushin" data-hashtags="євромайдан">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+'://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);}}(document, 'script', 'twitter-wjs');</script>
      <div class="fb-like" data-href="{{site.hostname}}" data-layout="button_count" data-action="like" data-show-faces="true" data-share="true"></div>
  </div>

  <!-- Collect the nav links, forms, and other content for toggling -->
  <div class="collapse navbar-collapse navbar-ex1-collapse">
    <ul class="nav navbar-nav navbar-right col-sm-12 col-lg-8 col-md-8" style="margin-top: 20px;">
       <!-- Header menu generation using _config.yml -->
        {% for link in site.header-navigation %}
        {% assign current = nil %}
        {% if page.url == link.url or page.layout == link.layout %}
          {% assign current = 'active' %}
        {% endif %}        
         <li class="{% if forloop.first %}first{% endif %} {{ current }} {% if forloop.last %}last{% endif %}">
          <a class="{{ current }} button" href="{{ link.url }}"{% if link.external == true %} target="_blank"{% endif %}>{{ link.text }}</a>
         </li>
        {% endfor %}
    </ul>
    
  </div><!-- /.navbar-collapse -->
</nav>
</header>
<!-- End Nav -->
