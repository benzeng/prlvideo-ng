
undefined8 *
FUN_100614d50(long *param_1,undefined4 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)QHashData::allocateNode((int)*param_1);
  *puVar3 = *param_5;
  *(undefined4 *)(puVar3 + 1) = param_2;
  *(undefined4 *)((long)puVar3 + 0xc) = *param_3;
  piVar2 = (int *)*param_4;
  uVar1 = param_4[1];
  puVar3[2] = piVar2;
  puVar3[3] = uVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  uVar1 = param_4[2];
  puVar3[5] = param_4[3];
  puVar3[4] = uVar1;
  QVariant::QVariant((QVariant *)(puVar3 + 6),(QVariant *)(param_4 + 4));
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(param_4 + 6);
  *param_5 = puVar3;
  *(int *)(*param_1 + 0x14) = *(int *)(*param_1 + 0x14) + 1;
  return puVar3;
}

