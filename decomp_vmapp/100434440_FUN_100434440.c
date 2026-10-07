
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100434440(long param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  long lVar2;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (0xf < param_2) {
    FUN_1008e3970("","IODesktopServer",0,
                  " Error: display \'%d\' is greater than PRL_IO_MAX_DISPLAYS",param_2);
    return;
  }
  QMutex::lock();
  lVar2 = (ulong)param_2 * 0x424;
  *(uint *)(param_1 + 0x50 + lVar2) = param_2;
  *(undefined4 *)(param_1 + 0x54 + lVar2) = param_3;
  *(undefined4 *)(param_1 + 0x58 + lVar2) = param_4;
  *(int *)(param_1 + 0x40 + lVar2) = param_5;
  *(int *)(param_1 + 0x44 + lVar2) = param_6;
  *(undefined4 *)(param_1 + 0x48 + lVar2) = param_7;
  *(undefined4 *)(param_1 + 0x4c + lVar2) = param_8;
  *(bool *)(param_1 + 0x38 + lVar2) = param_6 != 0 && param_5 != 0;
  QMutex::unlock();
  if (DAT_1011bbef0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1011bbef0);
    if (iVar1 != 0) {
      _DAT_1011bbee8 = PTR_shared_null_100ba20d0;
      ___cxa_atexit(FUN_10002f530,&DAT_1011bbee8,0x100000000);
      ___cxa_guard_release(&DAT_1011bbef0);
    }
  }
  local_48 = param_7;
  local_44 = param_8;
  local_50 = param_5;
  local_4c = param_6;
  local_40 = param_2;
  local_3c = param_3;
  local_38 = param_4;
  FUN_100434990(param_1,&DAT_1011bbee8,0x18972,&local_50,0x1c,&DAT_1011ccb98,0);
  FUN_1004397c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

