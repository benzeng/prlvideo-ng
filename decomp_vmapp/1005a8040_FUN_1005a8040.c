
undefined8 * FUN_1005a8040(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  lVar2 = *(long *)(param_2 + 0x60);
  if (lVar2 != param_2 + 0x58) {
    lVar3 = 1;
    puVar4 = param_1;
    do {
      puVar1 = operator_new(0x18);
      puVar1[2] = *(undefined8 *)(lVar2 + 0x10);
      puVar1[1] = param_1;
      *puVar1 = puVar4;
      puVar4[1] = puVar1;
      *param_1 = puVar1;
      param_1[2] = lVar3;
      lVar2 = *(long *)(lVar2 + 8);
      lVar3 = lVar3 + 1;
      puVar4 = puVar1;
    } while (lVar2 != param_2 + 0x58);
  }
  return param_1;
}

