module.exports = {
  // 书籍信息
  title: '书名',
  description: '描述',
  isbn: '图书编号',
  author: 'JokerDragon',
  lang: 'zh-hans',
  language: "zh-hans",

  // 插件列表
  plugins: [
    "-lunr",  // 默认搜索附带 This plugin provides a backend for the search plugin.
    "-search",  // 默认搜索
    "search-pro",  //支持中文搜索
    "code", // 代码块加行号和复制按钮
    'expandable-chapters',  // 折叠菜单
    // "back-to-top-button",  // 返回顶部按钮
    "splitter",   // splitter 侧边栏宽度可调节
    // "page-treeview", // 生成页内目录
    "ancre-navigation", // 悬浮目录
    "donate", //打赏插件
    "pageview-count", // 阅读量计数  :TODO
    "lightbox", // 弹出大图
    "tbfed-pagefooter", //为页面添加页脚
    "edit-link", // Edit This Page
  ],

  // 插件全局配置
  pluginsConfig: {
    "code": {
      "copyButtons": true,
    },
    // "page-treeview": {
    //   "copyright": "Copyright &#169; JokerDragon",
    //   "minHeaderCount": "2",
    //   "minHeaderDeep": "2"
    // },
    "ancre-navigation": {
      "mode": "float",  // floar,pageTop
      "maxTocDepth": 2,
      "minTocSize": 2
    },
    "donate": {
      "wechat": "image/wechatpay.png",
      "alipay": "image/alipay.jpg",
      "title": "",
      "button": "赏",
      "alipayText": "支付宝打赏",
      "wechatText": "微信打赏"
    },
    "tbfed-pagefooter": {
      "copyright": "Copyright &copy JokerDragon 2022",
      "modify_label": "该文件修订时间：",
      "modify_format": "YYYY-MM-DD HH:mm:ss"
    },
    "edit-link": {
      "base": "https://gitee.com/PaperDragon/note-book/edit/gitbook/Markdown-notebook/",
      // https://gitee.com/PaperDragon/note-book/edit/master/Markdown-notebook/git/git%E6%9B%B4%E6%96%B0%E8%BF%9C%E7%A8%8B%E5%88%86%E6%94%AF.md
      "label": "编辑此页面"
  },

  },


  variables: {},

  //左侧自定义链接
  links: {
    "sidebar": {
      "Home": "https://www.baidu.com",
      "邮箱": "2678885646@qq.com",
    },
  }


};