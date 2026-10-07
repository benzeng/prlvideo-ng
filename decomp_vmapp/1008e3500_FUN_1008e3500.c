
int * FUN_1008e3500(int *param_1,uint param_2,long *param_3)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  lVar3 = *param_3;
  lVar6 = (long)*(int *)(lVar3 + 4);
  if (lVar6 != 0) {
    lVar4 = lVar3 + *(long *)(lVar3 + 0x10);
    uVar7 = (ulong)*(uint *)(lVar3 + *(long *)(lVar3 + 0x10));
    do {
      if ((uint)uVar7 < 0x20c) {
        if ((uint)uVar7 == 0) break;
      }
      else if ((ushort)(*(ushort *)(lVar4 + 0x16) << 8 | *(ushort *)(lVar4 + 0x16) >> 8) == param_2)
      {
        iVar2 = *(int *)(lVar4 + 0x158);
        iVar5 = 1;
        if (0x3e < iVar2 + 0x1fU) {
          iVar5 = (int)(((uint)(iVar2 >> 0x1f) >> 0x1b) + iVar2) >> 5;
        }
        *param_1 = iVar5;
        param_1[1] = *(int *)(lVar4 + 0x130);
        param_1[2] = *(int *)(lVar4 + 0x134);
        param_1[3] = *(int *)(lVar4 + 0x128);
        return param_1;
      }
      puVar1 = (uint *)(lVar4 + uVar7);
      lVar4 = lVar4 + uVar7;
      lVar6 = lVar6 - (ulong)*puVar1;
      uVar7 = (ulong)*puVar1;
    } while (lVar6 != 0);
  }
  FUN_1008e3970("","IOTCPControlBlockStat",0,"Couldn\'t find socket with port=%u",param_2);
  return param_1;
}

