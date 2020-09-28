# ChocoboDecorator

**Use at your own risk.**

**有封号风险，使用后果自负**

V0.9.8 适配FFXIV国服5.25 

缺失vcruntime140_1.dll请下载VC运行时库(Microsoft Visual C++ Redistributable)
百度云 ：1RRs96WoYYCAZf7ZKKtfFpA -- 0mg7

陆行鸟装修工是用于最终幻想XIV的辅助装修软件，**请遵守用户协议和相关规定，使用造成的风险由使用者自行承担**。本工具禁止在**庭院**使用。陆行鸟装修工可以使你自由放置家具，并且保存家具位置信息，并允许你以家具位置信息还原家具的位置。

 **特别提醒：**
**(1)本工具仅用来替代无意义的重复性劳动，滥用工具有封号风险**
**(2)无法在庭院使用**
**(3)只有能打开“布置家具”才能导出家具的位置信息** 

NGA: https://bbs.nga.cn/read.php?tid=22777919

## V0.9.7
增加了不用旋转的摆放和导出导入。



## V0.9.6

现在可以编辑导出的家具信息。



## V0.9.5

现在可以导入导出家具的旋转信息。注意，自动摆放家具后仍然需要旋转一下家具。



## V0.9.4

1. 修复了ML房获取当前页面家具个数的bug
2. 修改了在庭院开启的警告提示
3. 增加了一种新的注入方式，旧的方式标签名为int3，新的方式标签名为cje。默认使用int3方式，如果你在int3下经常报错，可以试试使用cje方式（如果有人了解关于虚存注入的方法，请联系我，我跳转不到虚存）
4. 增加了家具位置的备选偏移。一般情况下使用默认的p0就可以，遇到能读取不能修改请x360

所见即所得修改的使用：移动模式选中家具----->点“获取坐标”----->修改坐标----->点“锁定坐标”----->回到游戏按下ESC或鼠标右键

## V0.9.2

v092新功能演示 /s/1evLk8dX2MlYmDJANqXNEew  ----  zn2t

新的功能允许你随时看到调整后的位置，你可以对家具位置做更直观的微调。

**注意：请按照顺序操作，如果你遇到了任何意料之外的情况，直接<u>重启</u>游戏和软件总是能解决大多数问题。**~~（如果你实在不明白怎么操作，请去群里问问熟练工）~~

![v092sj](https://github.com/holalula/ChocoboDecorator/blob/master/img/v092sj.png)

## 注意事项

请确保以**管理员身份**运行本软件并以**DX11**启动FFXIV

![1](https://github.com/holalula/ChocoboDecorator/blob/master/img/1.png)

请注意，有时即使勾选了“DirectX 11切换”但是程序仍然会以DX9运行，你可以通过任务管理器中的详细信息来查看FFXIV是否以DX11启动

![2](https://github.com/holalula/ChocoboDecorator/blob/master/img/2.png)

“ffxiv_dx11.exe”是DX11的进程，而“ffxiv.exe”是DX9的进程。

如果你在启动器点击DX11开启后，重新启动发现DX11选项被取消，请删除游戏目录下sdo文件夹里的所有文件，然后运行目录下的FFXIVRepair.exe。

## 功能与使用方法

1. 解除家具放置限制

   可以解除家具在大部分情况下的放置限制

   ![3](https://github.com/holalula/ChocoboDecorator/blob/master/img/3.png)

2. 修改家具坐标

   点选物体获取其坐标，COPY按钮可以将上方的坐标复制到输入栏内，在对应坐标的输入栏中输入新的坐标值并按下回车，再按ESC取消点选状态，物体会放置在新设置的坐标处

   ![41](https://github.com/holalula/ChocoboDecorator/blob/master/img/41.png)
   ![42](https://github.com/holalula/ChocoboDecorator/blob/master/img/42.png)

3. 导出当前家具信息

   点击“记录当前家具信息”后开始5s倒计时，该窗口标题会显示倒计时时间。在倒计时到0s之前，打开布置家具，通过小键盘NUM 1使光标停留在家具列表的第一个家具上。在倒计时结束后，程序会模拟键盘操作，记录下每个家具的位置信息，在此期间请不要触碰鼠标键盘。全部家具读取完毕后，会在该窗口中显示已读取到的家具信息。（模拟键盘的延时保存在“delaytime.json”文件中，e_t2、e_t0、e_tn分别是按下小键盘2、小键盘0和空转的时间，你可以修改这些值来改变按键的延时，单位为ms）

   ![5](https://github.com/holalula/ChocoboDecorator/blob/master/img/5.png)

   修改按钮“导出家具列表”前输入框的内容，这是保存你家具信息的文件的名字。然后点击“导出家具列表”，你会在“list”文件夹中得到保存你家具信息的文件。

   修改按钮“导入家具列表”前输入框的内容，这是要读取的家具列表的名字，这个文件应该在"list"文件夹中，找不到文件程序会直接退出。你可以导入一个家具列表并修改其中家具的坐标信息，注意不要修改除了XYZ的其他信息。给新的列表起个名字，然后点击“导出家具列表”就可以生成修改后的家具列表文件。

   

4. 导入信息放置家具

   导入信息放置家具的条件是：你拥有的**家具种类**和**每类数目**必须和家具列表文件中包含的**家具类型**和**每类数目**完全一样，请务必检查好这一点。

   打开布置家具，把需要摆放的家具放到任意位置。点击“读取当前家具信息”，你会在下面的表格里看到当前摆放出来的家具信息。

   输入你要使用的家具列表的名字，点击“验证是否匹配”可以验证放置家具的条件是否符合。这一步的结果会在窗口标题显示出来，0表示不符合，你需要重新检查家具列表和当前摆放出来的家具，如果为1，则检查通过。通过后点击获取坐标，可以得到每一个家具应该摆放的位置坐标。
![6](https://github.com/holalula/ChocoboDecorator/blob/master/img/6.png)
   最后和导出时一样，点击“摆放”，在5s内使用小键盘NUM 1使光标停留在家具列表的第一项。倒计时结束后，会逐个家具进行放置（延时数据在和上面相同的文件里）。

   任何操作完成后，一定记得要旋转一下各个家具，哪怕退出布置家具后所有家具都在正确的位置。家具自动放置后不旋转可能会使下次进入房间的时候所有家具又恢复之前的位置。



## 其他

1. 导出导入的上限为200个，我的M/L房怎么办？分两次用。FF的家具列表每一页最多显示200个，你可以准备两个家具列表文件，要注意的是每次操作的家具必须和家具列表文件相匹配（~~我没有ML房，我也没试过，理论上这样是可以的。有问题再改~~）。

2. 请遵守操作说明，不按顺序地点击各个功能可能会使软件崩溃，尤其是打开不存在的文件等（~~也只是程序会崩溃而已，并不是什么大问题，以后有机会再改~~）。

3. 读取家具列表后，为什么有这么多“未知家具”？（~~懒得给这些家具写名字了~~）家具名字对功能没有任何影响，保存的文件中也没有家具的名字。家具的名字只是为了让人看得更方便一点，家具名字存储在”ItemInfo.json“中，请使用GBK编码打开（似乎WIN10的记事本默认就是GBK）。打开后，你可以按照JSON格式添加其他家具的名字信息。当然，除了从自己的家具列表补充名字信息外，你也可以和亲友交换这些名字信息（在写入的时候注意不要重复），你也可以等等，说不定哪天会有一个完整的家具名字文件。

4. 为什么不能在庭院使用？放过邻居（~~你可以试试在庭院使用会发生什么~~）。

5. 游戏出新版本了会不会继续更新？随缘。

6. 以后会收费吗？会下载不到吗？不会，去Github下载。

7. 会不会封号？使用此工具进行的任何操作皆需遵守相关规定，使用造成的风险由使用者自行承担（~~只要你玩的够大，随时可以被封号~~）。

8. 工具我有了，但是我还是不知道该怎么装修怎么办？我强烈向你推荐housingsnap.com这个网站，你可以在这里看到各种风格的装修（~~加点魔法可以使这个网站加载更快~~）。

9. 你这个网站怎么全是日文，我看不懂怎么办啊？你可以翻译整个网页，当你想查找某一个关键词的时候，可以尝试下使用汉字，例如”魔女“这样的汉字依然会得到很多相关的检索结果，或者你可以把关键词翻译成日文或英文。另外，你也可以在微博搜索”光之装修“、”光之装潢“、”ff14装修“等关键词来欣赏别人的装修（~~说不定还能看到和housingsnap中某个装修一样的~~）。

10. 有些家具我在家具预览里怎么找不到？这可能是多个家具拼接起来的，你可以着重关注下这个拼接出来家具的某些细节，然后在家具预览中找找这些细节。你也可以向亲友或其他装修工询问，很多拼接的家具都有套路。

11. 当你并不熟悉如何使用该工具的时候，建议先在公寓练手。

    







