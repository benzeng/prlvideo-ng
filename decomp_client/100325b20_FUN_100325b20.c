
void FUN_100325b20(long param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long local_20;
  
  if (((*(long *)(param_1 + 0x10) != 0) && (*(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) &&
     (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = FUN_100319be0();
    iVar1 = FUN_10032b900(uVar2);
    if (iVar1 == 1) {
      if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
         (*(long *)(param_1 + 0x18) == 0)) {
        local_20 = 0;
      }
      else {
        FUN_1003193b0(&local_20);
      }
      _PrlDevDisplay_AsyncEnableUpdates(local_20,*(undefined4 *)(param_1 + 0x30),param_2);
      if (local_20 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  return;
}

