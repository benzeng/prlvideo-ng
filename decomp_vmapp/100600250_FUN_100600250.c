
undefined8 FUN_100600250(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0x1c) != '\0') {
    lVar1 = *(long *)(param_2 + 0x38);
    uVar3 = (ulong)*(uint *)(lVar1 + 8);
    if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        uVar2 = FUN_100600910(param_1,*(undefined8 *)(lVar1 + 0x10 + ((int)uVar3 + lVar4) * 8),
                              param_3);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        lVar4 = lVar4 + 1;
        lVar1 = *(long *)(param_2 + 0x38);
        uVar3 = (ulong)*(int *)(lVar1 + 8);
      } while (lVar4 < (long)((long)*(int *)(lVar1 + 0xc) - uVar3));
    }
  }
  return 0;
}

