
void FUN_10000c490(undefined8 *param_1,undefined8 *param_2)

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
    puVar2 = (undefined8 *)QListData::append();
    *puVar2 = piVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_10000c800(param_1,0x7fffffff,1);
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

