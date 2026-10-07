
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100434270(undefined8 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  if (0xf < param_2) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_2);
    return;
  }
  if (DAT_1011bbee0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbee0);
    if (iVar1 != 0) {
      _DAT_1011bbed8 = PTR_shared_null_100ba20d0;
      ___cxa_atexit(FUN_10002f530,&DAT_1011bbed8,0x100000000);
      ___cxa_guard_release(&DAT_1011bbee0);
    }
  }
  FUN_100434340(param_1,&DAT_1011bbed8,param_2,param_3,param_4,param_5);
  return;
}

