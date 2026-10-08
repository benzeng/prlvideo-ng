
void FUN_100a3c8e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    QMutex::lock();
    if (*(char *)(param_1 + 0x28) == '\0') {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    local_40 = *param_2;
    piVar1 = (int *)*param_3;
    if (*piVar1 == 1) {
      if (*(int *)(*(long *)(param_1 + 0x30) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,0,1);
      }
      FUN_100a40280(param_1 + 0x30,&local_40,local_38);
      local_40 = *param_2;
      piVar1 = (int *)*param_3;
    }
    if (piVar1[1] == 1) {
      if (*(int *)(*(long *)(param_1 + 0x38) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,1,1);
      }
      FUN_100a40280(param_1 + 0x38,&local_40,local_38);
      local_40 = *param_2;
      piVar1 = (int *)*param_3;
    }
    if (piVar1[2] == 1) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,2,1);
      }
      FUN_100a40280(param_1 + 0x40,&local_40,local_38);
      local_40 = *param_2;
      piVar1 = (int *)*param_3;
    }
    if (piVar1[3] == 1) {
      if (*(int *)(*(long *)(param_1 + 0x48) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,3,1);
      }
      FUN_100a40280(param_1 + 0x48,&local_40,local_38);
      local_40 = *param_2;
      piVar1 = (int *)*param_3;
    }
    if (piVar1[4] == 1) {
      if (*(int *)(*(long *)(param_1 + 0x50) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,4,1);
      }
      FUN_100a40280(param_1 + 0x50,&local_40,local_38);
      local_40 = *param_2;
      piVar1 = (int *)*param_3;
    }
    if (piVar1[5] == 1) {
      if (*(int *)(*(long *)(param_1 + 0x58) + 0x14) == 0) {
        FUN_100a3e3e0(param_1,5,1);
      }
      FUN_100a40280(param_1 + 0x58,&local_40,local_38);
    }
    FUN_100a40280(param_1 + 0x60,param_2,local_30);
    QMutex::unlock();
    return;
  }
  return;
}

