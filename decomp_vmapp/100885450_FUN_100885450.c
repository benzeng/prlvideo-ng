
undefined8 FUN_100885450(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar4 = 0;
    if (0 < iVar1) {
      puVar2 = *(undefined8 **)(param_1 + 2);
      uVar4 = *puVar2;
      if ((1 < iVar1) && (*puVar2 = puVar2[1], iVar1 != 2)) {
        lVar5 = 1;
        if ((iVar1 - 2U & 3) != 0) {
          lVar3 = 0;
          do {
            lVar5 = lVar3;
            *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar5 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 2) + 0x10 + lVar5 * 8);
            lVar3 = lVar5 + 1;
          } while ((iVar1 - 2U & 3) != (uint)(lVar5 + 1));
          lVar5 = lVar5 + 2;
        }
        if (2 < iVar1 - 3U) {
          do {
            *(undefined8 *)(*(long *)(param_1 + 2) + lVar5 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar5 * 8);
            *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar5 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 2) + 0x10 + lVar5 * 8);
            *(undefined8 *)(*(long *)(param_1 + 2) + 0x10 + lVar5 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 2) + 0x18 + lVar5 * 8);
            *(undefined8 *)(*(long *)(param_1 + 2) + 0x18 + lVar5 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 2) + 0x20 + lVar5 * 8);
            lVar5 = lVar5 + 4;
          } while ((int)lVar5 - iVar1 != -1);
        }
      }
      *param_1 = iVar1 + -1;
    }
  }
  return uVar4;
}

