
void FUN_10078f570(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long local_20;
  
  plVar1 = *(long **)(param_1 + 0x10);
  pcVar2 = *(code **)(*plVar1 + 0x10);
  local_20 = *param_2;
  if (local_20 != 0) {
    _PrlHandle_AddRef();
  }
  (*pcVar2)(plVar1,&local_20);
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  return;
}

