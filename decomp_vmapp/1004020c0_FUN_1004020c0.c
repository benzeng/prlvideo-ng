
void FUN_1004020c0(int *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (DAT_1011ccc18 != (code *)0x0) {
    (*DAT_1011ccc18)(param_1[0x10],(*(uint *)(param_2 + 0xa8) & 1) * 2 + 0x18,
                     (ulong)*(uint *)(param_2 + 0xc0) |
                     *(ulong *)(param_2 + 0x20) / *(ulong *)(param_1 + 0x12) << 0x20);
  }
  uVar5 = *(uint *)(param_2 + 0xc0);
  if ((uVar5 & 0xfc) == 0) {
    if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
      *(long *)(*(long *)(param_1 + 0x1e) + 0xf0) = *(long *)(*(long *)(param_1 + 0x1e) + 0xf0) + 1;
      uVar2 = *(ulong *)(param_2 + 0x18);
      *(long *)(*(long *)(param_1 + 0x1a) + 0xf0) =
           *(long *)(*(long *)(param_1 + 0x1a) + 0xf0) + uVar2;
      if (*(long *)(param_1 + 0x16) != 0) {
        FUN_1003fd0f0(*(long *)(param_1 + 0x16),
                      *(ulong *)(param_2 + 0x20) / *(ulong *)(param_1 + 0x12),
                      uVar2 / *(ulong *)(param_1 + 0x12));
      }
      FUN_100401e30(param_1);
    }
    else {
      *(long *)(*(long *)(param_1 + 0x22) + 0xf0) = *(long *)(*(long *)(param_1 + 0x22) + 0xf0) + 1;
      *(long *)(*(long *)(param_1 + 0x1c) + 0xf0) =
           *(long *)(*(long *)(param_1 + 0x1c) + 0xf0) + *(long *)(param_2 + 0x18);
    }
    *(long *)(*(long *)(param_1 + 0x2a) + 0xf0) = *(long *)(*(long *)(param_1 + 0x2a) + 0xf0) + -1;
    if (DAT_1011c8490 == 0) {
      return;
    }
    iVar6 = QTime::elapsed();
    uVar5 = iVar6 * DAT_1011c8490;
    if (uVar5 < 100) {
      return;
    }
    uVar7 = 100;
    if (uVar5 < 0x2774) {
      uVar7 = uVar5 / 100;
    }
    FUN_1007685b0(uVar7);
    if (*(long *)(*(long *)(param_1 + 0x2a) + 0xf0) < 1) {
      return;
    }
    QTime::restart();
    return;
  }
  if ((uVar5 & 0x20) != 0) {
    *(uint *)(param_2 + 0xc0) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 0x9c) = 1;
  iVar6 = -0x7ffdefde;
  if (((uVar5 & 0x10) == 0) && (iVar6 = -0x7ffdefdd, (uVar5 & 0x40) == 0)) {
    iVar6 = -0x7ffdefe0;
    if ((uVar5 & 8) != 0) {
      iVar6 = (~(*(int *)(param_2 + 0xa8) * 2) & 2U) + 0x80021027;
    }
    iVar4 = *(int *)(param_2 + 0x40) + 1;
    *(int *)(param_2 + 0x40) = iVar4;
    if (iVar4 < *param_1) goto LAB_1004021c0;
    if ((*(byte *)(param_1 + 0x5b) & 0x10) != 0) {
      *(undefined4 *)(param_2 + 0x9c) = 0;
      return;
    }
  }
  cVar3 = FUN_1003f9bf0(uVar5,iVar6,*(undefined4 *)(param_2 + 0xc4),*(undefined8 *)(param_1 + 0xe),
                        param_1[0x10]);
  if (cVar3 == '\0') {
    *(undefined4 *)(param_2 + 0x9c) = 0;
    FUN_1000a7de0(DAT_1011c3698);
  }
LAB_1004021c0:
  if ((*(int *)(param_2 + 0x9c) != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    *(long *)(lVar1 + 8) = param_2 + 0xb0;
    *(long *)(param_2 + 0xb0) = lVar1;
    *(int **)(param_2 + 0xb8) = param_1 + 8;
    *(long *)(param_1 + 8) = param_2 + 0xb0;
  }
  return;
}

