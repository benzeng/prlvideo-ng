
undefined8 FUN_10034ea10(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = 9;
  if (0x1f < *(uint *)(param_2 + 4)) {
    uVar6 = *(uint *)(param_2 + 8);
    uVar2 = 7;
    for (puVar4 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                            (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
        puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)) {
      if (*puVar4 == uVar6) {
        lVar8 = *(long *)(puVar4 + 2);
        if (lVar8 == 0) {
          return 7;
        }
        uVar6 = *(uint *)(param_2 + 0x10);
        puVar4 = *(uint **)(*(long *)(param_1 + 0x2780) + 0x8068 +
                           (ulong)((uVar6 >> 0xc ^ uVar6) & 0xfff ^ uVar6 >> 0x18) * 8);
        while( true ) {
          if (puVar4 == (uint *)0x0) {
            return 7;
          }
          if (*puVar4 == uVar6) break;
          puVar4 = *(uint **)(puVar4 + 4);
        }
        lVar1 = *(long *)(puVar4 + 2);
        if (lVar1 != 0) {
          iVar3 = *(int *)(param_2 + 0xc);
          lVar7 = *(long *)(lVar1 + 8);
          if ((int)((ulong)(*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40)) >> 3) != 0) {
            uVar6 = *(int *)(param_2 + 0x14) + **(int **)(lVar7 + 0x28);
            if ((int)uVar6 < 0) {
              return 0;
            }
            iVar5 = **(int **)(*(long *)(lVar8 + 8) + 0x28) + iVar3;
            if (iVar5 < 0) {
              FUN_1002fcbe0(*(long *)(param_1 + 0x2770),iVar5,*(undefined4 *)(param_2 + 0x18),
                            (ulong)uVar6 + *(long *)(*(long *)(param_1 + 0x2770) + 0x920));
              iVar3 = *(int *)(param_2 + 0x14);
              lVar8 = lVar1;
            }
          }
          lVar7 = 0x1000;
          if (*(int *)(param_2 + 0x1c) != 5) {
            lVar7 = (ulong)(*(int *)(param_2 + 0x1c) == 4) << 0xd;
          }
          (**(code **)(**(long **)(param_1 + 0x2778) + 0x20))
                    (*(long **)(param_1 + 0x2778),*(undefined8 *)(lVar1 + 8),
                     iVar3 + **(int **)(*(long *)(lVar8 + 8) + 0x28),*(undefined4 *)(param_2 + 0x14)
                     ,*(undefined4 *)(param_2 + 0x18),lVar7);
          return 0;
        }
        return 7;
      }
    }
  }
  return uVar2;
}

