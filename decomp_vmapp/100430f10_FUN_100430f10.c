
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430f10(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_30;
  undefined4 local_2c;
  
  if (DAT_1011bbec0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbec0);
    if (iVar1 != 0) {
      _DAT_1011bbeb8 = PTR_shared_null_100ba20d0;
      ___cxa_atexit(FUN_10002f530,&DAT_1011bbeb8,0x100000000);
      ___cxa_guard_release(&DAT_1011bbec0);
    }
  }
  local_30 = param_4 & 0xff;
  local_2c = param_3;
  FUN_100434990(param_1,&DAT_1011bbeb8,0x1896a,&local_30,8,param_2,0);
  return;
}

