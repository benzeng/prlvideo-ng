
void FUN_10090e8dd(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int local_28;
  int local_24;
  int local_20;
  
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0x4c); local_28 = local_28 + 1) {
    piVar2 = *(int **)(*(long *)(param_1 + 0x50) + (long)local_28 * 8);
    if (((((piVar2 != (int *)0x0) && (piVar2[5] == 1)) && (**(long **)(piVar2 + 6) == 0)) &&
        ((-1 < *(int *)(*(long *)(piVar2 + 6) + 8) &&
         (*(int *)(*(long *)(piVar2 + 6) + 8) != local_28)))) &&
       ((*(int *)(*(long *)(piVar2 + 6) + 0xc) < 0 &&
        ((*(int *)(*(long *)(piVar2 + 6) + 0x10) < 0 &&
         (iVar1 = *(int *)(*(long *)(piVar2 + 6) + 8), *piVar2 != 1)))))) {
      for (local_24 = 0; local_24 < piVar2[9]; local_24 = local_24 + 1) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x50) +
                         (long)*(int *)(*(long *)(piVar2 + 10) + (long)local_24 * 4) * 8);
        for (local_20 = 0; local_20 < *(int *)(lVar3 + 0x14); local_20 = local_20 + 1) {
          if (*(int *)(*(long *)(lVar3 + 0x18) + (long)local_20 * 0x18 + 8) == local_28) {
            *(int *)(*(long *)(lVar3 + 0x18) + (long)local_20 * 0x18 + 8) = iVar1;
            FUN_10090d917(param_1,*(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8),
                          *(undefined4 *)(lVar3 + 0xc));
          }
        }
      }
      if (*piVar2 == 2) {
        **(undefined4 **)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8) = 2;
      }
      piVar2[5] = 0;
    }
  }
  return;
}

