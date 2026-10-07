
void FUN_1006fca20(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    piVar1 = (int *)*param_2;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)QListData::prepend();
    *puVar2 = piVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_10000c800(param_1,0,1);
    piVar1 = (int *)*param_2;
    *puVar2 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return;
}

