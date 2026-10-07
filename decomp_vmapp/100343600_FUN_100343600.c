
undefined8 FUN_100343600(long param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 1;
  if ((*param_2 != 0) && (uVar2 = 2, *param_3 - 1 < 4)) {
    uVar2 = 4;
    if (param_2[1] + 1U < 5) {
      *(int *)(param_1 + 0x30) = param_2[1];
      uVar2 = FUN_10034f8c0(param_1);
      if (((int)uVar2 == 0) && (uVar2 = 0, *param_3 != 0)) {
        uVar2 = 0;
        lVar3 = 0;
        do {
          uVar1 = param_3[lVar3 + 1];
          *(uint *)(param_1 + 0x20 + lVar3 * 4) = uVar1 - *(int *)(param_1 + 0x10 + lVar3 * 4);
          *(uint *)(param_1 + 0x10 + lVar3 * 4) = uVar1;
          lVar3 = lVar3 + 1;
        } while ((uint)lVar3 < *param_3);
      }
    }
  }
  return uVar2;
}

