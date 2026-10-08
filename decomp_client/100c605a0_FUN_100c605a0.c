
int FUN_100c605a0(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (param_1[5] <= iVar1 + 1) {
      lVar2 = FUN_100bf36a0(*(undefined8 *)(param_1 + 2),param_1[5] << 4,"stack.c",0x99);
      if (lVar2 == 0) {
        return 0;
      }
      *(long *)(param_1 + 2) = lVar2;
      param_1[5] = param_1[5] << 1;
      iVar1 = *param_1;
    }
    if (iVar1 < 1) {
      *(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8) = param_2;
    }
    else {
      lVar2 = *(long *)(param_1 + 2);
      lVar3 = (long)iVar1 + 1;
      do {
        *(undefined8 *)(lVar2 + lVar3 * 8) = *(undefined8 *)(lVar2 + -8 + lVar3 * 8);
        lVar3 = lVar3 + -1;
      } while (0 < lVar3);
      **(undefined8 **)(param_1 + 2) = param_2;
    }
    iVar1 = iVar1 + 1;
    *param_1 = iVar1;
    param_1[4] = 0;
  }
  return iVar1;
}

