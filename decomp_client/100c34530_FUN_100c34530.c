
int FUN_100c34530(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar8;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 1);
  if (*(uint *)(param_1 + 1) == 0) {
    return 0;
  }
  iVar3 = 0;
  do {
    iVar6 = (int)uVar7;
    uVar7 = (ulong)iVar6;
    lVar4 = (long)(iVar6 + -1) << 3;
    do {
      if ((long)uVar7 < 1) {
        if (param_3 <= iVar3) {
          return iVar3;
        }
        *(undefined4 *)(param_2 + (long)iVar3 * 4) = 0xffffffff;
        return iVar3 + 1;
      }
      uVar1 = *(ulong *)(*param_1 + lVar4);
      uVar7 = uVar7 - 1;
      lVar4 = lVar4 + -8;
    } while (uVar1 == 0);
    uVar5 = 0x8000000000000000;
    iVar6 = 0x40;
    do {
      if ((uVar5 & uVar1) != 0) {
        if (iVar3 < param_3) {
          *(uint *)(param_2 + (long)iVar3 * 4) = (((int)uVar7 << 6 | 0x3fU) - 0x40) + iVar6;
        }
        iVar3 = iVar3 + 1;
      }
      uVar5 = uVar5 >> 1;
      iVar8 = iVar6 + -1;
      bVar2 = 0 < iVar6;
      iVar6 = iVar8;
    } while (iVar8 != 0 && bVar2);
  } while( true );
}

