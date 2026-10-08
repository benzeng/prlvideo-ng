
bool FUN_100c758e0(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  
  bVar13 = false;
  if (param_1[1] == 0x18) {
    iVar2 = *param_1;
    lVar12 = (long)iVar2;
    if (0xc < lVar12) {
      lVar3 = *(long *)(param_1 + 2);
      iVar11 = 6;
      lVar8 = 0;
      lVar7 = 0;
      uVar10 = 0;
      do {
        cVar5 = *(char *)(lVar3 + lVar7 * 2);
        if (((iVar11 == 0) && ((byte)(cVar5 - 0x2bU) < 0x30)) &&
           ((0x800000000005U >> ((ulong)(byte)(cVar5 - 0x2bU) & 0x3f) & 1) != 0)) break;
        if (lVar12 <= (long)uVar10) {
          return false;
        }
        if (9 < (byte)(cVar5 - 0x30U)) {
          return false;
        }
        cVar1 = *(char *)(lVar3 + 1 + lVar7 * 2);
        if (9 < (byte)(cVar1 - 0x30U)) {
          return false;
        }
        uVar10 = uVar10 + 2;
        if (lVar12 < (long)uVar10) {
          return false;
        }
        iVar6 = cVar1 + -0x210 + cVar5 * 10;
        if (iVar6 < *(int *)((long)&DAT_101dae900 + lVar8)) {
          return false;
        }
        if (*(int *)((long)&DAT_101dae930 + lVar8) < iVar6) {
          return false;
        }
        lVar7 = lVar7 + 1;
        iVar11 = iVar11 + -1;
        lVar8 = lVar8 + 4;
      } while (lVar7 < 7);
      uVar9 = (uint)uVar10;
      cVar5 = *(char *)(lVar3 + (int)uVar9);
      if (cVar5 == '.') {
        if (iVar2 <= (int)uVar9) {
          return false;
        }
        uVar4 = (long)(int)(uVar9 | 1);
        do {
          uVar10 = uVar4;
          if (lVar12 < (long)uVar10) break;
          uVar4 = uVar10 + 1;
        } while ((byte)(*(char *)(lVar3 + uVar10) - 0x30U) < 10);
        if ((uVar9 | 1) == (uint)uVar10) {
          return false;
        }
        cVar5 = *(char *)(lVar3 + (int)(uint)uVar10);
      }
      else {
        uVar10 = uVar10 & 0xffffffff;
      }
      iVar11 = (int)uVar10;
      if ((cVar5 == '+') || (cVar5 == '-')) {
        iVar6 = iVar11 + 5;
        if (iVar2 < iVar6) {
          return false;
        }
        lVar12 = (long)iVar11;
        cVar5 = *(char *)(lVar12 + 1 + lVar3);
        if (9 < (byte)(cVar5 - 0x30U)) {
          return false;
        }
        cVar1 = *(char *)(lVar12 + 2 + lVar3);
        if (9 < (byte)(cVar1 - 0x30U)) {
          return false;
        }
        if (0xc < (uint)(cVar1 + -0x210 + cVar5 * 10)) {
          return false;
        }
        cVar5 = *(char *)(lVar3 + (iVar11 + 3));
        if (9 < (byte)(cVar5 - 0x30U)) {
          return false;
        }
        cVar1 = *(char *)(lVar12 + 4 + lVar3);
        if (9 < (byte)(cVar1 - 0x30U)) {
          return false;
        }
        if (0x3b < (uint)(cVar1 + -0x210 + cVar5 * 10)) {
          return false;
        }
      }
      else {
        if (cVar5 != 'Z') {
          return false;
        }
        iVar6 = iVar11 + 1;
      }
      bVar13 = iVar6 == iVar2;
    }
  }
  return bVar13;
}

