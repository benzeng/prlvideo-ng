
undefined8 *
FUN_10071b510(long *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)QHashData::allocateNode((int)*param_1);
  *puVar2 = *param_5;
  *(undefined4 *)(puVar2 + 1) = param_2;
  piVar1 = (int *)*param_3;
  puVar2[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_10027d640(puVar2 + 3,param_4);
  *param_5 = puVar2;
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  return puVar2;
}

