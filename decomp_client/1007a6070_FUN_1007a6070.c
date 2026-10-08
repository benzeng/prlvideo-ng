
QPixmap * FUN_1007a6070(QPixmap *param_1,int param_2,int *param_3)

{
  QPixmap local_80 [32];
  QPixmap local_60 [32];
  QPixmap local_40 [32];
  
  QPixmap::QPixmap(param_1);
  DrawUtils::scaleBorderPixmap(local_40,param_2,8,8,8,8,*param_3);
  QPixmap::operator=(param_1,local_40);
  QPixmap::~QPixmap(local_40);
  QPixmap::hiDpiPixmap();
  QPixmap::setDevicePixelRatio(DAT_100e11050);
  DrawUtils::scaleBorderPixmap
            (local_80,(int)local_60,0x10,0x10,0x10,0x10,(int)((double)*param_3 + (double)*param_3));
  QPixmap::setDevicePixelRatio(DAT_100e12b90);
  QPixmap::setHiDpiPixmap(param_1);
  QPixmap::~QPixmap(local_80);
  QPixmap::~QPixmap(local_60);
  return param_1;
}

