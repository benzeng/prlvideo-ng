
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100430130(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28 [2];
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x42dc) = param_2;
  QMutex::unlock();
  if (DAT_1011bbe80 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbe80);
    if (iVar1 != 0) {
      _DAT_1011bbe78 = PTR_shared_null_100ba20d0;
      ___cxa_atexit(FUN_10002f530,&DAT_1011bbe78,0x100000000);
      ___cxa_guard_release(&DAT_1011bbe80);
    }
  }
  local_28[0] = param_2;
  FUN_100434990(param_1,&DAT_1011bbe78,0x18968,local_28,4,&DAT_1011ccb98,0);
  return;
}

