
undefined1 FUN_10026e170(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long local_30;
  int local_24;
  
  iVar1 = _PrlEvent_GetErrCode(*param_2,&local_24);
  uVar3 = 0;
  if ((-1 < iVar1) && (local_24 == 0x32e0)) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar2 = FUN_10018d490(uVar2);
    local_30 = *param_2;
    if (local_30 != 0) {
      _PrlHandle_AddRef();
    }
    FUN_100161e00(uVar2,&local_30,0x3e82);
    uVar3 = 1;
    if (local_30 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar3;
}

