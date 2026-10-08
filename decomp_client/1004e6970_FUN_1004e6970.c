
undefined8 * FUN_1004e6970(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_100524a60(param_2 + 0x40,param_3);
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

