
bool FUN_100899e30(uint *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  bool bVar12;
  
  bVar12 = false;
  if (param_1[1] == 0x17) {
    uVar4 = *param_1;
    lVar9 = (long)(int)uVar4;
    if (10 < lVar9) {
      lVar5 = *(long *)(param_1 + 2);
      iVar11 = 5;
      lVar8 = 0;
      lVar6 = 0;
      lVar10 = 0;
      do {
        cVar2 = *(char *)(lVar5 + lVar6 * 2);
        if (((iVar11 == 0) && ((byte)(cVar2 - 0x2bU) < 0x30)) &&
           ((0x800000000005U >> ((ulong)(byte)(cVar2 - 0x2bU) & 0x3f) & 1) != 0)) break;
        if (lVar9 <= lVar10) {
          return false;
        }
        if (9 < (byte)(cVar2 - 0x30U)) {
          return false;
        }
        cVar3 = *(char *)(lVar5 + 1 + lVar6 * 2);
        if (9 < (byte)(cVar3 - 0x30U)) {
          return false;
        }
        lVar10 = lVar10 + 2;
        if (lVar9 < lVar10) {
          return false;
        }
        iVar1 = cVar3 + -0x210 + cVar2 * 10;
        if (iVar1 < *(int *)((long)&PTR___mh_execute_header_100b59c10 + lVar8)) {
          return false;
        }
        if (*(int *)((long)&DAT_100b59c30 + lVar8) < iVar1) {
          return false;
        }
        lVar6 = lVar6 + 1;
        iVar11 = iVar11 + -1;
        lVar8 = lVar8 + 4;
      } while (lVar6 < 6);
      uVar7 = (uint)lVar10;
      lVar9 = (long)(int)uVar7;
      cVar2 = *(char *)(lVar5 + lVar9);
      if ((cVar2 == '+') || (cVar2 == '-')) {
        if ((int)uVar4 < (int)(uVar7 + 5)) {
          return false;
        }
        cVar2 = *(char *)(lVar5 + (int)(uVar7 | 1));
        if (9 < (byte)(cVar2 - 0x30U)) {
          return false;
        }
        cVar3 = *(char *)(lVar5 + 2 + lVar9);
        if (9 < (byte)(cVar3 - 0x30U)) {
          return false;
        }
        if (0xc < (uint)(cVar3 + -0x210 + cVar2 * 10)) {
          return false;
        }
        cVar2 = *(char *)(lVar5 + (int)(uVar7 + 2 | 1));
        if (9 < (byte)(cVar2 - 0x30U)) {
          return false;
        }
        cVar3 = *(char *)(lVar5 + 4 + lVar9);
        if (9 < (byte)(cVar3 - 0x30U)) {
          return false;
        }
        if (0x3b < (uint)(cVar3 + -0x210 + cVar2 * 10)) {
          return false;
        }
        uVar7 = uVar7 + 4 | 1;
      }
      else if (cVar2 == 'Z') {
        uVar7 = uVar7 | 1;
      }
      bVar12 = uVar7 == uVar4;
    }
  }
  return bVar12;
}

