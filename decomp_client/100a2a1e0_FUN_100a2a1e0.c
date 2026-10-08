
void FUN_100a2a1e0(undefined1 *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  int *piVar2;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  lVar1 = *param_3;
  *(long *)(param_1 + 8) = lVar1;
  if (lVar1 != 0) {
    _PrlHandle_AddRef();
  }
  FUN_100a332c0(param_1 + 0x10,0,0,0,0,0);
  piVar2 = (int *)*param_2;
  *(int **)(param_1 + 0x60) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined1 **)(param_1 + 0x70) = param_1 + 0x70;
  *(undefined1 **)(param_1 + 0x78) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

