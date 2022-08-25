@charset "utf-8";
/* CSS Document */

a:link {text-decoration: none; color: darkblue; font-family: 幼圆}
a:visited {text-decoration: none; color: darkgreen; font-family: 幼圆}
a:hover {color: grey; font-family: 幼圆}
a:active {color: #0000FF; font-family: 幼圆}
a,img {border-style: none; outline: none !important}
a#alt:link {text-indent: 2em; background: #EAF2D3}
a#alt:visited {text-indent: 2em; background: #EAF2D3}
a#alt:hover {text-indent: 2em; background: #EAF2D3}
a#alt:active {text-indent: 2em; background: #EAF2D3}

#page{page-break-after: always;}
body {font-size:100%; padding:2em; font-family: "Times New Roman"}
ul {font-size:1.5em;  line-height: 1.5; font-family: 黑体}
ul.alt {font-size:0.9em;  line-height: 1.2; font-family: 宋体; margin: 0}
h1 {font-size:2em; text-align: center; color: darkblue; font-family: 黑体}
h2 {font-size:1.5em; color: green}
h2.big {font-size:1.5em; color: darkblue; font-family: 黑体}
h3 {font-size:1.2em; text-indent:0.5em; color: green}
h4 {font-size:1em; text-indent:1em}


p.head {text-align: right; color: grey; font-family: 方正姚体}
p.paragraph {text-indent: 2em; line-height: 1.5}
p.center {text-align: center}
p.name_fig {text-align: center; line-height: 1.5; font-size: 0.9em; margin-left:2em; margin-right:2em}
p.name_table {line-height: 1.5; font-size: 0.9em; margin-left:2em; margin-right:2em}


p.premark {text-align: center; line-height: 1.5; font-size: 0.8em; margin-left:4em; margin-right:4em}
p.tremark {line-height: 1.5; margin-left:2em; font-size: 0.8em}
p.seq {line-height: 1.5; font-size: 0.8em; margin-left:2em; margin-right:2em; font-family:Courier New}
p.ref {font-family:Arial; line-height: 1.5; font-size: 0.9em}

img.logo {height: 40px}
img.exp {width:300px;}
img.exp1{width:400px;}
img.normal {height: auto}
img.normal1 {width:500px}
img.normal2 {height:auto; width:200px}
img.normal3 {width:60%}
img.normal4 {height:auto; width:350px}
img.small {height: 500px; width: 50%}
img.small2 {height: auto; width: 50%}
img.small3 {height: auto; width: 70%}
#img.small4 {height: auto; width: 65%}
#img.small5 {height: auto;  width: 55%}
img.small4{height:50%;width:50%}
img.small5{height:40%;width:40%}
img.floating {height:auto; width:450px}
img.wid {height:550px; width:auto}
img.wid2 { width:700px}
table {font-family:Calibri, Arial, Helvetica, sans-serif; width:100%; border-collapse:collapse; text-align:center; padding:3px 7px 2px 7px;margin:1em 0;}

#tb{overflow: auto; width: 98%; height: 100%;margin-left:auto;margin-right:auto;}
th{background:#328aa4 url(tr_back.gif) repeat-x;color:#fff;}
td{background:#e5f1f4;}
tr.even td{background:#e5f1f4;}
tr.odd td{background:#f8fbfc;}
.tf1
  {
  width:98%;
  }
.tf1 th 
  {
  font-size:1.1em;
  text-align:center;
  background:#328aa4 url(tr_back.gif) repeat-x;color:#fff;
  }
.tf1 td
  {
  font-size:1em;
  padding:3px 7px 2px 7px;
  text-align:center;
  }


.tf2 th
  {
  font-size:1.1em;
  text-align:center;
  background:#328aa4 url(tr_back.gif) repeat-x;color:#fff;
  }
.tf2 td 
  {
  line-height:150%;
  text-align:center;
  
  }
.tf2 tr:hover{background-color:#ecfbd4;}
.tf2 tr:hover td{background:none;}

.tf3 td .over, tr.even td.over, tr.odd td.over{background:#ecfbd4;}
.tf3 td.down, tr.even td.down, tr.odd td.down{background:#bce774;color:#fff;}
.tf3 td.selected, tr.even td.selected, tr.odd td.selected{background:#bce774;color:#555;}




  
  
.albumSlider {width:600px; height:500px; margin:0 auto; border:2px solid #CCC; padding-right:10px; font-size:10px;
	position:relative;overflow:hidden;}
.albumSlider .fullview{position:relative; float:left;}
.albumSlider .fullview,
.albumSlider .fullview img {width:480px;}
	.albumSlider .fullview img {position:absolute; top:0; left:0;}
.albumSlider .slider{width:110px;height:490px;background:#fff;
	position:absolute;right:3px; margin-top:-3px; border-left:2px solid #CCC;}
		.albumSlider .imglistwrap{height:448px; overflow:hidden;margin-right:5px; position:relative;}
	.albumSlider .imglist{position:relative;}
	.albumSlider ul{list-style-type: none; padding-left:0}
	.albumSlider li{height:96px;margin-top:0;clear:both; list-style:none;}
	.albumSlider li img{width:90px;height:90px; float:right; display:inline;
		margin:2px 2px 0 0;border:1px solid #EAF2D3;}
	.albumSlider a{width:103px;height:96px;display:block; outline:none;}
	.albumSlider li a:hover,
	.albumSlider li.current a{background:url(../images/album-slider-arrow_box.png) no-repeat 0 0;}
.albumSlider .button {width: 100px; height:16px;cursor:pointer;margin-left:5px;
	background:url(../images/album-slider-button.png) no-repeat 50% 100%;}
		.albumSlider .movebackward{background-position: 50% 0;}
		

#goTopBtn {POSITION: fixed; TEXT-ALIGN: center; LINE-HEIGHT: 30px; WIDTH: 30px; BOTTOM: 35px; HEIGHT: 33px; FONT-SIZE: 12px; CURSOR: pointer; RIGHT: 0px; _position: absolute; _right: auto}
a:link {text-decoration: none; color: darkblue; }
a:visited {text-decoration: none; color: darkblue;}
a:hover {color: grey;}
a:active {color: #0000FF;}
a,img {border-style: none; outline: none !important}
a#alt:link {text-indent: 2em; background: #EAF2D3}
a#alt:visited {text-indent: 2em; background: #EAF2D3}
a#alt:hover {text-indent: 2em; background: #EAF2D3}
a#alt:active {text-indent: 2em; background: #EAF2D3}
/* dl {font-size:1.5em; text-indent: 2em; line-height: 1.5;}
dl.alt {font-size:0.8em; text-indent: 2em; line-height: 1.2;} */

/* 问答 */
.question{border:1px solid #A7C942;background-color:#A7C942; text-align:left}
.answer{border:1px solid #A7C942; text-align:left}
#annotation td:nth-child(3){line-height:150%;text-align:left;text-indent:2em}

/* lanmu-content */
.lanmu-content{width:90%;margin:0 auto;}
.lanmu-list{display:block;margin:0px;}
.lanmu-list dd{width:96%;padding-top:2px;border-right:1px solid #e1D1D1;margin:0px;border-radius:3px;font:12px;}
.lanmu-list dd a{width:100%;display:block;height:22px;background:#e8e8ff;border-bottom:1px solid #eee;border-top:1px solid #fff;border-left:1px solid #999;border-right:1px solid #eee;font:12px Georgia "宋体"; color:#444444;padding-left:5px; line-height: 22px;vertical-align:center;border-radius:3px;}
.lanmu-list dd a:hover{padding-left:3px;}
.lanmu-list dd a:hover,.lanmu-list dd a.current{border-left:2px solid #336ECD;background-color:#336ECD;color:white;font-weight:bold;font:12px;}
.title{display:block;height:22px;line-height:22px;background:#F7F7F7;font:12px/38px "宋体"; color:#000000;padding-left:2px;width:92%;margin:0px;border:1px solid #D1D1D1;padding-top:2px;border-radius:3px;background-image:-moz-linear-gradient(top, #EEEEEE, #FFFFFF); background-image:-webkit-gradient(linear, left top, left bottom, color-stop(0, #EEEEEE), color-stop(1,#FFFFFF));filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#EEEEEE', endColorstr='#FFFFFF', GradientType='0')}
.title a{color:black;height:22px;line-height:22px;overflow:hidden;padding-top:2px;margin:2px;border-radius:3px}
.mulu{display:block;height:22px;line-height:22px;font:14px/30px "宋体"; color:#008000;padding-left:5px;border:1px solid #D1D1D1;padding-top:2px;background-image:-moz-linear-gradient(top, #EEEEEE, #FFFFFF); background-image:-webkit-gradient(linear, left top, left bottom, color-stop(0, #EEEEEE), color-stop(1,#FFFFFF));filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#EEEEEE', endColorstr='#FFFFFF', GradientType='0')}
.mulu a{color:#008000;height:22px;line-height:22px;overflow:hidden;padding-top:2px;margin:2px;background-image:-moz-linear-gradient(top, #EEEEEE, #FFFFFF); background-image:-webkit-gradient(linear, left top, left bottom, color-stop(0, #EEEEEE), color-stop(1,#FFFFFF));filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='#EEEEEE', endColorstr='#FFFFFF', GradientType='0')}
/* 软件列表 */
#software th{width:20%;border:1px solid #A7C942;background-color:#A7C942;height:30px;valign:middle;}
#software td{width:20%;border-bottom:1px solid #A7C942;border-right:1px solid #A7C942;color:black;height:28px;valign:middle;text-align:center;font-weight:bold }
#software{border-left:1px solid #A7C942;}

#result_note th{text-align:left;background:#A7C942;padding-left:10px;line-height:150%}
#result_note td{text-align:left;border-left:1px solid #A7C942;border-bottom:1px solid #A7C942;line-height:150%;padding:10px}
#result_note{border-right:1px solid #A7C942}

/*help*/
#help_outer{width:80%;border:1px solid #D1D1D1;padding:2px;background:#DDDFDD;border-radius:3px;}
#help_head{width:100%;height:20px;border:1px solid #D1D1D1;padding:0px;font:24px "Times New Roman" '宋体';padding:10px;margin:1px;background:#F7F7F7;border-radius:3px;color:green}
#help_body{width:100%;height:800px;border:1px solid #D1D1D1;margin:0px;background:white;border-radius:3px;}
.first_p{font:16px "Times New Roman" "宋体";line-height:100%;}
.second_p{font:16px "Times New Roman" "宋体";text-indent:1em;line-height:150%;}
.third_p{font:16px "Times New Roman" "宋体";text-indent:2em;line-height:150%;}
#thx{background:#F7F7F7;padding:5px 10px 5px 10px;border-bottom:1px solid #D1D1D1;line-height:150%;text-align:left;text-indent:2em;}
#thx p{line-height:30px;-webkit-margin-before: 0em;
-webkit-margin-after: 0em;}
#help_content{background:#F7F7F7;padding:5px 10px 5px 10px;border:1px solid #E7E7F7}
.text_content{background:#D5D5E6;padding:5px;border-radius:3px; text-align:left;}
.printmenu{display:none;}
#main{width:78%;float:right;position:absolute;right:35px;overflow-y:hidden;overflow-x:hidden;}
