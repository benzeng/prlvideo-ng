
ulong FUN_1008a5f70(long *param_1,long *param_2,byte *param_3,char *param_4,int param_5,uint param_6
                   ,char param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  int local_48;
  char local_43;
  char local_42;
  char local_41;
  byte *local_40;
  byte *local_38;
  
  lVar16 = *(long *)(param_4 + 0x20);
  local_40 = (byte *)0x0;
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if ((lVar16 == 0) || (pcVar4 = *(code **)(lVar16 + 0x18), pcVar4 == (code *)0x0)) {
    pcVar4 = (code *)0x0;
  }
  if (6 < (uint)(int)*param_4) {
    return 0;
  }
  uVar13 = param_6 & 0xfffffbff;
  local_38 = param_3;
  switch((int)*param_4) {
  case 0:
    if (*(long *)(param_4 + 0x10) == 0) {
      uVar5 = FUN_1008a6cb0(param_1,param_2,param_3,param_4,param_5);
      return uVar5;
    }
    if ((param_5 == -1) && (param_7 == '\0')) {
      uVar5 = FUN_1008a6ac0(param_1,param_2,param_3,*(long *)(param_4 + 0x10),0,param_8);
      return uVar5;
    }
    uVar7 = 0xaa;
    uVar11 = 0xcb;
    break;
  default:
    local_40 = (byte *)*param_2;
    if (param_5 == -1) {
      uVar13 = 0;
    }
    iVar3 = 0x10;
    if (param_5 != -1) {
      iVar3 = param_5;
    }
    iVar3 = FUN_1008a71c0(&local_38,0,0,&local_42,&local_43,&local_40,param_3,iVar3,uVar13,
                          (int)param_7,param_8);
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    if (iVar3 == 0) {
      uVar7 = 0x3a;
      uVar11 = 0x176;
    }
    else {
      cVar14 = local_42;
      if ((lVar16 != 0) && ((*(byte *)(lVar16 + 8) & 4) != 0)) {
        local_38 = param_3 + (*param_2 - (long)local_40);
        cVar14 = '\x01';
      }
      if (local_43 == '\0') {
        uVar7 = 0x95;
        uVar11 = 0x182;
      }
      else if ((*param_1 == 0) && (iVar3 = FUN_1008a4650(param_1,param_4), iVar3 == 0)) {
        uVar7 = 0x3a;
        uVar11 = 0x187;
      }
      else {
        if ((pcVar4 != (code *)0x0) && (iVar3 = (*pcVar4)(4,param_1,param_4,0), iVar3 == 0))
        goto LAB_1008a699c;
        lVar10 = *(long *)(param_4 + 0x10);
        lVar16 = *(long *)(param_4 + 0x18);
        lVar15 = 0;
        if (0 < lVar16) {
          do {
            if ((*(byte *)(lVar10 + 1) & 3) != 0) {
              uVar7 = FUN_1008a8110(param_1,lVar10,1);
              uVar11 = FUN_1008a80f0(param_1,uVar7);
              FUN_1008a5080(uVar11,uVar7);
              lVar16 = *(long *)(param_4 + 0x18);
            }
            lVar15 = lVar15 + 1;
            lVar10 = lVar10 + 0x28;
          } while (lVar15 < lVar16);
          lVar10 = *(long *)(param_4 + 0x10);
          lVar15 = 0;
          if (0 < lVar16) {
            do {
              pbVar6 = (byte *)FUN_1008a8110(param_1,lVar10,1);
              pbVar8 = (byte *)0x0;
              if (pbVar6 == (byte *)0x0) goto LAB_1008a69c4;
              uVar7 = FUN_1008a80f0(param_1,pbVar6);
              pbVar1 = local_40;
              if (local_38 == (byte *)0x0) break;
              if (((1 < (long)local_38) && (*local_40 == 0)) && (local_40[1] == 0)) {
                local_40 = local_40 + 2;
                if (local_42 == '\0') {
                  uVar7 = 0x9f;
                  uVar11 = 0x1a7;
                  goto LAB_1008a69bc;
                }
                local_38 = local_38 + -2;
                local_42 = '\0';
                goto LAB_1008a68b0;
              }
              if (lVar15 == *(long *)(param_4 + 0x18) + -1) {
                bVar2 = 0;
              }
              else {
                bVar2 = *pbVar6 & 1;
              }
              iVar3 = FUN_1008a6ac0(uVar7,&local_40,local_38,pbVar6,bVar2,param_8);
              pbVar8 = pbVar6;
              if (iVar3 == 0) goto LAB_1008a69c4;
              if (iVar3 == -1) {
                FUN_1008a5080(uVar7,pbVar6);
              }
              else {
                local_38 = pbVar1 + ((long)local_38 - (long)local_40);
              }
              lVar15 = lVar15 + 1;
              lVar10 = lVar10 + 0x28;
            } while (lVar15 < *(long *)(param_4 + 0x18));
          }
        }
        if (local_42 != '\0') {
          if ((((long)local_38 < 2) || (*local_40 != 0)) || (local_40[1] != 0)) {
            uVar7 = 0x89;
            uVar11 = 0x1ce;
            break;
          }
          local_40 = local_40 + 2;
        }
LAB_1008a68b0:
        if ((cVar14 != '\0') || (local_38 == (byte *)0x0)) {
          if ((long)(int)lVar15 < *(long *)(param_4 + 0x18)) {
            lVar16 = (long)((int)lVar15 + 1) + -1;
            do {
              pbVar6 = (byte *)FUN_1008a8110(param_1,lVar10,1);
              pbVar8 = (byte *)0x0;
              if (pbVar6 == (byte *)0x0) goto LAB_1008a69c4;
              if ((*pbVar6 & 1) == 0) {
                FUN_100887ce0(0xd,0x78,0x79,"tasn_dec.c",0x1e7);
                pbVar8 = pbVar6;
                goto LAB_1008a69c4;
              }
              uVar7 = FUN_1008a80f0(param_1,pbVar6);
              FUN_1008a5080(uVar7,pbVar6);
              lVar10 = lVar10 + 0x28;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(long *)(param_4 + 0x18));
          }
          pbVar8 = local_40;
          iVar3 = FUN_1008a7fc0(param_1,*param_2,(int)local_40 - (int)*param_2,param_4);
          if ((iVar3 != 0) &&
             ((pcVar4 == (code *)0x0 || (iVar3 = (*pcVar4)(5,param_1,param_4,0), iVar3 != 0)))) {
            *param_2 = (long)pbVar8;
            return 1;
          }
          goto LAB_1008a699c;
        }
        uVar7 = 0x94;
        uVar11 = 0x1d3;
      }
    }
    break;
  case 2:
    if ((pcVar4 == (code *)0x0) || (iVar3 = (*pcVar4)(4,param_1,param_4,0), iVar3 != 0)) {
      if (*param_1 == 0) {
        iVar3 = FUN_1008a4650(param_1,param_4);
        if (iVar3 == 0) {
          uVar7 = 0x3a;
          uVar11 = 0x13f;
          break;
        }
      }
      else {
        iVar3 = FUN_1008a7e80(param_1,param_4);
        if ((-1 < iVar3) && ((long)iVar3 < *(long *)(param_4 + 0x18))) {
          lVar16 = *(long *)(param_4 + 0x10) + (long)iVar3 * 0x28;
          uVar7 = FUN_1008a80f0(param_1,lVar16);
          FUN_1008a5080(uVar7,lVar16);
          FUN_1008a7e90(param_1,0xffffffff,param_4);
        }
      }
      local_40 = (byte *)*param_2;
      uVar5 = *(ulong *)(param_4 + 0x18);
      uVar12 = 0;
      uVar9 = 0;
      if (0 < (long)uVar5) {
        pbVar8 = *(byte **)(param_4 + 0x10);
        uVar7 = FUN_1008a80f0(param_1,pbVar8);
        iVar3 = FUN_1008a6ac0(uVar7,&local_40,param_3,pbVar8,1,param_8);
        uVar12 = 0;
        pbVar6 = local_38;
        while (local_38 = pbVar6, iVar3 == -1) {
          uVar12 = uVar12 + 1;
          uVar5 = *(ulong *)(param_4 + 0x18);
          if ((long)uVar5 <= (long)uVar12) goto LAB_1008a64be;
          pbVar8 = pbVar8 + 0x28;
          uVar7 = FUN_1008a80f0(param_1,pbVar8);
          iVar3 = FUN_1008a6ac0(uVar7,&local_40,pbVar6,pbVar8,1,param_8);
          pbVar6 = local_38;
        }
        if (iVar3 < 1) {
          FUN_100887ce0(0xd,0x78,0x3a,"tasn_dec.c",0x152);
          goto LAB_1008a69c4;
        }
        uVar5 = *(ulong *)(param_4 + 0x18);
LAB_1008a64be:
        uVar9 = uVar12 & 0xffffffff;
      }
      if (uVar12 == uVar5) {
        if (param_7 != '\0') {
          FUN_1008a5070(param_1,param_4);
          return 0xffffffff;
        }
        uVar7 = 0x8f;
        uVar11 = 0x15e;
        break;
      }
      FUN_1008a7e90(param_1,uVar9,param_4);
      if ((pcVar4 == (code *)0x0) || (iVar3 = (*pcVar4)(5,param_1,param_4,0), iVar3 != 0)) {
        *param_2 = (long)local_40;
        return 1;
      }
    }
LAB_1008a699c:
    uVar7 = 100;
    uVar11 = 0x1f7;
    break;
  case 3:
    if (param_7 != '\0') {
      local_40 = (byte *)*param_2;
      iVar3 = param_5;
      if (param_5 == -1) {
        iVar3 = *(int *)(param_4 + 8);
      }
      iVar3 = FUN_1008a71c0(0,0,0,0,0,&local_40,param_3,iVar3,uVar13,1,param_8);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      if (iVar3 == 0) {
        uVar7 = 0x3a;
        uVar11 = 0x109;
        break;
      }
    }
    bVar2 = 0;
    pbVar8 = (byte *)0x0;
    if (param_5 != -1) {
      if (local_40 == (byte *)0x0) {
        uVar7 = 0x3a;
        uVar11 = 0x120;
        break;
      }
      pbVar8 = (byte *)*param_2;
      bVar2 = *pbVar8;
      *pbVar8 = *local_40 & 0x20 | (byte)*(undefined4 *)(param_4 + 8);
    }
    lVar16 = (**(code **)(lVar16 + 0x10))(param_1,param_2,local_38);
    if (param_5 != -1) {
      *pbVar8 = bVar2;
    }
    if (lVar16 != 0) {
      return 1;
    }
    uVar7 = 0x3a;
    uVar11 = 0x12f;
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001008a623a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(lVar16 + 0x20))(param_1,param_2,param_3,param_4,param_5);
    return uVar5;
  case 5:
    local_40 = (byte *)*param_2;
    iVar3 = FUN_1008a71c0(0,&local_48,&local_41,0,0,&local_40,param_3,0xffffffff,0,1,param_8);
    if (iVar3 == 0) {
      uVar7 = 0x3a;
      uVar11 = 0xdb;
    }
    else if (local_41 == '\0') {
      uVar12 = (ulong)local_48;
      uVar5 = 0;
      if (uVar12 < 0x1f) {
        uVar5 = *(ulong *)(&DAT_100b59da0 + uVar12 * 8);
      }
      if ((*(ulong *)(param_4 + 8) & uVar5) != 0) {
        uVar13 = FUN_1008a6cb0(param_1,param_2,local_38,param_4,uVar12,0,
                               (ulong)param_3 & 0xffffffff00000000,param_8);
        return (ulong)uVar13;
      }
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      uVar7 = 0x8c;
      uVar11 = 0xec;
    }
    else {
      if (param_7 != '\0') {
        return 0xffffffff;
      }
      uVar7 = 0x8b;
      uVar11 = 0xe4;
    }
  }
LAB_1008a69bc:
  FUN_100887ce0(0xd,0x78,uVar7,"tasn_dec.c",uVar11);
  pbVar8 = (byte *)0x0;
LAB_1008a69c4:
  if ((param_6 & 0x400) == 0) {
    FUN_1008a5070(param_1,param_4);
  }
  if (pbVar8 == (byte *)0x0) {
    FUN_1008890a0(2,"Type=",*(undefined8 *)(param_4 + 0x30));
  }
  else {
    FUN_1008890a0(4,"Field=",*(undefined8 *)(pbVar8 + 0x18),", Type=");
  }
  return 0;
}

