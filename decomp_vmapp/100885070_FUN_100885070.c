
undefined8 FUN_100885070(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = 0;
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    iVar1 = *param_1;
    uVar3 = 0;
    if (param_2 < iVar1) {
      lVar4 = (long)param_2;
      lVar2 = *(long *)(param_1 + 2);
      uVar3 = *(undefined8 *)(lVar2 + lVar4 * 8);
      if (param_2 < iVar1 + -1) {
        *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar2 + 8 + lVar4 * 8);
        uVar5 = (iVar1 + -2) - param_2;
        if (uVar5 != 0) {
          lVar4 = lVar4 + 1;
          if ((uVar5 & 3) != 0) {
            iVar6 = -(uVar5 & 3);
            do {
              *(undefined8 *)(*(long *)(param_1 + 2) + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar4 * 8);
              lVar4 = lVar4 + 1;
              iVar6 = iVar6 + 1;
            } while (iVar6 != 0);
          }
          if (2 < (uint)((iVar1 + -3) - param_2)) {
            do {
              *(undefined8 *)(*(long *)(param_1 + 2) + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar4 * 8);
              *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 0x10 + lVar4 * 8);
              *(undefined8 *)(*(long *)(param_1 + 2) + 0x10 + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 0x18 + lVar4 * 8);
              *(undefined8 *)(*(long *)(param_1 + 2) + 0x18 + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 0x20 + lVar4 * 8);
              lVar4 = lVar4 + 4;
            } while ((int)lVar4 - iVar1 != -1);
          }
        }
      }
      *param_1 = iVar1 + -1;
    }
  }
  return uVar3;
}

