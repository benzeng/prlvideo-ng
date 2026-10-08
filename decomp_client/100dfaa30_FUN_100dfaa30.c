
int FUN_100dfaa30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long local_38;
  long local_30;
  
  local_30 = 0;
  local_38 = 0;
  iVar1 = _SecCodeCopySelf(0,&local_30);
  if (iVar1 == 0) {
    iVar1 = _SecCodeCopyStaticCode(local_30,0,&local_38);
    if (iVar1 == 0) {
      iVar1 = FUN_100dfaae0(local_38,param_1,param_2,param_3);
    }
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (local_30 != 0) {
    _CFRelease();
  }
  return iVar1;
}

