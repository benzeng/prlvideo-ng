
void FUN_100810320(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  local_34 = 0;
  local_38 = 0;
  if (param_1 == 0) {
    return;
  }
  iVar16 = (~(*(int *)(param_2 + 0x40) << 6) & 0x200U) + 0x200;
  lVar13 = *(long *)(param_1 + 0x38);
  bVar6 = *(long *)(param_1 + 0x30) != 0;
  bVar22 = lVar13 != 0;
  if ((!bVar22) && (bVar6)) {
    iVar10 = FUN_100870f50();
    bVar22 = iVar10 * 8 <= iVar16;
  }
  lVar1 = *(long *)(param_1 + 0x48);
  bVar7 = *(long *)(param_1 + 0x40) != 0;
  bVar23 = lVar1 != 0;
  if ((!bVar23) && (bVar7)) {
    iVar10 = FUN_100876c70();
    bVar23 = iVar10 * 8 <= iVar16;
  }
  bVar24 = true;
  if (*(long *)(param_1 + 0x50) == 0) {
    bVar24 = *(long *)(param_1 + 0x58) != 0;
  }
  if ((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x68) == 0)) {
    bVar9 = 0;
    bVar3 = false;
  }
  else {
    iVar10 = FUN_100891d80();
    bVar3 = iVar10 * 8 <= iVar16;
    bVar9 = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    bVar25 = false;
  }
  else {
    bVar25 = *(long *)(param_1 + 0x80) != 0;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar26 = false;
  }
  else {
    bVar26 = *(long *)(param_1 + 0x98) != 0;
  }
  if ((*(long *)(param_1 + 0xa8) == 0) || (*(long *)(param_1 + 0xb0) == 0)) {
    bVar8 = false;
    bVar4 = false;
  }
  else {
    iVar10 = FUN_100891d80();
    bVar4 = iVar10 * 8 <= iVar16;
    bVar8 = true;
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    bVar27 = false;
    bVar5 = false;
  }
  else {
    bVar27 = *(long *)(param_1 + 200) == 0;
    if (bVar27) {
      bVar5 = false;
    }
    else {
      iVar10 = FUN_100891d80();
      bVar5 = iVar10 * 8 <= iVar16;
    }
    bVar27 = !bVar27;
  }
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 == 0) {
    bVar28 = false;
  }
  else {
    bVar28 = *(long *)(param_1 + 0xe0) != 0;
  }
  uVar20 = 0;
  if ((*(long *)(param_1 + 0x108) != 0) && (uVar20 = 0, *(long *)(param_1 + 0x110) != 0)) {
    uVar20 = 0x200;
  }
  uVar14 = uVar20;
  uVar21 = uVar20;
  if (*(long *)(param_1 + 0xf0) != 0) {
    bVar29 = *(long *)(param_1 + 0xf8) == 0;
    uVar21 = uVar20 | 0x100;
    if (bVar29) {
      uVar21 = uVar20;
    }
    uVar14 = 0x200;
    if (bVar29) {
      uVar14 = uVar20;
    }
  }
  uVar14 = (byte)((lVar13 != 0 || bVar6) & bVar25 | bVar9) | uVar14;
  uVar18 = (ulong)(byte)(bVar3 | bVar22 & (bVar25 | bVar9));
  uVar20 = uVar18 + 8;
  if (!bVar23) {
    uVar20 = uVar18;
  }
  uVar18 = uVar14 | 8;
  if (lVar1 == 0 && !bVar7) {
    uVar18 = uVar14;
  }
  uVar14 = uVar18 | 2;
  if (!bVar8) {
    uVar14 = uVar18;
  }
  uVar18 = uVar20 | 2;
  if (!bVar4) {
    uVar18 = uVar20;
  }
  uVar20 = uVar14 | 4;
  if (!bVar27) {
    uVar20 = uVar14;
  }
  uVar14 = uVar18 | 4;
  if (!bVar5) {
    uVar14 = uVar18;
  }
  uVar18 = (ulong)(bVar25 | bVar9);
  uVar21 = uVar21 | uVar18;
  if (bVar26) {
    uVar21 = uVar21 | 2;
    uVar18 = uVar18 | 2;
  }
  uVar19 = uVar21 | 4;
  uVar15 = uVar18 | 4;
  if (!bVar28) goto LAB_100810719;
  local_3c = 0;
  FUN_1008c9ba0(lVar2,0xffffffff,0);
  uVar17 = 1;
  uVar11 = 1;
  if ((*(byte *)(lVar2 + 0x48) & 2) != 0) {
    uVar17 = *(uint *)(lVar2 + 0x50) & 8;
    uVar11 = *(uint *)(lVar2 + 0x50) & 0x80;
  }
  lVar13 = FUN_1008b7420();
  if (lVar13 != 0) {
    local_3c = FUN_100891d50(lVar13);
  }
  FUN_1008924e0(lVar13);
  if ((*(long **)(lVar2 + 8) != (long *)0x0) && (**(long **)(lVar2 + 8) != 0)) {
    uVar12 = FUN_100821ab0();
    FUN_100823110(uVar12,&local_38,&local_34);
  }
  if (uVar17 == 0) goto LAB_10081070a;
  if (local_34 == 6) {
LAB_1008106db:
    uVar20 = uVar20 | 0x20;
    uVar19 = uVar21 | 0x14;
    if (local_3c < 0xa4) {
      uVar14 = uVar14 | 0x20;
LAB_1008106f4:
      uVar19 = uVar21 | 0x14;
      uVar15 = uVar18 | 0x14;
    }
  }
  else if (local_34 == 0x198) {
    uVar20 = uVar20 | 0x40;
    uVar19 = uVar21 | 0x14;
    if (local_3c < 0xa4) {
      uVar14 = uVar14 | 0x40;
      goto LAB_1008106f4;
    }
  }
  else if (local_34 == 0x13) goto LAB_1008106db;
LAB_10081070a:
  if (uVar11 != 0) {
    uVar19 = uVar19 | 0x40;
    uVar15 = uVar15 | 0x40;
  }
LAB_100810719:
  if (bVar24) {
    uVar20 = uVar20 | 0x80;
    uVar14 = uVar14 | 0x80;
  }
  *(ulong *)(param_1 + 0x10) = uVar20 | 0x100;
  *(ulong *)(param_1 + 0x18) = uVar19 | 0x80;
  *(ulong *)(param_1 + 0x20) = uVar14 | 0x100;
  *(ulong *)(param_1 + 0x28) = uVar15 | 0x80;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

