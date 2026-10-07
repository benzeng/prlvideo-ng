
ulong FUN_10084d070(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  
  uVar1 = FUN_100853e00();
  if (param_5 != 0) {
    lVar3 = (long)param_4;
    puVar2 = (ulong *)(param_1 + lVar3 * 8);
    if (param_5 < 0) {
      puVar4 = (ulong *)(param_3 + lVar3 * 8);
      if (uVar1 != 0) {
        do {
          iVar5 = param_5;
          uVar6 = -(ulong)CARRY8(uVar1,*puVar4) & 1;
          *puVar2 = uVar1 + *puVar4;
          if (-2 < iVar5) {
            return uVar6;
          }
          uVar1 = -(ulong)CARRY8(uVar6,puVar4[1]) & 1;
          puVar2[1] = uVar6 + puVar4[1];
          if (-1 < iVar5 + 2) {
            return uVar1;
          }
          uVar6 = -(ulong)CARRY8(uVar1,puVar4[2]) & 1;
          puVar2[2] = uVar1 + puVar4[2];
          if (-1 < iVar5 + 3) {
            return uVar6;
          }
          uVar1 = -(ulong)CARRY8(uVar6,puVar4[3]) & 1;
          puVar2[3] = uVar6 + puVar4[3];
          if (-1 < iVar5 + 4) {
            return uVar1;
          }
          puVar4 = puVar4 + 4;
          puVar2 = puVar2 + 4;
          param_5 = iVar5 + 4;
        } while (uVar1 != 0);
        param_5 = iVar5 + 4;
      }
      *puVar2 = *puVar4;
      uVar1 = 0;
      if (param_5 < -1) {
        uVar1 = 0;
        lVar3 = 0;
        do {
          puVar2[lVar3 + 1] = puVar4[lVar3 + 1];
          iVar5 = (int)lVar3;
          if (-1 < param_5 + iVar5 + 2) {
            return 0;
          }
          puVar2[lVar3 + 2] = puVar4[lVar3 + 2];
          if (-1 < param_5 + iVar5 + 3) {
            return 0;
          }
          puVar2[lVar3 + 3] = puVar4[lVar3 + 3];
          if (-1 < param_5 + iVar5 + 4) {
            return 0;
          }
          puVar2[lVar3 + 4] = puVar4[lVar3 + 4];
          lVar3 = lVar3 + 4;
        } while ((int)lVar3 + param_5 < -1);
      }
    }
    else {
      puVar4 = (ulong *)(param_2 + lVar3 * 8);
      if (uVar1 != 0) {
        do {
          iVar5 = param_5;
          uVar6 = -(ulong)CARRY8(uVar1,*puVar4) & 1;
          *puVar2 = uVar1 + *puVar4;
          if (iVar5 < 2) {
            return uVar6;
          }
          uVar1 = -(ulong)CARRY8(uVar6,puVar4[1]) & 1;
          puVar2[1] = uVar6 + puVar4[1];
          if (iVar5 < 3) {
            return uVar1;
          }
          uVar6 = -(ulong)CARRY8(uVar1,puVar4[2]) & 1;
          puVar2[2] = uVar1 + puVar4[2];
          if (iVar5 + -3 < 1) {
            return uVar6;
          }
          uVar1 = -(ulong)CARRY8(uVar6,puVar4[3]) & 1;
          puVar2[3] = uVar6 + puVar4[3];
          if (iVar5 + -4 < 1) {
            return uVar1;
          }
          puVar4 = puVar4 + 4;
          puVar2 = puVar2 + 4;
          param_5 = iVar5 + -4;
        } while (uVar1 != 0);
        param_5 = iVar5 + -4;
      }
      *puVar2 = *puVar4;
      uVar1 = 0;
      if (1 < param_5) {
        uVar1 = 0;
        while( true ) {
          puVar2[1] = puVar4[1];
          if ((param_5 < 3) || (puVar2[2] = puVar4[2], param_5 < 4)) break;
          puVar2[3] = puVar4[3];
          iVar5 = param_5 + -4;
          if (iVar5 == 0 || param_5 < 4) {
            return 0;
          }
          puVar2[4] = puVar4[4];
          param_5 = iVar5;
          puVar2 = puVar2 + 4;
          puVar4 = puVar4 + 4;
          if (iVar5 < 2) {
            return 0;
          }
        }
      }
    }
  }
  return uVar1;
}

