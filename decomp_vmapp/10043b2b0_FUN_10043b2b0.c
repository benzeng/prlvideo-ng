
undefined8 FUN_10043b2b0(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 8;
  if (*(uint *)(param_1 + 0x10) < 9) {
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    piVar4 = (int *)(param_1 + 0x18);
    do {
      if (*piVar4 == param_2) {
        param_3[4] = *(undefined8 *)(piVar4 + 8);
        param_3[3] = *(undefined8 *)(piVar4 + 6);
        param_3[2] = *(undefined8 *)(piVar4 + 4);
        uVar1 = *(undefined8 *)piVar4;
        param_3[1] = *(undefined8 *)(piVar4 + 2);
        *param_3 = uVar1;
        return CONCAT71((int7)((ulong)uVar1 >> 8),1);
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 10;
    } while (uVar2 < uVar3);
  }
  return 0;
}

