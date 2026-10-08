
void FUN_100786620(long param_1,long *param_2)

{
  undefined8 uVar1;
  long local_18;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x40);
  local_18 = *param_2;
  if (local_18 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_10078f570(uVar1,&local_18);
  if (local_18 != 0) {
    _PrlHandle_Free();
  }
  return;
}

