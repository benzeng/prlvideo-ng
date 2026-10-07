
undefined8 FUN_10034e970(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  
  uVar3 = 9;
  if (0x17 < *(uint *)(param_2 + 4)) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar3 = 7;
    for (puVar4 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
        puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == uVar1) {
        if (*(long *)(puVar4 + 2) == 0) {
          return 7;
        }
        lVar2 = *(long *)(*(long *)(puVar4 + 2) + 8);
        lVar5 = 0x1000;
        if (*(int *)(param_2 + 0xc) != 5) {
          lVar5 = (ulong)(*(int *)(param_2 + 0xc) == 4) << 0xd;
        }
        (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
                  (*(long **)(param_1 + 0x2778),lVar2,
                   **(int **)(lVar2 + 0x28) + *(int *)(param_2 + 0x10),*(int *)(param_2 + 0x10),
                   *(undefined4 *)(param_2 + 0x14),lVar5);
        return 0;
      }
    }
  }
  return uVar3;
}

