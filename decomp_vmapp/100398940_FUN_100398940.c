
undefined4 FUN_100398940(long *param_1,long param_2)

{
  char *pcVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 local_40;
  
  uVar3 = *(uint *)(*param_1 + 0x10);
  local_40 = 0;
  if (uVar3 != 0) {
    uVar8 = 0x121;
    uVar7 = 0;
    uVar9 = uVar3;
    do {
      if ((uVar9 & 1) != 0) {
        iVar4 = *(int *)(param_2 + (ulong)(uVar8 - 0x21) * 4);
        uVar6 = FUN_100351740(*param_1,uVar3,uVar7);
        if (-1 < (int)uVar6) {
          if (iVar4 == *(int *)(*(long *)(*param_1 + 8) + 8 + (ulong)uVar6 * 0x10)) {
            lVar5 = *(long *)(*(long *)(*param_1 + 8) + (ulong)uVar6 * 0x10);
            if (*(char *)(lVar5 + 0x88) == '\0') {
              bVar10 = false;
            }
            else {
              bVar10 = *(int *)(param_2 + (ulong)uVar8 * 4) == 0;
            }
            if (bVar10 != (bool)*(char *)((long)param_1 + uVar7 * 0xc + 0x10)) {
              pcVar1 = (char *)((long)param_1 + uVar7 * 0xc + 0x10);
              *pcVar1 = bVar10;
              local_40 = (undefined4)CONCAT71((int7)((ulong)pcVar1 >> 8),1);
            }
            if (((*(byte *)(*(long *)(*(long *)(lVar5 + 0x40) +
                                     (ulong)(*(int *)(lVar5 + 8) == 0x23) * 8) + 0xac) & 8) != 0) &&
               (iVar4 = *(int *)(param_2 + (ulong)(uVar8 - 4) * 4),
               (iVar4 != 0) != (*(int *)((long)param_1 + uVar7 * 0xc + 0xc) == 5))) {
              piVar2 = (int *)((long)param_1 + uVar7 * 0xc + 0xc);
              *piVar2 = (uint)(iVar4 != 0) + (uint)(iVar4 != 0) * 4;
              local_40 = (undefined4)CONCAT71((int7)((ulong)piVar2 >> 8),1);
            }
          }
        }
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar8 = uVar8 + 0x40;
      uVar6 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar6 != 0);
  }
  return local_40;
}

