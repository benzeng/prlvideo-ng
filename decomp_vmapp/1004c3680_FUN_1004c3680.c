
void FUN_1004c3680(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 - param_3 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x18);
      puVar1 = *(undefined8 **)(param_4 + lVar4);
      puVar3[2] = puVar1[2];
      uVar2 = *puVar1;
      puVar3[1] = puVar1[1];
      *puVar3 = uVar2;
      *(undefined8 **)(param_2 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_2 - param_3) + lVar4 != 0);
  }
  return;
}

