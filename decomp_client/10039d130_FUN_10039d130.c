
void FUN_10039d130(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 - param_2 != 0) {
    lVar4 = 0;
    do {
      puVar3 = operator_new(0x40);
      puVar1 = *(undefined8 **)(param_3 + lVar4);
      puVar3[7] = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[5] = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[3] = puVar1[3];
      puVar3[2] = puVar1[2];
      uVar2 = *puVar1;
      puVar3[1] = puVar1[1];
      *puVar3 = uVar2;
      *(undefined8 **)(param_1 + lVar4) = puVar3;
      lVar4 = lVar4 + 8;
    } while ((param_1 - param_2) + lVar4 != 0);
  }
  return;
}

