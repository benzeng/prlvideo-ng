
long FUN_1004be6d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
                  int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_5 == 0x20) {
    lVar1 = _CGColorSpaceCreateDeviceRGB();
    if (lVar1 == 0) {
      lVar3 = 0;
      if (0 < DAT_1011b55f8) {
        lVar3 = 0;
        FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create CGColorSpaceRef");
      }
    }
    else {
      lVar2 = _CGDataProviderCreateWithData(0,param_2,param_6 * param_4,0);
      if (lVar2 == 0) {
        if (0 < DAT_1011b55f8) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create CGDataProviderRef");
        }
        _CGColorSpaceRelease(lVar1);
        lVar3 = 0;
      }
      else {
        lVar3 = _CGImageCreate(param_3,param_4,8,0x20,param_6,lVar1,0x2006,lVar2,0,0,0);
        if ((lVar3 == 0) && (0 < DAT_1011b55f8)) {
          FUN_1008e3970("CHRSERVER","ChrToolSrv",1,"Failed to create new CGImageRef");
        }
        _CGDataProviderRelease(lVar2);
        _CGColorSpaceRelease(lVar1);
      }
    }
  }
  else {
    lVar3 = 0;
    if (1 < DAT_1011b55f8) {
      lVar3 = 0;
      FUN_1008e3970("CHRSERVER","ChrToolSrv",2,"bpp = %d is not supported in Coherence yet");
    }
  }
  return lVar3;
}

