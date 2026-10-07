
void FUN_1002b2e80(long param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  ushort local_3c;
  ushort local_3a;
  int local_38;
  int local_34;
  
  *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f334) = (uint)param_2[3] & 7;
  if (*(char *)((long)param_2 + 0x1c) == '\0') {
    uVar3 = FUN_100097250();
    FUN_1002b13c0(uVar3,&local_34,&local_38,&local_3a,&local_3c);
    *(int *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f338) = (int)*param_2 - local_34;
    *(int *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f33c) = *(int *)((long)param_2 + 4) - local_38;
    *(int *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f340) = (int)param_2[1];
    *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f344) = (uint)local_3a;
    *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f348) = (uint)local_3c;
    *(undefined4 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f34c) = 1;
    iVar7 = (int)param_2[1];
    iVar4 = (int)param_2[3];
    bVar15 = iVar4 == *(int *)(param_1 + 0x40);
    bVar16 = iVar7 == 0;
    iVar13 = 0;
    if (bVar16 && bVar15) {
      iVar7 = 0;
    }
    uVar11 = (ulong)(uint)((int)((uint)(bVar16 && bVar15) << 0x1f) >> 0x1f);
  }
  else {
    *(undefined4 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f34c) = 0;
    uVar11 = *param_2;
    iVar13 = (int)(uVar11 >> 0x20);
    iVar7 = (int)param_2[1];
    iVar4 = (int)param_2[3];
  }
  uVar14 = -iVar13;
  uVar8 = -iVar7;
  bVar1 = (byte)iVar4 & 7;
  uVar5 = iVar4 * 2 & 0x30;
  do {
    uVar10 = (uint)uVar11;
    bVar2 = bVar1 | 0x10;
    if (-1 < (int)uVar10) {
      bVar2 = bVar1;
    }
    uVar12 = 0xffffff00;
    if ((-0x101 < (int)uVar10) && (uVar12 = uVar10, 0xff < (int)uVar10)) {
      uVar12 = 0xff;
    }
    if ((int)uVar14 < 0) {
      bVar2 = bVar2 | 0x20;
    }
    uVar6 = 0xffffff00;
    if ((-0x101 < (int)uVar14) && (uVar6 = uVar14, 0xff < (int)uVar14)) {
      uVar6 = 0xff;
    }
    uVar14 = uVar14 - uVar6;
    uVar9 = 0xfffffff8;
    if ((-9 < (int)uVar8) && (uVar9 = uVar8, 7 < (int)uVar8)) {
      uVar9 = 7;
    }
    if (uVar10 == uVar12 && uVar14 == 0) {
      FUN_1002b2d90(param_1,uVar12 & 0xff,uVar6 & 0xff,uVar9 & 0xf | uVar5,bVar2);
      if (uVar8 == uVar9) {
        return;
      }
    }
    else {
      FUN_1002b2d90(param_1,uVar12 & 0xff,uVar6 & 0xff,uVar9 & 0xf | uVar5,bVar2);
    }
    uVar11 = (ulong)(uVar10 - uVar12);
    uVar8 = uVar8 - uVar9;
  } while( true );
}

