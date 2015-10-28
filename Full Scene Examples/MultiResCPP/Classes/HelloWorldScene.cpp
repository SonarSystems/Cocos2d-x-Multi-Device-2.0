#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance( )->getVisibleSize( );
    Vec2 origin = Director::getInstance( )->getVisibleOrigin( );
    
    Sprite *background = Sprite::create( "GameBackground.png" );
    background->setAnchorPoint( Vec2( 0.5, 0.5 ) );
    background->setPosition( Vec2( visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y ) );
    this->addChild( background );
    
    Sprite *play = Sprite::create( "PlayButton.png" );
    play->setAnchorPoint( Vec2( 0.5, 0.5 ) );
    play->setPosition( Vec2( visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y ) );
    this->addChild( play );
    
    Sprite *sound = Sprite::create( "SoundOn.png" );
    sound->setAnchorPoint( Vec2( 0.5, 0.5 ) );
    sound->setPosition( Vec2( visibleSize.width / 2 + origin.x, visibleSize.height * 0.1 + origin.y ) );
    this->addChild( sound );
    
    Sprite *twitter = Sprite::create( "Twitter.png" );
    twitter->setAnchorPoint( Vec2( 0.5, 0.5 ) );
    twitter->setPosition( Vec2( twitter->getContentSize( ).width / 2 + origin.x, visibleSize.height - ( twitter->getContentSize( ).height / 2 ) + origin.y ) );
    this->addChild( twitter );
    
    Sprite *facebook = Sprite::create( "Facebook.png" );
    facebook->setAnchorPoint( Vec2( 0.5, 0.5 ) );
    facebook->setPosition( Vec2( visibleSize.width - ( facebook->getContentSize( ).width / 2 ) + origin.x, visibleSize.height - ( facebook->getContentSize( ).height / 2 ) + origin.y ) );
    this->addChild( facebook );
    
    return true;
}
