
void FUN_100dd89f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10225c3f8;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = _IOServiceMatching(param_2);
  if (lVar2 == 0) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","HostUtils",2,"Can\'t create matching dictionary for [%s] class",param_2);
      return;
    }
  }
  else {
    iVar1 = _IOServiceGetMatchingServices
                      (*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar2,param_1 + 1);
    if (iVar1 != 0) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","HostUtils",2,"Can\'t create iterator for [%s]",param_2);
      }
      _CFRelease(lVar2);
      return;
    }
  }
  return;
}

