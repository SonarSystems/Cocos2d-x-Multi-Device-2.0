
var HelloWorldLayer = cc.Layer.extend({
    ctor:function () {
        //////////////////////////////
        // 1. super init first
        this._super();
                                      
        var director = cc.Director.getInstance( );
        var winSize = director.getVisibleSize( );
        var origin = director.getVisibleOrigin( );

        var background = new cc.Sprite( res.Background_png );
        background.setAnchorPoint( 0.5, 0.5 );
        background.setPosition( winSize.width / 2 + origin.x, winSize.height / 2 + origin.y );
        this.addChild( background );
                                      
        var playButton = new cc.Sprite( res.PlayButton_png );
        playButton.setAnchorPoint( 0.5, 0.5 );
        playButton.setPosition( winSize.width / 2 + origin.x, winSize.height / 2 + origin.y );
        this.addChild( playButton );
                                      
        var soundButton = new cc.Sprite( res.SoundButton_png );
        soundButton.setAnchorPoint( 0.5, 0.5 );
        soundButton.setPosition( winSize.width / 2 + origin.x, soundButton.height / 2 + origin.y );
        this.addChild( soundButton );
                                      
        var facebookButton = new cc.Sprite( res.Facebook_png );
        facebookButton.setAnchorPoint( 0.5, 0.5 );
        facebookButton.setPosition( facebookButton.width / 2 + origin.x, winSize.height - ( facebookButton.height / 2 ) + origin.y );
        this.addChild( facebookButton );

        var twitterButton = new cc.Sprite( res.Twitter_png );
        twitterButton.setAnchorPoint( 0.5, 0.5 );
        twitterButton.setPosition( winSize.width - ( twitterButton.width / 2 ) + origin.x, winSize.height - ( twitterButton.height / 2 ) + origin.y );
        this.addChild( twitterButton );

        return true;
    }
});

var HelloWorldScene = cc.Scene.extend({
    onEnter:function () {
        this._super();
        var layer = new HelloWorldLayer();
        this.addChild(layer);
    }
});

