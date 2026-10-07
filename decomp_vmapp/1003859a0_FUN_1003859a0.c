
undefined1 FUN_1003859a0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(lVar3 + 0x60);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar3 + 0x100);
      iVar1 = *(int *)(lVar4 + 0xc);
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar13 = true;
      bVar12 = true;
      if (iVar1 == *(int *)(lVar5 + 0xc)) {
        bVar12 = iVar2 != *(int *)(lVar5 + 0x10);
      }
      bVar14 = true;
      if (*(char *)(DAT_1011c8478 + 0x29) != '\0') {
        iVar6 = FUN_10038e1b0(*(undefined4 *)(lVar4 + 8));
        bVar13 = iVar6 != 0x8050;
        iVar6 = FUN_10038e1b0(*(undefined4 *)(lVar5 + 8));
        bVar14 = iVar6 != 0x81a5;
      }
      if (bVar12) {
        if ((bVar13 == bVar14) && (*(char *)(DAT_1011c8478 + 0x47) == '\0')) {
          return 0;
        }
      }
      else if ((bVar13 ^ bVar14) != 1) {
        return 0;
      }
      lVar4 = *(long *)(lVar3 + 0xf8);
      iVar6 = *(int *)(*(long *)(lVar3 + 0x58) + 0x14);
      iVar11 = 0xde1;
      if (iVar6 != 0x8513) {
        iVar11 = iVar6;
      }
      uVar7 = *(undefined4 *)(lVar4 + 0x18);
      bVar8 = (bVar13 ^ 1U) & bVar14;
      uVar10 = 0x3d;
      if (bVar8 == 0) {
        uVar10 = *(undefined4 *)(lVar5 + 8);
      }
      uVar9 = 0x81a5;
      if (bVar8 == 0) {
        uVar9 = uVar7;
      }
      if (bVar13 == true) {
        uVar10 = 0x26;
        if (bVar14 != false) {
          uVar10 = *(undefined4 *)(lVar5 + 8);
        }
        uVar9 = 0x81a7;
        if (bVar14 != false) {
          uVar9 = uVar7;
        }
      }
      uVar7 = FUN_100385800(param_1,iVar1,iVar2,iVar11,uVar9,uVar10);
      (*DAT_1011c5de8)(0x8d40,0x8d00,iVar11,uVar7,0);
      if ((*(byte *)(lVar4 + 0xac) & 2) == 0) {
        uVar7 = 0;
      }
      (*DAT_1011c5de8)(0x8d40,0x8d20,iVar11,uVar7,0);
      return 1;
    }
  }
  (*DAT_1011c68d8)(0);
  return 0;
}

