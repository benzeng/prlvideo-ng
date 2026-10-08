
undefined8 * FUN_10015a020(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(int *)(*(long *)(param_2 + 0x30) + 4) == 0) {
    puVar2 = (undefined8 *)(param_2 + 0x28);
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x30);
  }
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

