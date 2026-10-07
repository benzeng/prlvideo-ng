
undefined4 FUN_100225510(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 local_24;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 0x1c) == 0)) || (*(long *)(param_1 + 8) == 0)
     ) {
    local_24 = 0xffffffff;
  }
  else {
    do {
      if (*(int *)(*(long *)(param_1 + 8) + 0x110) == -1) {
        return 1;
      }
      lVar2 = FUN_10022548f(*(undefined8 *)(param_1 + 0x1c));
      if (lVar2 != 0) {
        return 1;
      }
      if (*(int *)(*(long *)(param_1 + 8) + 0x58) < param_1[0x20]) {
        return 1;
      }
      if (*param_1 == 3) {
        return 1;
      }
      iVar1 = FUN_100224958(param_1);
      if (iVar1 < 0) {
        return 0xffffffff;
      }
    } while (*param_1 != 3);
    local_24 = 1;
  }
  return local_24;
}

