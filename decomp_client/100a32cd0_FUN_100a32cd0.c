
void FUN_100a32cd0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != param_2) {
    lVar3 = 0;
    puVar5 = param_1;
    do {
      puVar2 = operator_new(0x18);
      lVar1 = *(long *)(lVar4 + 0x10);
      puVar2[2] = lVar1;
      if (lVar1 != 0) {
        _CFRetain();
        puVar5 = (undefined8 *)*param_1;
        lVar3 = param_1[2];
      }
      puVar2[1] = param_1;
      *puVar2 = puVar5;
      puVar5[1] = puVar2;
      *param_1 = puVar2;
      lVar3 = lVar3 + 1;
      param_1[2] = lVar3;
      lVar4 = *(long *)(lVar4 + 8);
      puVar5 = puVar2;
    } while (lVar4 != param_2);
  }
  return;
}

