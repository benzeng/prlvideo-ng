
undefined8 FUN_1004f4ad0(long *param_1)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  iVar5 = *(int *)(lVar8 + 4);
  lVar7 = (long)iVar5;
  if (0xc < lVar7) {
    return 0;
  }
  if (iVar5 == 2) {
    if (*(short *)(lVar8 + *(long *)(lVar8 + 0x10)) != 0x2e) goto LAB_1004f4b25;
    sVar1 = *(short *)(*(long *)(lVar8 + 0x10) + 2 + lVar8);
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 < 1) {
        return 1;
      }
      goto LAB_1004f4b25;
    }
    sVar1 = *(short *)(lVar8 + *(long *)(lVar8 + 0x10));
  }
  if (sVar1 == 0x2e) {
    return 1;
  }
LAB_1004f4b25:
  lVar8 = lVar8 + *(long *)(lVar8 + 0x10);
  lVar6 = 0;
  bVar3 = false;
  do {
    iVar5 = iVar5 + -1;
    uVar2 = *(ushort *)(lVar8 + lVar6 * 2);
    if (0x7f < uVar2) {
      return 0;
    }
    uVar4 = (uint)uVar2;
    if ((*(uint *)(&DAT_100b457a0 + (ulong)(uVar2 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
      return 0;
    }
    if (uVar4 == 0x2e) {
      if (bVar3) {
        return 0;
      }
      if ((int)lVar6 == 0) {
        return 0;
      }
      if (*(short *)(lVar8 + -2 + lVar6 * 2) == 0x20) {
        return 0;
      }
      bVar3 = true;
      if (3 < iVar5) {
        return 0;
      }
    }
    else if ((!bVar3) && (7 < lVar6)) {
      return 0;
    }
    lVar6 = lVar6 + 1;
    if (lVar7 <= lVar6) {
      if (uVar4 == 0x20) {
        return 0;
      }
      if (uVar4 != 0x2e) {
        return 1;
      }
      return 0;
    }
  } while( true );
}

