
void FUN_100ae6d30(long *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  double *pdVar7;
  int *piVar8;
  uint uVar9;
  double *pdVar10;
  
  lVar4 = *(long *)(param_2 + 8);
  uVar3 = *(uint *)(lVar4 + 4);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (*param_1 != 0) {
    (*DAT_1023119e8)();
    *param_1 = 0;
  }
  pdVar7 = _malloc((ulong)uVar3 << 5);
  if (pdVar7 != (double *)0x0) {
    if (uVar3 != 0) {
      piVar8 = (int *)(lVar4 + 0x1c + lVar5);
      pdVar10 = pdVar7;
      uVar9 = uVar3;
      do {
        iVar6 = *piVar8;
        uVar1 = *(ushort *)(piVar8 + -6);
        uVar2 = *(ushort *)((long)piVar8 + -0x16);
        *pdVar10 = (double)piVar8[-1];
        pdVar10[1] = (double)iVar6;
        pdVar10[2] = (double)uVar1;
        pdVar10[3] = (double)uVar2;
        piVar8 = piVar8 + 8;
        pdVar10 = pdVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar6 = (*DAT_1023119f8)(pdVar7,uVar3,param_1);
    if (iVar6 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","ChrProtocol",1,"Failed to create CGSRegion. errCode = %d",iVar6);
      }
      *param_1 = 0;
    }
    _free(pdVar7);
    return;
  }
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrProtocol",1,"Failed to allocate memory (%ld bytes)",
                  (ulong)uVar3 << 5);
    return;
  }
  return;
}

