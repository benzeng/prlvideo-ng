
void FUN_100c60b60(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_1 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 3);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(*param_1 + uVar4 * 8);
        if (lVar2 != 0) {
          do {
            lVar2 = *(long *)(lVar2 + 8);
            FUN_100bf3910();
          } while (lVar2 != 0);
          uVar1 = *(uint *)(param_1 + 3);
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulong)uVar3;
      } while (uVar3 < uVar1);
    }
    FUN_100bf3910(*param_1);
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

