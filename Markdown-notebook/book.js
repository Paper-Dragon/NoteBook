module.exports = {
    // 书籍信息
    title: '书名',
    description: '描述',
    isbn: '图书编号',
    author: '作者',
    lang: 'zh-cn',
    language: "zh-cn",
    // 插件列表
    plugins: ["-lunr", "-search", "search-pro","code","theme-lou",'expandable-chapters',"back-to-top-button"],
  
    // 插件全局配置
    pluginsConfig: {
      "code": {
        "copyButtons": true
      },
      "theme-lou": {
        "color": "#FF4848", // 主题色
        "favicon": "static/favicon.ico", // favicon图标
        "logo": "static/logo.png", // 顶部左侧图标
        "appleTouchIconPrecomposed152": "static/apple.png", // apple图标
        "copyrightLogo": "assets/copyright.png",  // 底部水印LOGO
        "forbidCopy": true, // 页面是否禁止复制
        "search-placeholder": "在这里输入搜索", // 搜索框默认文本
        "book-summary-title": "目录标题", // 目录标题
        "book-anchor-title": "Search In the Article", // 本章目录标题
        "hide-elements": [".summary .gitbook-link", ".summary .divider"], // 需要隐藏的标签
        "copyright": {
          "author": "JockerDragon"  // 底部版权展示的作者名
        }
      }
    },
  
    // 模板变量
    variables: {
      // 自定义
      "themeLou": {
        // 顶部导航栏配置
        "nav": [
          {
            "target": "_blank", // 跳转方式: 打开新页面
            "url": "https://gitee.com/PaperDragon/note-book.git",  // 跳转页面
            "name": "本页面gitee仓库"  // 导航名称
          }
        ],
        // 底部打赏配置
        "footer": {
          "donate": {
            "button": "捐赠", // 打赏按钮
            "avatar": "static/wechat_logo.jpg", // 头像地址
            "nickname": "JokerDragon", // 昵称
            "message": "随意打赏，但不要超过一顿早餐钱！", // 打赏消息文本
            "text": "『 赠人玫瑰 🌹 手有余香 』", // 打赏话语
            "wxpay": "你的微信收款码地址", // 微信收款码
            "alipay": "你的支付宝收款码地址" // 支付宝收款码
          },
          "copyright": true // 是否显示版权
        }
      }
    },
  };