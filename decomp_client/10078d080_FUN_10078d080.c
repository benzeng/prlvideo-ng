
void FUN_10078d080(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *param_2;
  if (local_28 != 0) {
    _PrlHandle_AddRef();
  }
  cVar1 = SdkUtils::checkHandleType(&local_28,0x10000020);
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  if (cVar1 != '\0') {
    FUN_100060bb0();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar3 = FUN_100786480(uVar3);
    iVar2 = FUN_100060e10(uVar3);
    if (iVar2 == 3) {
      lVar4 = *param_2;
      local_38 = lVar4;
      if (lVar4 != 0) {
        _PrlHandle_AddRef(lVar4);
      }
      FUN_10078d330(param_1,&local_38);
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      lVar4 = *param_2;
      local_30 = lVar4;
      if (lVar4 != 0) {
        _PrlHandle_AddRef(lVar4);
      }
      FUN_10078d1a0(param_1,&local_30);
    }
    if (lVar4 != 0) {
      _PrlHandle_Free(lVar4);
    }
  }
  return;
}

