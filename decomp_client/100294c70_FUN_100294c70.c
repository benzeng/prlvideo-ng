
void FUN_100294c70(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long local_20;
  
  pcVar1 = *(code **)(param_1 + 0x28);
  local_20 = *(long *)(param_1 + 0x30);
  if (local_20 != 0) {
    _PrlHandle_AddRef();
  }
  uVar2 = (*pcVar1)(&local_20,*(undefined4 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return;
}

