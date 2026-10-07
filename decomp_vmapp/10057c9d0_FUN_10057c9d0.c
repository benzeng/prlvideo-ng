
int FUN_10057c9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 local_e0 [32];
  undefined4 local_c0;
  QSemaphore local_b8 [8];
  int local_b0;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined4 local_58;
  code *local_50;
  long *local_48;
  long local_40;
  int local_38;
  undefined1 *local_30;
  code *local_28;
  
  FUN_1005f5ba0(local_e0,param_1,param_2,param_3,param_4,0);
  FUN_1005f5e70(local_e0);
  if ((*(long **)(param_1 + 0x1210) == (long *)0x0) ||
     (cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))(), cVar1 != '\0')) {
    iVar2 = FUN_10057cbb0(param_1,local_e0);
  }
  else {
    local_38 = 0;
    local_28 = FUN_10057cbb0;
    local_50 = FUN_1005751e0;
    local_58 = 0;
    local_48 = &local_40;
    local_40 = param_1;
    local_30 = local_e0;
    cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                      (*(long **)(param_1 + 0x1210),local_70);
    iVar2 = local_38;
    if (cVar1 == '\0') {
      FUN_1008e3970("","vdisk",0,"Error: Callback not added");
      iVar2 = -0x7ffdefdb;
    }
  }
  if (iVar2 < 0) {
    FUN_1008e3970("CountReclaimed","vdisk",0,"DelegateSyncCall() failed with error 0x%X",iVar2);
  }
  else {
    FUN_1005f5f70(local_e0);
    if (local_b0 < 0) {
      FUN_1008e3970("CountReclaimed","vdisk",0,"BAT scanning failed with error 0x%X");
      iVar2 = local_b0;
    }
    else {
      *param_5 = local_c0;
      iVar2 = 0;
    }
  }
  FUN_1006a8f00(local_88);
  QSemaphore::~QSemaphore(local_b8);
  return iVar2;
}

