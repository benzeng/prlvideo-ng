
ulong FUN_100537890(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  uVar9 = 0xf0000016;
  if ((*(int *)(param_2 + 8) != 0x8420) || (uVar9 = 0xf0000003, *(ushort *)(param_2 + 0x14) < 4))
  goto LAB_1005379b3;
  piVar4 = (int *)FUN_1002a6010(param_2);
  iVar1 = *piVar4;
  if (iVar1 < 0x101) {
    if (iVar1 != 0) {
      if (((iVar1 == 5) && (0x813 < *(ushort *)(param_2 + 0x14))) &&
         (lVar5 = FUN_1002a6010(param_2), *(int *)(lVar5 + 4) == 2)) {
        uVar7 = FUN_100538520(*(undefined8 *)(param_1 + 0x38),param_2);
        return uVar7;
      }
      goto LAB_1005379b3;
    }
    if (*(ushort *)(param_2 + 0x14) < 8) goto LAB_1005379b3;
    lVar5 = FUN_1002a6010(param_2);
    iVar1 = *(int *)(lVar5 + 4);
    puVar6 = (uint *)FUN_1002a6010(param_2);
    *puVar6 = (uint)(iVar1 != 2);
  }
  else {
    uVar3 = iVar1 - 0x101;
    if (5 < uVar3) goto LAB_1005379b3;
    if ((0x33U >> (uVar3 & 0x1f) & 1) != 0) {
      cVar2 = FUN_100041750(*(undefined8 *)(param_1 + 0x30),param_2);
      uVar9 = 0xf000001c;
      if (cVar2 != '\0') {
        uVar9 = 0xffffffff;
      }
      goto LAB_1005379b3;
    }
    if (((0xcU >> (uVar3 & 0x1f) & 1) == 0) || (*(ushort *)(param_2 + 0x14) < 0xc))
    goto LAB_1005379b3;
    lVar5 = FUN_1002a6010(param_2);
    cVar2 = FUN_1005389d0(*(long *)(param_1 + 0x40) + 0x30,*(undefined4 *)(lVar5 + 4),param_2);
    uVar9 = 0xffffffff;
    if (cVar2 != '\0') goto LAB_1005379b3;
    puVar8 = (undefined4 *)FUN_1002a6010(param_2);
    *puVar8 = 0xffffffff;
  }
  uVar9 = 0;
LAB_1005379b3:
  return (ulong)uVar9;
}

