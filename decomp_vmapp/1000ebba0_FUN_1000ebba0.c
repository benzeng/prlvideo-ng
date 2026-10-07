
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1000ebba0(long param_1,int *param_2,undefined8 param_3,uint *param_4,long param_5,uint param_6,
             int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  undefined8 uVar11;
  uint local_3c;
  void *local_38;
  
  local_38 = (void *)0x0;
  local_3c = 0xffffffff;
  uVar6 = (ulong)param_4[2];
  pcVar8 = (char *)(param_5 + (ulong)param_4[3]);
  if ((ulong)param_6 < uVar6 + param_4[3]) {
    uVar11 = *(undefined8 *)(param_2 + 0xb);
    pcVar7 = "Ptr is out of range. Item %s[%u] (%p,0x%x,%p,0x%x), line=%u";
    uVar4 = 0;
    goto LAB_1000ebcf8;
  }
  iVar1 = *param_2;
  if (0x14 < iVar1 - 1U) {
switchD_1000ebc4c_caseD_9:
    uVar11 = *(undefined8 *)(param_2 + 0xb);
    if (PTR_s_SubSysStart_10110cbf8 == (undefined *)0x0) {
      pcVar8 = "Unknown";
    }
    else {
      piVar10 = &DAT_10110cbf0;
      pcVar8 = PTR_s_SubSysStart_10110cbf8;
      do {
        if (*piVar10 == iVar1) goto LAB_1000ebcc9;
        pcVar8 = *(char **)(piVar10 + 6);
        piVar10 = piVar10 + 4;
      } while (pcVar8 != (char *)0x0);
      pcVar8 = "Unknown";
    }
LAB_1000ebcc9:
    pcVar7 = "Item %s[%u]. Unexpected var type %s=0x%x, line=%u";
    goto LAB_1000ebcee;
  }
  pcVar3 = *(code **)(param_2 + 0xd);
  switch(iVar1) {
  default:
    if (PTR_s_SubSysStart_10110cbf8 == (undefined *)0x0) {
      pcVar8 = "Unknown";
    }
    else {
      piVar10 = &DAT_10110cbf0;
      pcVar8 = PTR_s_SubSysStart_10110cbf8;
      do {
        if (*piVar10 == iVar1) goto LAB_1000ebd3e;
        pcVar8 = *(char **)(piVar10 + 6);
        piVar10 = piVar10 + 4;
      } while (pcVar8 != (char *)0x0);
      pcVar8 = "Unknown";
    }
LAB_1000ebd3e:
    FUN_1008e3970("","vm",0,"Item %s[%u]. Ordinary data detected and skipped. Type %s=0x%x. line=%u"
                  ,*(undefined8 *)(param_2 + 0xb),param_7,pcVar8,iVar1,0x2f8);
    uVar4 = 1;
    break;
  case 2:
    goto switchD_1000ebc4c_caseD_2;
  case 3:
    local_38 = *(void **)(param_2 + 1);
    goto LAB_1000ebdb7;
  case 4:
    local_38 = (void *)(param_1 + (ulong)(uint)param_2[4]);
    uVar9 = param_2[3];
    local_3c = uVar9;
    if (*(code **)(param_2 + 9) != (code *)0x0) {
      uVar4 = (**(code **)(param_2 + 9))(local_38,pcVar8,param_2,param_4);
      return uVar4;
    }
    goto LAB_1000ebf99;
  case 5:
    local_38 = (void *)(param_1 + (ulong)(uint)param_2[4]);
LAB_1000ebdb7:
    uVar4 = FUN_1000eb500(local_38,pcVar8,param_2,param_4);
    break;
  case 6:
    local_38 = (void *)(param_1 + (ulong)(uint)param_2[4]);
    uVar4 = FUN_1000eba00(local_38,param_2,pcVar8);
    break;
  case 7:
    local_38 = *(void **)(param_1 + (ulong)(uint)param_2[4]);
    uVar9 = param_2[3];
    local_3c = uVar9;
    goto LAB_1000ebf99;
  case 8:
    uVar4 = FUN_1000eb6b0(param_2,param_4,param_5,param_6);
    break;
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
    goto switchD_1000ebc4c_caseD_9;
  case 0x11:
switchD_1000ebc4c_caseD_11:
    uVar4 = 1;
    if ((uint)DAT_1011c37a0 != 0) {
      if (PTR_s_SubSysStart_10110cbf8 == (undefined *)0x0) {
        pcVar8 = "Unknown";
      }
      else {
        piVar10 = &DAT_10110cbf0;
        pcVar8 = PTR_s_SubSysStart_10110cbf8;
        do {
          if (*piVar10 == iVar1) goto LAB_1000ebf31;
          pcVar8 = *(char **)(piVar10 + 6);
          piVar10 = piVar10 + 4;
        } while (pcVar8 != (char *)0x0);
        pcVar8 = "Unknown";
      }
LAB_1000ebf31:
      FUN_1008e3970("","vm",0,"%s is skipped %s[%u], FileLen=0x%x id=%u, i=%u",pcVar8,
                    *(undefined8 *)(param_2 + 0xb),param_7,param_4[2],*param_4,param_8);
    }
    break;
  case 0x12:
  case 0x14:
    if (*(code **)(param_2 + 1) != (code *)0x0) {
      uVar9 = param_2[3];
      iVar2 = param_7;
      local_3c = uVar9;
      if (iVar1 == 0x12) {
LAB_1000ebf13:
        local_38 = (void *)(**(code **)(param_2 + 1))(iVar2);
        if (local_38 != (void *)0x0) goto LAB_1000ebf99;
      }
      else {
        if (iVar1 == 0x14) {
          iVar2 = param_2[4];
          goto LAB_1000ebf13;
        }
        local_38 = (void *)0x0;
      }
      uVar4 = 1;
      if ((uint)DAT_1011c37a0 == 0) {
        return 1;
      }
      uVar11 = *(undefined8 *)(param_2 + 0xb);
      pcVar8 = (char *)0x2e6;
      pcVar7 = "DynStructField is skipped item %s[%u], line=%u";
      goto LAB_1000ebcf8;
    }
    uVar11 = *(undefined8 *)(param_2 + 0xb);
    pcVar8 = (char *)0x2d7;
    pcVar7 = "Invalid DynStructField for item %s[%u], pGetPtr is NULL, line=%u";
    goto LAB_1000ebcee;
  case 0x13:
    if (param_7 != 0) goto switchD_1000ebc4c_caseD_11;
    if (*(code **)(param_2 + 9) != (code *)0x0) {
      uVar4 = (**(code **)(param_2 + 9))(param_2,pcVar8,uVar6);
      return uVar4;
    }
    goto switchD_1000ebc4c_caseD_2;
  case 0x15:
    if (*(code **)(param_2 + 9) == (code *)0x0) {
      uVar11 = *(undefined8 *)(param_2 + 0xb);
      pcVar8 = (char *)0x2bf;
      pcVar7 = "Invalid DynData for item %s[%u], pGetPtr is NULL, line=%u";
      goto LAB_1000ebcee;
    }
    (**(code **)(param_2 + 9))(param_1,&local_38,uVar6,&local_3c);
    if ((local_38 == (void *)0x0) || (uVar9 = local_3c, local_3c == 0)) {
      uVar4 = 1;
      if ((uint)DAT_1011c37a0 == 0) {
        return 1;
      }
      uVar11 = *(undefined8 *)(param_2 + 0xb);
      pcVar8 = (char *)0x2c8;
      pcVar7 = "DynData is skipped item %s[%u], line=%u";
      goto LAB_1000ebcf8;
    }
LAB_1000ebf99:
    uVar5 = param_4[2];
    if (uVar9 < uVar5) {
      if (((DAT_1011c3790 == 0 && param_7 == 0) && _DAT_1011c3794 == 0) &&
         (DAT_1011c3798 == local_38)) {
        if ((uVar9 == 4) && (uVar5 == 8)) {
          DAT_1011c3790 = 1;
          FUN_1008e3970("","vm",0,"x64 -> x32 load detected");
        }
        else if ((uVar9 == 8) && ((uVar5 & 0x7fffffff) == 4)) {
          _DAT_1011c3794 = 1;
          FUN_1008e3970("","vm",0,"x32 -> x64 load detected");
        }
      }
      if (DAT_1011c3790 != 0) {
        uVar5 = param_4[2];
        uVar9 = local_3c;
        goto LAB_1000ec0ba;
      }
      uVar11 = *(undefined8 *)(param_2 + 0xb);
      pcVar8 = (char *)(ulong)param_4[2];
      pcVar7 = "Data overhead. Item %s[%u] 0x%x, 0x%x, line=%u";
    }
    else {
LAB_1000ec0ba:
      if (uVar5 < uVar9) {
        uVar9 = uVar5;
      }
      if ((uint)DAT_1011c37a0 != 0) {
        FUN_1008e3970("","vm",0,
                      "DATA loading: #=0x%08x, fid=0x%08x %3u(%3u) bytes copied to %p: \'%s[%u]\'",
                      param_8,*param_4,uVar9,uVar5,local_38,*(undefined8 *)(param_2 + 0xb),param_7);
      }
      if ((*param_4 & 0xffffff) == param_8) {
        _memcpy(local_38,pcVar8,(ulong)uVar9);
        if (uVar9 < local_3c) {
          ___bzero((ulong)uVar9 + (long)local_38);
        }
        if (1 < (uint)DAT_1011c37a0) {
          FUN_1000eae00(local_38,local_3c);
        }
        if (pcVar3 == (code *)0x0) {
          return 1;
        }
        if ((uint)DAT_1011c37a0 != 0) {
          FUN_1008e3970("","vm",0,
                        "DATA after load calling: #=0x%08x, fid=0x%08x %3u(%3u) bytes copied to %p: \'%s[%u]\'"
                        ,param_8,*param_4,uVar9,param_4[2],local_38,*(undefined8 *)(param_2 + 0xb),
                        param_7);
        }
        (*pcVar3)(param_7,local_38,local_3c);
        return 1;
      }
      uVar11 = *(undefined8 *)(param_2 + 0xb);
      pcVar8 = (char *)(ulong)param_8;
      pcVar7 = "Data ID mistiming. Item %s[%u] 0x%x, 0x%x, line=%u";
    }
LAB_1000ebcee:
    uVar4 = 0;
LAB_1000ebcf8:
    FUN_1008e3970("","vm",0,pcVar7,uVar11,param_7,pcVar8);
  }
  return uVar4;
switchD_1000ebc4c_caseD_2:
  uVar9 = param_2[3];
  local_38 = *(void **)(param_2 + 1);
  local_3c = uVar9;
  goto LAB_1000ebf99;
}

