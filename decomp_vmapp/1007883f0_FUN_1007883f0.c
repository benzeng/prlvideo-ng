
void FUN_1007883f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100bcf0e0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar2 = _IOServiceMatching(param_2);
  if (lVar2 == 0) {
    if (1 < DAT_1011b55f8) {
      FUN_1008e3970("","HostUtils",2,"Can\'t create matching dictionary for [%s] class",param_2);
      return;
    }
  }
  else {
    iVar1 = _IOServiceGetMatchingServices
                      (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar2,param_1 + 1);
    if (iVar1 != 0) {
      if (1 < DAT_1011b55f8) {
        FUN_1008e3970("","HostUtils",2,"Can\'t create iterator for [%s]",param_2);
      }
      _CFRelease(lVar2);
      return;
    }
  }
  return;
}

