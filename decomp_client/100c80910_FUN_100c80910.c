
ulong FUN_100c80910(long *param_1,undefined8 *param_2,char *param_3,int param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  uint local_34;
  
  lVar10 = *(long *)(param_3 + 0x20);
  if ((*param_3 != '\0') && (*param_1 == 0)) {
    return 0;
  }
  uVar7 = 0;
  pcVar9 = (code *)0x0;
  if (lVar10 != 0) {
    pcVar9 = *(code **)(lVar10 + 0x18);
  }
  iVar8 = 1;
  switch(*param_3) {
  case '\0':
    lVar10 = *(long *)(param_3 + 0x10);
    if (lVar10 != 0) {
LAB_100c80a09:
      uVar7 = FUN_100c80cd0(param_1,param_2,lVar10,param_4,param_5);
      return uVar7;
    }
    goto LAB_100c80ba9;
  case '\x02':
    if (pcVar9 != (code *)0x0) {
      param_5 = param_5 & 0xffffffff;
      iVar8 = (*pcVar9)(6,param_1,param_3,0);
      if (iVar8 == 0) {
        return 0;
      }
    }
    param_5 = param_5 & 0xffffffff;
    iVar8 = FUN_100c83400(param_1,param_3);
    if ((-1 < iVar8) && ((long)iVar8 < *(long *)(param_3 + 0x18))) {
      lVar10 = *(long *)(param_3 + 0x10) + (long)iVar8 * 0x28;
      param_1 = (long *)FUN_100c83670(param_1,lVar10);
      param_4 = -1;
      goto LAB_100c80a09;
    }
    uVar7 = 0;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(7,param_1,param_3,0);
      uVar7 = 0;
    }
    break;
  case '\x03':
    pbVar11 = (byte *)0x0;
    if (param_2 != (undefined8 *)0x0) {
      pbVar11 = (byte *)*param_2;
    }
    uVar1 = (**(code **)(lVar10 + 0x18))(*param_1);
    uVar7 = (ulong)uVar1;
    if ((param_2 != (undefined8 *)0x0) && (param_4 != -1)) {
      *pbVar11 = *pbVar11 & 0x20 | (byte)param_5 | (byte)param_4;
    }
    break;
  case '\x04':
                    /* WARNING: Could not recover jumptable at 0x000100c80a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar10 + 0x28))(param_1,param_2,param_3,param_4);
    return uVar7;
  case '\x05':
    param_4 = -1;
LAB_100c80ba9:
    uVar7 = FUN_100c81180(param_1,param_2,param_3,param_4);
    return uVar7;
  case '\x06':
    iVar8 = ((uint)(param_5 >> 0xb) & 1) + 1;
  case '\x01':
    iVar2 = FUN_100c835f0(&local_34,param_2,param_1,param_3);
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        local_34 = 0;
        uVar1 = (uint)param_5 & 0xffffff3f;
        if (param_4 != -1) {
          uVar1 = (uint)param_5;
        }
        iVar2 = 0x10;
        if (param_4 != -1) {
          iVar2 = param_4;
        }
        if ((pcVar9 != (code *)0x0) && (iVar3 = (*pcVar9)(6,param_1,param_3,0), iVar3 == 0)) {
          return 0;
        }
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar10 = *(long *)(param_3 + 0x10);
          lVar12 = 0;
          do {
            lVar5 = FUN_100c83690(param_1,lVar10,1);
            if (lVar5 == 0) {
              return 0;
            }
            uVar6 = FUN_100c83670(param_1,lVar5);
            iVar3 = FUN_100c80cd0(uVar6,0,lVar5,0xffffffff,uVar1);
            local_34 = iVar3 + local_34;
            lVar10 = lVar10 + 0x28;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(long *)(param_3 + 0x18));
        }
        uVar4 = FUN_100c8aea0(iVar8,local_34,iVar2);
        if (param_2 != (undefined8 *)0x0) {
          FUN_100c8ad50(param_2,iVar8,local_34,iVar2,uVar1);
          if (0 < *(long *)(param_3 + 0x18)) {
            lVar10 = *(long *)(param_3 + 0x10);
            lVar12 = 0;
            do {
              lVar5 = FUN_100c83690(param_1,lVar10,1);
              if (lVar5 == 0) {
                return 0;
              }
              uVar6 = FUN_100c83670(param_1,lVar5);
              FUN_100c80cd0(uVar6,param_2,lVar5,0xffffffff,uVar1);
              lVar10 = lVar10 + 0x28;
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(long *)(param_3 + 0x18));
          }
          if (iVar8 == 2) {
            FUN_100c8ae80(param_2);
          }
          if ((pcVar9 != (code *)0x0) && (iVar8 = (*pcVar9)(7,param_1,param_3,0), iVar8 == 0)) {
            return 0;
          }
        }
        uVar7 = (ulong)uVar4;
      }
      else {
        uVar7 = (ulong)local_34;
      }
    }
  }
  return uVar7;
}

