
void FUN_10085f2d0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined1 uVar1;
  long lVar2;
  long local_28;
  long local_20;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      local_28 = *(long *)param_4[1];
      if (local_28 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_100788a10(param_1,&local_28);
      lVar2 = local_28;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      local_20 = *(long *)param_4[1];
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_1007885c0(param_1,&local_20);
      lVar2 = local_20;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar1;
    }
  }
  return;
}

