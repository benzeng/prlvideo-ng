
long FUN_100884f70(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = *param_1;
  if (0 < (long)iVar1) {
    lVar4 = 0;
    plVar5 = *(long **)(param_1 + 2);
    do {
      if (*plVar5 == param_2) {
        iVar2 = (int)lVar4;
        if (iVar2 < 0) {
          return 0;
        }
        if ((iVar2 < iVar1 + -1) &&
           (*plVar5 = (*(long **)(param_1 + 2))[lVar4 + 1], iVar2 != iVar1 + -2)) {
          lVar4 = lVar4 + 1;
          if (((iVar1 + -1) - (iVar2 + 1) & 3U) != 0) {
            iVar3 = -((iVar1 + -1) - (iVar2 + 1) & 3U);
            do {
              *(undefined8 *)(*(long *)(param_1 + 2) + lVar4 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 2) + 8 + lVar4 * 8);
              lVar4 = lVar4 + 1;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0);
          }
          if (2 < (uint)((iVar1 + -2) - (iVar2 + 1))) {
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
        *param_1 = iVar1 + -1;
        return param_2;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (lVar4 < iVar1);
  }
  return 0;
}

