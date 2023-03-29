# 后期加工

- [x] ### （一）目前用户对于应用程序的设置还不能保存。另外用户可个性化的设置项目也不够完善。

  (即，增加一个logset.txt文件来保存设置，然后增加一些可以调节的东西。主要现在要保存的就是logsTimed? 下次不再提醒，还有悬浮球半径大小，或许以后还可以加上颜色)

- [ ] （二）点击系统通知后并无其他反应。

- [ ] （三）目前尚未实现对一项事项的多次提醒的功能。

- [ ] （四）目前尚未实现对于不同“重要性”的提醒事项的通知区分。

- [x] ### （五）目前桌面悬浮窗口与完成事项的操作存在低兼容性。

  （即，就是按时间顺序调整的一些操作在悬浮窗上没法同步）

- [x] （六）目前在主界面进行“完成”操作后，在桌面的悬浮窗口不能实时关闭。

  （这个好像提交前已经解决了，樂！）

- [x] （七）目前还不能隐藏主界面的默认的“关闭”按钮，未能避免软件从任务栏关闭，未能将软件在任务栏的系统托盘区显示并且从任务栏的系统托盘区将程序关闭。

- [x] （八）目前还不具有一个美观简洁、易懂易用的界面。

- [x] （九）目前还没有一个特有的软件图标以及AppeaRemind字样。

- [x] （十）目前还不能够自动在桌面建立一个快捷方式。

- [x] ###  （十一）目前无法实现开机自启。

  （这个我试着解决？）

- [x] 解决了在离开悬浮窗后，设置窗口还在的bug。并且，解决了设置窗口不随着悬浮窗移动的问题。



今天帮舒畅的appremind实现了鼠标拖动，点击边框蓝线（我加粗了一点，要不然点不到）不放，拖动就能实现移动，单击close按钮关闭



# 功能实现

- [x] 往主界面添加了最小最大化的按键，并自带有对应功能
- [x] x的对话框
  - [x] 在点击x按钮的时候，会跳出对话框，让你选择是否进入悬浮窗状态，且该对话框有下次不再提示的按钮
- [x] 悬浮窗
  - [x] 且在悬浮窗中勾选，主界面和悬浮窗两个界面都会同步更新。
  - [x] 悬浮窗上有能够打开主界面的按钮和设置界面按钮。
  - [x] 设置界面目前只想到调整透明度，而且透明度是两个界面（设置界面和悬浮窗）一起调整
  - [x] 主界面都能打开悬浮球
  - [x] 悬浮窗也能显示第一件事，但是详细信息
- [x] 悬浮球
  - [x] 悬浮球上显示最近要做的第一件事名称和时间
  
  - [x] 悬浮球，鼠标双击，在悬浮球的位置显示出悬浮窗。从悬浮窗移开就会变成，悬浮球。且悬浮窗在悬浮球的位置展开
  
  - [x] 悬浮球可以拖动
  



- [x] 靠边缩进



一些bug：

- [x] 右边参数不对

- [ ] 设置透明度不能储存

- [x] 关闭悬浮窗后设置界面还在

- [ ] 悬浮窗界面没法显示按照时间顺序的第一条

  我的初步想法是，设置一个在dialog中的布尔变量isTimed，在点击按时间顺序调整之后，变true，写入文件，timeLog.txt，调整文本。然后是在点击下一次之后，变成false。然后把这个变量通过get函数，让ball获得
  
  



- [ ] 开机自启
