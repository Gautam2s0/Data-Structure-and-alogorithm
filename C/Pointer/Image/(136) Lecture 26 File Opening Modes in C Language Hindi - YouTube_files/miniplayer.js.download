(function(g){var window=this;'use strict';var vrb=function(a,b){g.V.call(this,{I:"button",Ma:["ytp-miniplayer-expand-watch-page-button","ytp-button","ytp-miniplayer-button-top-left"],X:{title:"{{title}}","data-tooltip-target-id":"ytp-miniplayer-expand-watch-page-button","aria-keyshortcuts":"i","data-title-no-tooltip":"{{data-title-no-tooltip}}"},V:[{I:"svg",X:{height:"24px",version:"1.1",viewBox:"0 0 24 24",width:"24px"},V:[{I:"g",X:{fill:"none","fill-rule":"evenodd",stroke:"none","stroke-width":"1"},V:[{I:"g",X:{transform:"translate(12.000000, 12.000000) scale(-1, 1) translate(-12.000000, -12.000000) "},
V:[{I:"path",X:{d:"M19,19 L5,19 L5,5 L12,5 L12,3 L5,3 C3.89,3 3,3.9 3,5 L3,19 C3,20.1 3.89,21 5,21 L19,21 C20.1,21 21,20.1 21,19 L21,12 L19,12 L19,19 Z M14,3 L14,5 L17.59,5 L7.76,14.83 L9.17,16.24 L19,6.41 L19,10 L21,10 L21,3 L14,3 Z",fill:"#fff","fill-rule":"nonzero"}}]}]}]}]});this.J=a;this.Ta("click",this.onClick,this);this.updateValue("title",g.eU(a,"Expand","i"));this.update({"data-title-no-tooltip":"Expand"});this.addOnDisposeCallback(g.cU(b.Md(),this.element))},wrb=function(a){g.V.call(this,
{I:"div",
S:"ytp-miniplayer-ui"});this.pg=!1;this.player=a;this.T(a,"minimized",this.Ah);this.T(a,"onStateChange",this.XR)},xrb=function(a){g.wV.call(this,a);
this.B=new g.KK(this);this.j=new wrb(this.player);this.j.hide();g.pU(this.player,this.j.element,4);a.rg()&&(this.load(),g.Ou(a.getRootNode(),"ytp-player-minimized",!0))};
g.w(vrb,g.V);vrb.prototype.onClick=function(){this.J.Qa("onExpandMiniplayer")};g.w(wrb,g.V);g.k=wrb.prototype;
g.k.FO=function(){this.tooltip=new g.OX(this.player,this);g.L(this,this.tooltip);g.pU(this.player,this.tooltip.element,4);this.tooltip.scale=.6;this.Vc=new g.$V(this.player);g.L(this,this.Vc);this.yk=new g.V({I:"div",S:"ytp-miniplayer-scrim"});g.L(this,this.yk);this.yk.Da(this.element);this.T(this.yk.element,"click",this.xJ);var a=new g.V({I:"button",Ma:["ytp-miniplayer-close-button","ytp-button"],X:{"aria-label":"Close"},V:[g.cG()]});g.L(this,a);a.Da(this.yk.element);this.T(a.element,"click",this.Qp);
a=new vrb(this.player,this);g.L(this,a);a.Da(this.yk.element);this.wv=new g.V({I:"div",S:"ytp-miniplayer-controls"});g.L(this,this.wv);this.wv.Da(this.yk.element);this.T(this.wv.element,"click",this.xJ);var b=new g.V({I:"div",S:"ytp-miniplayer-button-container"});g.L(this,b);b.Da(this.wv.element);a=new g.V({I:"div",S:"ytp-miniplayer-play-button-container"});g.L(this,a);a.Da(this.wv.element);var c=new g.V({I:"div",S:"ytp-miniplayer-button-container"});g.L(this,c);c.Da(this.wv.element);this.KZ=new g.aX(this.player,
this,!1);g.L(this,this.KZ);this.KZ.Da(b.element);b=new g.$W(this.player,this);g.L(this,b);b.Da(a.element);this.nextButton=new g.aX(this.player,this,!0);g.L(this,this.nextButton);this.nextButton.Da(c.element);this.Lj=new g.HX(this.player,this);g.L(this,this.Lj);this.Lj.Da(this.yk.element);this.Oc=new g.fX(this.player,this);g.L(this,this.Oc);g.pU(this.player,this.Oc.element,4);this.gJ=new g.V({I:"div",S:"ytp-miniplayer-buttons"});g.L(this,this.gJ);g.pU(this.player,this.gJ.element,4);a=new g.V({I:"button",
Ma:["ytp-miniplayer-close-button","ytp-button"],X:{"aria-label":"Close"},V:[g.cG()]});g.L(this,a);a.Da(this.gJ.element);this.T(a.element,"click",this.Qp);a=new g.V({I:"button",Ma:["ytp-miniplayer-replay-button","ytp-button"],X:{"aria-label":"Close"},V:[g.Uva()]});g.L(this,a);a.Da(this.gJ.element);this.T(a.element,"click",this.l$);this.T(this.player,"presentingplayerstatechange",this.Td);this.T(this.player,"appresize",this.Ib);this.T(this.player,"fullscreentoggled",this.Ib);this.Ib()};
g.k.show=function(){this.wf=new g.Au(this.Gw,null,this);this.wf.start();this.pg||(this.FO(),this.pg=!0);0!==this.player.getPlayerState()&&g.V.prototype.show.call(this);this.Oc.show();this.player.unloadModule("annotations_module")};
g.k.hide=function(){this.wf&&(this.wf.dispose(),this.wf=void 0);g.V.prototype.hide.call(this);this.player.rg()||(this.pg&&this.Oc.hide(),this.player.loadModule("annotations_module"))};
g.k.xa=function(){this.wf&&(this.wf.dispose(),this.wf=void 0);g.V.prototype.xa.call(this)};
g.k.Qp=function(){this.player.stopVideo();this.player.Qa("onCloseMiniplayer")};
g.k.l$=function(){this.player.playVideo()};
g.k.xJ=function(a){if(a.target===this.yk.element||a.target===this.wv.element)g.DL(this.player.Sb())?this.player.pauseVideo():this.player.playVideo()};
g.k.Ah=function(){g.Ou(this.player.getRootNode(),"ytp-player-minimized",this.player.rg())};
g.k.We=function(){this.Oc.Gc();this.Lj.Gc()};
g.k.Gw=function(){this.We();this.wf&&this.wf.start()};
g.k.Td=function(a){g.EG(a.state,32)&&this.tooltip.hide()};
g.k.Ib=function(){g.rX(this.Oc,0,this.player.kb().getPlayerSize().width,!1);g.gX(this.Oc)};
g.k.XR=function(a){this.player.rg()&&(0===a?this.hide():this.show())};
g.k.Md=function(){return this.tooltip};
g.k.Xf=function(){return!1};
g.k.Jf=function(){return!1};
g.k.ek=function(){return!1};
g.k.tB=function(){};
g.k.tp=function(){};
g.k.Ms=function(){};
g.k.xn=function(){return null};
g.k.HH=function(){return null};
g.k.WN=function(){return new g.te(0,0)};
g.k.Tk=function(){return new g.Tr(0,0,0,0)};
g.k.handleGlobalKeyDown=function(){return!1};
g.k.handleGlobalKeyUp=function(){return!1};
g.k.Cr=function(a,b,c,d,e){var f=0,h=d=0,l=g.gs(a);if(b){c=g.Ju(b,"ytp-prev-button")||g.Ju(b,"ytp-next-button");var m=g.Ju(b,"ytp-play-button"),n=g.Ju(b,"ytp-miniplayer-expand-watch-page-button");c?f=h=12:m?(b=g.es(b,this.element),h=b.x,f=b.y-12):n&&(h=g.Ju(b,"ytp-miniplayer-button-top-left"),f=g.es(b,this.element),b=g.gs(b),h?(h=8,f=f.y+40):(h=f.x-l.width+b.width,f=f.y-20))}else h=c-l.width/2,d=25+(e||0);b=this.player.kb().getPlayerSize().width;e=f+(e||0);l=g.le(h,0,b-l.width);e?(a.style.top=e+"px",
a.style.bottom=""):(a.style.top="",a.style.bottom=d+"px");a.style.left=l+"px"};
g.k.showControls=function(){};
g.k.jq=function(){};
g.k.Wj=function(){return!1};
g.k.mu=function(){};
g.k.Kr=function(){};
g.k.Cm=function(){};
g.k.Bm=function(){};
g.k.zq=function(){};
g.k.wp=function(){};
g.k.bx=function(){};
g.k.IH=function(){return null};g.w(xrb,g.wV);g.k=xrb.prototype;g.k.onVideoDataChange=function(){if(this.player.getVideoData()){var a=this.player.getVideoAspectRatio(),b=16/9;a=a>b+.1||a<b-.1;g.Ou(this.player.getRootNode(),"ytp-rounded-miniplayer-not-regular-wide-video",a)}};
g.k.create=function(){g.wV.prototype.create.call(this);this.B.T(this.player,"videodatachange",this.onVideoDataChange);this.onVideoDataChange()};
g.k.Ak=function(){return!1};
g.k.load=function(){this.player.hideControls();this.j.show()};
g.k.unload=function(){this.player.showControls();this.j.hide()};g.vV("miniplayer",xrb);})(_yt_player);
