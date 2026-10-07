
int FUN_1008852e0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 + 1 < param_1[5]) {
    lVar2 = *(long *)(param_1 + 2);
    iVar4 = iVar1;
  }
  else {
    lVar2 = FUN_10081df30(*(undefined8 *)(param_1 + 2),param_1[5] << 4,"stack.c",0x99);
    if (lVar2 == 0) {
      return 0;
    }
    *(long *)(param_1 + 2) = lVar2;
    param_1[5] = param_1[5] << 1;
    iVar4 = *param_1;
    if ((-1 < iVar1) && (iVar1 < iVar4)) {
      if (iVar1 <= iVar4) {
        lVar3 = (long)iVar4 + 1;
        do {
          *(undefined8 *)(lVar2 + lVar3 * 8) = *(undefined8 *)(lVar2 + -8 + lVar3 * 8);
          lVar3 = lVar3 + -1;
        } while (iVar1 < lVar3);
        lVar2 = *(long *)(param_1 + 2);
      }
      *(undefined8 *)(lVar2 + (long)iVar1 * 8) = param_2;
      goto LAB_100885378;
    }
  }
  *(undefined8 *)(lVar2 + (long)iVar4 * 8) = param_2;
LAB_100885378:
  *param_1 = iVar4 + 1;
  param_1[4] = 0;
  return iVar4 + 1;
}

