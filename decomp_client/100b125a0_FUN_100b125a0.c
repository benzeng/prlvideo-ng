
undefined8 * FUN_100b125a0(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 local_38;
  undefined1 local_29;
  
  bVar8 = 0;
  puVar3 = (undefined8 *)FUN_100b12660(param_1,param_2,&local_38,param_3);
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = operator_new(0x80);
    uVar2 = *param_3;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    puVar6 = param_3 + 2;
    puVar7 = puVar4 + 5;
    for (lVar5 = 0x13; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined4 *)puVar7 = *puVar6;
      puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)bVar8 * -8 + 4);
    }
    piVar1 = *(int **)(param_3 + 0x16);
    puVar4[0xf] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      uVar2 = *param_3;
    }
    *(undefined4 *)(puVar4 + 4) = uVar2;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[2] = local_38;
    *puVar3 = puVar4;
    puVar7 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar7 = (undefined8 *)*puVar3;
    }
    FUN_1001879a0(param_1[1],puVar7);
    param_1[2] = param_1[2] + 1;
  }
  return puVar4;
}

