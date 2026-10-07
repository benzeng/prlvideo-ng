
undefined1
FUN_1000eda70(long param_1,int *param_2,undefined8 param_3,undefined4 *param_4,long param_5,
             ulong param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 in_stack_ffffffffffffff88;
  void *pvVar10;
  undefined4 uVar11;
  uint local_3c;
  void *local_38;
  
  uVar11 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  local_38 = (void *)0x0;
  local_3c = 0xffffffff;
  uVar1 = param_4[3];
  iVar2 = *param_2;
  if (0x13 < iVar2 - 2U) {
switchD_1000edac3_caseD_9:
    FUN_1008e3970("","vm",0," unexpected var type=0x%x, item=%s[%u], line=%u",iVar2,
                  *(undefined8 *)(param_2 + 0xb),CONCAT44(uVar11,param_7),0x6d0);
    return 0;
  }
  pvVar10 = (void *)(param_5 + (ulong)uVar1);
  switch(iVar2) {
  case 4:
  case 5:
    local_38 = (void *)(param_1 + (ulong)(uint)param_2[4]);
    goto LAB_1000edb76;
  case 6:
    local_38 = (void *)(param_1 + (ulong)(uint)param_2[4]);
    uVar5 = FUN_1000ed8e0(local_38,param_2,pvVar10,param_4,param_5,param_6,CONCAT44(uVar11,param_8))
    ;
    return uVar5;
  case 7:
    local_38 = *(void **)(param_1 + (ulong)(uint)param_2[4]);
LAB_1000edb76:
    uVar9 = param_2[3];
    local_3c = uVar9;
    break;
  case 8:
    uVar5 = FUN_1000ed0b0(param_2,param_4,param_5,param_6 & 0xffffffff,param_8);
    return uVar5;
  default:
    goto switchD_1000edac3_caseD_9;
  case 0x11:
    if ((uint)DAT_1011c37a0 != 0) {
      FUN_1008e3970("","vm",0,"Item %s ignored",*(undefined8 *)(param_2 + 0xb));
    }
    uVar9 = 4;
    if (param_2[3] != 0) {
      uVar9 = param_2[3];
    }
    local_38 = (void *)0x0;
    local_3c = uVar9;
    break;
  case 0x12:
  case 0x14:
    if (*(code **)(param_2 + 1) != (code *)0x0) {
      uVar9 = param_2[3];
      iVar3 = param_7;
      local_3c = uVar9;
      if (iVar2 == 0x12) {
LAB_1000edcb3:
        local_38 = (void *)(**(code **)(param_2 + 1))(iVar3);
      }
      else {
        if (iVar2 == 0x14) {
          iVar3 = param_2[4];
          goto LAB_1000edcb3;
        }
        local_38 = (void *)0x0;
      }
      if ((local_38 == (void *)0x0) && (4 < uVar9)) {
        local_3c = 4;
        uVar9 = 4;
      }
      break;
    }
    uVar8 = *(undefined8 *)(param_2 + 0xb);
    pvVar10 = (void *)CONCAT44(uVar11,0x6b2);
    pcVar6 = "Invalid DynStructField item %s[%u], pGetPtr is NULL, line=%u";
    goto LAB_1000edd52;
  case 0x13:
    if (param_7 != 0) {
      FUN_1008e3970("","vm",0,"ArraySingleField should be skipped at above level i=0x%x, line=%u",
                    param_7,0x695);
      return 0;
    }
  case 2:
  case 3:
    uVar9 = param_2[3];
    local_38 = *(void **)(param_2 + 1);
    local_3c = uVar9;
    break;
  case 0x15:
    if (*(code **)(param_2 + 1) == (code *)0x0) {
      uVar8 = *(undefined8 *)(param_2 + 0xb);
      pvVar10 = (void *)CONCAT44(uVar11,0x6a2);
      pcVar6 = "Invalid DynData for item %s[%u], pGetPtr is NULL, line=%u";
      goto LAB_1000edd52;
    }
    (**(code **)(param_2 + 1))(param_1,&local_38,&local_3c);
    uVar9 = local_3c;
  }
  pvVar4 = local_38;
  uVar7 = (ulong)uVar9;
  if ((param_6 & 0xffffffff) < uVar1 + uVar7) {
    uVar8 = *(undefined8 *)(param_2 + 0xb);
    pcVar6 = "Invalid data length Item %s[%u] (%p,0x%x,%p,0x%x), line=%u";
LAB_1000edd52:
    uVar5 = 0;
    FUN_1008e3970("","vm",0,pcVar6,uVar8,param_7,pvVar10);
  }
  else {
    param_4[2] = uVar9;
    *param_4 = param_8;
    param_4[1] = 0x8a9ffffc;
    if (local_38 == (void *)0x0) {
      ___bzero(pvVar10,uVar7);
    }
    else {
      _memcpy(pvVar10,local_38,uVar7);
    }
    uVar5 = 1;
    if (((uint)DAT_1011c37a0 != 0) &&
       (FUN_1008e3970("","vm",0,
                      "Data saving: #=0x%08x, fid=0x%08x %u bytes copied to %p from %p \'%s[%u]\'",
                      param_8,*param_4,CONCAT44(uVar11,param_4[2]),pvVar10,pvVar4,
                      *(undefined8 *)(param_2 + 0xb),param_7), 1 < (uint)DAT_1011c37a0)) {
      FUN_1000eae00(pvVar10,local_3c);
    }
  }
  return uVar5;
}

