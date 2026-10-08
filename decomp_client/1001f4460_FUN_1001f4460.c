
undefined4 FUN_1001f4460(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long local_20;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x30) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
  }
  local_20 = *(long *)(param_1 + 0x18);
  if (local_20 != 0) {
    _PrlHandle_AddRef();
  }
  uVar2 = FUN_100160750(uVar2,&local_20);
  uVar1 = FUN_1001f4300(param_1,uVar2,"1onCommitUserPrefsFinished(PRL_RESULT)");
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return uVar1;
}

