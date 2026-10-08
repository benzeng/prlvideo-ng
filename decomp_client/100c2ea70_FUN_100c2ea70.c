
void FUN_100c2ea70(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long local_60;
  long local_58;
  long local_50;
  
  iVar9 = (int)param_3;
  if (iVar9 == 8) {
    FUN_100c2f7f0(param_1,param_2);
    return;
  }
  if (iVar9 != 4) {
    if (0xf < iVar9) {
      iVar11 = (int)(((uint)(param_3 >> 0x1f) & 1) + iVar9) >> 1;
      lVar7 = param_2 + (long)iVar11 * 8;
      iVar3 = FUN_100c27450(param_2);
      lVar8 = lVar7;
      lVar10 = param_2;
      if ((iVar3 < 1) && (lVar8 = param_2, lVar10 = lVar7, -1 < iVar3)) {
        local_50 = param_4 + (long)iVar9 * 8;
        ___bzero(local_50,(long)iVar9 * 8);
      }
      else {
        FUN_100c2f030(param_4,lVar10,lVar8,iVar11);
        local_50 = param_4 + (long)iVar9 * 8;
        FUN_100c2ea70(local_50,param_4,iVar11);
      }
      local_58 = param_4 + (long)(iVar9 * 2) * 8;
      local_60 = (long)iVar9;
      FUN_100c2ea70(param_1,param_2,iVar11,local_58);
      lVar8 = param_1 + local_60 * 8;
      FUN_100c2ea70(lVar8,lVar7,iVar11,local_58);
      iVar3 = FUN_100c2f000(param_4,param_1,lVar8,param_3 & 0xffffffff);
      iVar4 = FUN_100c2f030(local_50,param_4,local_50,param_3 & 0xffffffff);
      lVar7 = param_1 + (long)iVar11 * 8;
      iVar5 = FUN_100c2f000(lVar7,lVar7,local_50,param_3 & 0xffffffff);
      iVar5 = iVar5 + (iVar3 - iVar4);
      if (iVar5 != 0) {
        lVar7 = (long)(iVar11 + iVar9);
        puVar1 = (ulong *)(param_1 + lVar7 * 8);
        uVar2 = *puVar1;
        *(ulong *)(param_1 + lVar7 * 8) = (long)iVar5 + *puVar1;
        if (CARRY8((long)iVar5,uVar2)) {
          plVar6 = (long *)(param_1 + 8 + lVar7 * 8);
          do {
            *plVar6 = *plVar6 + 1;
            lVar7 = *plVar6;
            plVar6 = plVar6 + 1;
          } while (lVar7 == 0);
        }
      }
      return;
    }
    FUN_100c2e950(param_1,param_2,param_3 & 0xffffffff,param_4);
    return;
  }
  FUN_100c2fc20(param_1,param_2);
  return;
}

