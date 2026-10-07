
undefined8
FUN_1008a73d0(uint *param_1,byte *param_2,uint param_3,uint param_4,char *param_5,long param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  byte *local_38;
  
  local_38 = param_2;
  if ((*(long *)(param_6 + 0x20) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_6 + 0x20) + 0x28),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001008a741b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  puVar3 = (uint *)0x0;
  if (*(long *)(param_6 + 8) == -4) {
    puVar3 = *(uint **)param_1;
    if (puVar3 == (uint *)0x0) {
      puVar3 = (uint *)FUN_1008a8980();
      if (puVar3 == (uint *)0x0) {
        FUN_1008a89a0(0);
        return 0;
      }
      *(uint **)param_1 = puVar3;
    }
    if (*puVar3 != param_4) {
      FUN_10089b8d0(puVar3,param_4,0);
    }
    puVar7 = param_1;
    param_1 = puVar3 + 2;
  }
  else {
    puVar7 = (uint *)0x0;
  }
  if (0x1b < (int)param_4) {
    if (0x101 < (int)param_4) {
      if ((param_4 != 0x102) && (param_4 != 0x10a)) goto switchD_1008a7498_caseD_4;
      goto switchD_1008a7498_caseD_2;
    }
    if (param_4 == 0x1c) {
      if ((param_3 & 3) == 0) {
switchD_1008a7498_caseD_4:
        puVar5 = *(uint **)param_1;
        if (puVar5 == (uint *)0x0) {
          puVar5 = (uint *)FUN_1008afdf0(param_4);
          if (puVar5 == (uint *)0x0) {
            uVar2 = 0x41;
            uVar6 = 0x3b3;
            goto LAB_1008a76cd;
          }
          *(uint **)param_1 = puVar5;
        }
        else {
          puVar5[1] = param_4;
        }
        if (*param_5 != '\0') {
          if (*(long *)(puVar5 + 2) != 0) {
            FUN_10081e1a0();
          }
          *(byte **)(puVar5 + 2) = local_38;
          *puVar5 = param_3;
          *param_5 = '\0';
          goto LAB_1008a7594;
        }
        iVar1 = FUN_1008afb30(puVar5,local_38,param_3);
        if (iVar1 != 0) {
          return 1;
        }
        FUN_100887ce0(0xd,0xcc,0x41,"tasn_dec.c",0x3c4);
        FUN_1008afd70(puVar5);
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_1008a76d2;
      }
      uVar2 = 0xd7;
      uVar6 = 0x3ac;
    }
    else {
      if ((param_4 != 0x1e) || ((param_3 & 1) == 0)) goto switchD_1008a7498_caseD_4;
      uVar2 = 0xd6;
      uVar6 = 0x3a7;
    }
    goto LAB_1008a76cd;
  }
  switch(param_4) {
  case 1:
    if (param_3 == 1) {
      *param_1 = (uint)*param_2;
      return 1;
    }
    uVar2 = 0x6a;
    uVar6 = 0x37b;
    break;
  case 2:
  case 10:
switchD_1008a7498_caseD_2:
    lVar4 = FUN_10089ad90(param_1,&local_38,(long)(int)param_3);
    if (lVar4 != 0) {
      *(uint *)(*(long *)param_1 + 4) = *(uint *)(*(long *)param_1 + 4) & 0x100 | param_4;
LAB_1008a7594:
      if (param_4 != 5) {
        return 1;
      }
      if (puVar3 == (uint *)0x0) {
        return 1;
      }
      puVar3[2] = 0;
      puVar3[3] = 0;
      return 1;
    }
    goto LAB_1008a76d2;
  case 3:
    lVar4 = FUN_100899a80(param_1,&local_38,(long)(int)param_3);
    goto LAB_1008a7686;
  default:
    goto switchD_1008a7498_caseD_4;
  case 5:
    if (param_3 == 0) {
      param_1[0] = 1;
      param_1[1] = 0;
      goto LAB_1008a7594;
    }
    uVar2 = 0x90;
    uVar6 = 0x373;
    break;
  case 6:
    lVar4 = FUN_100899560(param_1,&local_38,(long)(int)param_3);
LAB_1008a7686:
    if (lVar4 != 0) {
      return 1;
    }
    goto LAB_1008a76d2;
  }
LAB_1008a76cd:
  FUN_100887ce0(0xd,0xcc,uVar2,"tasn_dec.c",uVar6);
LAB_1008a76d2:
  FUN_1008a89a0(puVar3);
  if (puVar7 != (uint *)0x0) {
    puVar7[0] = 0;
    puVar7[1] = 0;
  }
  return 0;
}

