
long FUN_1007da3c0(long param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  uint uVar9;
  long lVar10;
  
  sVar8 = _strlen(param_2);
  uVar3 = *(uint *)(param_1 + 4);
  if ((1 < uVar3) && (uVar9 = (uint)sVar8, uVar9 <= uVar3 - 1)) {
    lVar10 = 0;
    bVar6 = *(byte *)(param_1 + 8);
    uVar5 = uVar3 - 2;
    do {
      bVar2 = *(byte *)(param_1 + 9 + lVar10);
      if ((char)bVar6 < '|') {
        if ((bVar6 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar6 & 0x3f) & 1) != 0)) {
LAB_1007da468:
          if ((char)bVar2 < '|') {
            if ((0x3b < bVar2) || ((0x800100000002401U >> ((ulong)bVar2 & 0x3f) & 1) == 0)) {
LAB_1007da498:
              iVar7 = _strncasecmp(param_2,(char *)(param_1 + 9 + lVar10),sVar8 & 0xffffffff);
              if ((iVar7 == 0) &&
                 (uVar1 = (ulong)(uVar9 + 1) + lVar10,
                 *(char *)(param_1 + 8 + (uVar1 & 0xffffffff)) == '=')) {
                return param_1 + 8 + (ulong)((int)uVar1 + 1);
              }
            }
          }
          else if (bVar2 != 0x7c) goto LAB_1007da498;
        }
      }
      else if (bVar6 == 0x7c) goto LAB_1007da468;
      if (uVar3 <= (int)lVar10 + 2U) {
        return 0;
      }
      lVar10 = lVar10 + 1;
      bVar4 = uVar9 <= uVar5;
      bVar6 = bVar2;
      uVar5 = uVar5 - 1;
    } while (bVar4);
  }
  return 0;
}

