
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004340c0(long param_1,uint param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 local_438 [1024];
  uint local_38;
  
  if (0xf < param_2) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_2);
    return;
  }
  QMutex::lock();
  _memcpy((void *)(param_1 + 0x5c + (ulong)param_2 * 0x424),param_3,0x400);
  if (*(char *)(param_1 + 0x38 + (ulong)param_2 * 0x424) == '\0') {
    bVar2 = true;
    FUN_1008e3970("","IODesktopServer",0,"Error: Palette of disabled display \'%d\' was updated!",
                  param_2);
  }
  else {
    bVar2 = false;
    QMutex::unlock();
    if (DAT_1011bbed0 == '\0') {
      iVar1 = ___cxa_guard_acquire(&DAT_1011bbed0);
      if (iVar1 != 0) {
        _DAT_1011bbec8 = PTR_shared_null_100ba20d0;
        ___cxa_atexit(FUN_10002f530,&DAT_1011bbec8,0x100000000);
        ___cxa_guard_release(&DAT_1011bbed0);
      }
    }
    local_38 = param_2;
    _memcpy(local_438,param_3,0x400);
    FUN_100434990(param_1,&DAT_1011bbec8,200000,local_438,0x404,&DAT_1011ccb98,0);
    FUN_100439760(param_1,param_2,param_3);
  }
  if (bVar2) {
    QMutex::unlock();
  }
  return;
}

