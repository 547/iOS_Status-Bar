# iOS_Status-Bar

 根据状态栏获取网络状态，可以区分2G、3G、4G、WIFI，系统的方法，比较快捷。稍微不爽的就是万一连接的WIFI没有联网的话。
 手机状态栏：
 
   -(void)getNetworkStatuFromStatusBar<br>
   {<br>
   UIApplication *app = [UIApplication sharedApplication] ;<br>
   //获取状态栏statusBar的前景视图foregroundView的所有子视图<br>
   NSArray *childrenViews = [[[app valueForKeyPath:@"statusBar"]valueForKeyPath:@"foregroundView"]subviews];<br>
   <br>
   for (id childrenView in childrenViews) {<br>
   //获取状态栏中的显示网络状态的VIew<br>
   if ([childrenView isKindOfClass:NSClassFromString(@"UIStatusBarDataNetworkItemView")]) {<br>
   //获取网络状态值<br>
   int networkType = [[childrenView valueForKeyPath:@"dataNetworkType"]intValue];<br>
   switch (networkType) {<br>
   case 0:<br>
   NSLog(@"无网络");<br>
   break;<br>
   case 1:<br>
   NSLog(@"2G");<br>
   break;<br>
   case 2:<br>
   NSLog(@"3G");<br>
   break;<br>
   case 3:<br>
   NSLog(@"4G");<br>
   break;<br>
   case 5:<br>
   NSLog(@"wifi");<br>
   break;<br>
   default:<br>
   break;<br>
   }<br>
   }<br>
   }<br>
   }<br>

