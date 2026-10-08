
QImage * FUN_1000ee120(QImage *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((param_3 & 0x400) == 0) {
    uVar2 = param_2[1];
    if ((0 < (int)uVar1) && (0 < (int)uVar2)) {
      QImage::QImage(param_1,param_2 + 2,uVar1,uVar2,(param_3 >> 0xe & 1) + 5,0,0);
      return param_1;
    }
    FUN_100df99c0("SGACMD","prl_client_app",0,"Error: %ix%i is invalid size for image",uVar1,uVar2);
  }
  else {
    if (uVar1 != 0) {
      QImage::fromData((uchar *)param_1,(int)param_2 + 8,(char *)(ulong)uVar1);
      return param_1;
    }
    FUN_100df99c0("SGACMD","prl_client_app",0,"Error: zero size for image data");
  }
  QImage::QImage(param_1);
  return param_1;
}

