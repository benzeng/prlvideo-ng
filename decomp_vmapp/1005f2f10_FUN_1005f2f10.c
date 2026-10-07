
undefined8 * FUN_1005f2f10(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_30;
  
  puVar3 = (undefined8 *)FUN_1005f2fe0(param_1,param_2,&local_30,param_3);
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = operator_new(0x38);
    uVar1 = *param_3;
    puVar4[5] = param_3[1];
    puVar4[4] = uVar1;
    lVar2 = param_3[2];
    puVar4[6] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    uVar1 = *param_3;
    puVar4[5] = param_3[1];
    puVar4[4] = uVar1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[2] = local_30;
    *puVar3 = puVar4;
    puVar5 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar5 = (undefined8 *)*puVar3;
    }
    FUN_1000e8bb0(param_1[1],puVar5);
    param_1[2] = param_1[2] + 1;
  }
  return puVar4;
}

