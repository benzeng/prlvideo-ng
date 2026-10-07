
ulong FUN_1002e92c0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(1,0x22,param_1 * 0x100 + 0x19000U | 9);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if ((*(byte *)(param_1 + 0x198) & 0xfc) != 0) {
    FUN_1004103f0(0x30c00,param_1 + 0x150,0x12,0);
    *(undefined1 *)(param_1 + 0x14b) = 1;
  }
  uVar8 = *(ulong *)(param_1 + 0x9e8);
  if (*(int *)(uVar8 + 0xc) == *(int *)(uVar8 + 8)) {
    *(undefined4 *)(param_1 + 0x14c) = 4;
    return uVar8;
  }
  lVar7 = FUN_1002e9520(param_1 + 0x9e8);
  lVar5 = *(long *)(*(ulong *)(param_1 + 8) + 0x40 + (ulong)*(byte *)(lVar7 + 0x44c) * 8);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 6;
    return *(ulong *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if (DAT_1011ccc18 == (code *)0x0) goto LAB_1002e93c4;
    uVar9 = 10;
  }
  else {
    if ((*(int *)(param_1 + 0x178) != 1) || (DAT_1011ccc18 == (code *)0x0)) goto LAB_1002e93c4;
    uVar9 = 0xb;
  }
  (*DAT_1011ccc18)(1,0x22,uVar9);
LAB_1002e93c4:
  *(int *)(param_1 + 0x147) = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x147);
  uVar6 = 6;
  if (0xc < *(uint *)(lVar7 + 0x43c)) {
    *(undefined1 *)(lVar7 + 0x4e4) = *(undefined1 *)(param_1 + 0x14b);
    *(undefined4 *)(lVar7 + 0x4e0) = *(undefined4 *)(param_1 + 0x147);
    *(undefined8 *)(lVar7 + 0x4d8) = *(undefined8 *)(param_1 + 0x13f);
    *(undefined4 *)(lVar7 + 0x454) = 0xd;
    *(undefined4 *)(lVar7 + 0x468) = 0;
    uVar6 = 7;
    if (*(char *)(param_1 + 0x14b) != '\x02') {
      uVar6 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  if ((1 < DAT_1011c568c) && (*(int *)(lVar7 + 0x450) == 0x69)) {
    FUN_1002da980(2,lVar7);
  }
  uVar4 = *(uint *)(lVar7 + 0x470);
  *(undefined4 *)(lVar7 + 0x464) = 1;
  LOCK();
  piVar1 = (int *)(*(long *)(lVar5 + 0xc0) + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  LOCK();
  puVar2 = (uint *)(lVar5 + 8);
  uVar3 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar4 & 4) == 0) {
    return (ulong)uVar3;
  }
  uVar8 = FUN_1002c9070(lVar7);
  return uVar8;
}

