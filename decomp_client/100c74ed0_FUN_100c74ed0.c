
int FUN_100c74ed0(int *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  int iVar9;
  
  iVar9 = 0;
  if (param_1 != (int *)0x0) {
    iVar6 = *param_1;
    bVar4 = 0;
    if (0 < (long)iVar6) {
      lVar3 = (long)iVar6;
      if ((*(ulong *)(param_1 + 4) & 8) == 0) {
        do {
          lVar7 = lVar3;
          if (lVar7 < 1) {
            lVar5 = *(long *)(param_1 + 2);
            iVar6 = (int)lVar7;
            goto LAB_100c74f31;
          }
          lVar5 = *(long *)(param_1 + 2);
          lVar3 = lVar7 + -1;
        } while (*(char *)(lVar5 + -1 + lVar7) == '\0');
        iVar6 = (int)(lVar7 + -1) + 1;
LAB_100c74f31:
        bVar1 = *(byte *)(lVar5 + ((lVar7 << 0x20) + -0x100000000 >> 0x20));
        bVar4 = 0;
        if (((((bVar1 & 1) == 0) && (bVar4 = 1, (bVar1 & 2) == 0)) && (bVar4 = 2, (bVar1 & 4) == 0))
           && (((bVar4 = 3, (bVar1 & 8) == 0 && (bVar4 = 4, (bVar1 & 0x10) == 0)) &&
               ((bVar4 = 5, (bVar1 & 0x20) == 0 && (bVar4 = 6, (bVar1 & 0x40) == 0)))))) {
          bVar4 = (char)bVar1 >> 7 & 7;
        }
      }
      else {
        bVar4 = (byte)*(ulong *)(param_1 + 4) & 7;
      }
    }
    iVar9 = iVar6 + 1;
    if (param_2 != (long *)0x0) {
      pbVar2 = (byte *)*param_2;
      *pbVar2 = bVar4;
      sVar8 = (size_t)iVar6;
      _memcpy(pbVar2 + 1,*(void **)(param_1 + 2),sVar8);
      if (0 < iVar6) {
        pbVar2[sVar8] = pbVar2[sVar8] & (byte)(0xff << bVar4);
      }
      *param_2 = (long)(pbVar2 + sVar8 + 1);
    }
  }
  return iVar9;
}

