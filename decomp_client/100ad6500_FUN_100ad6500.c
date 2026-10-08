
void FUN_100ad6500(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int local_28;
  int iStack_24;
  undefined8 local_20;
  
  iVar1 = *param_3;
  if (iVar1 < 0xb) {
    switch(iVar1) {
    case 1:
      if ((param_3[0xb] != 0) && (cVar2 = FUN_100acd8f0(param_1[2]), cVar2 != '\0')) {
        uVar3 = FUN_100319390(param_1[4]);
        FUN_100192d10(uVar3,0,0,0);
      }
      FUN_100ada5d0(param_1 + 0x138,param_3[10],param_3[0xb],param_3[0xc],param_3[0xd],param_3[0xe],
                    param_3[0xf],param_3[0x10],param_3[0x11],param_3[8],param_3[0x12]);
      break;
    case 2:
      _PrlDevKeyboard_SendKeyEventEx(param_1[0x1e],param_3[0xb],param_3[10]);
      return;
    case 3:
      if (param_3[10] == 4) {
        FUN_100addd40(param_1 + 0x124);
        if (0xf < (int)param_1[0x15d]) {
          FUN_100df99c0("CHRCLIENT","ChrToolClient",0,"*** Z-order queue short circuited");
          return;
        }
        *(undefined1 *)(param_1 + 0x12f) = 0;
        FUN_100ad1c30(param_1);
        *(int *)(param_1 + 0x15d) = (int)param_1[0x15d] + 1;
      }
      else if (param_3[10] == 3) {
        FUN_100add9c0(param_1 + 0x124,param_3[1]);
        return;
      }
      break;
    default:
      goto switchD_100ad6539_caseD_4;
    case 5:
                    /* WARNING: Could not recover jumptable at 0x000100ad670f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1,param_3[8],param_3[10]);
      return;
    }
  }
  else {
    if (iVar1 < 0x13) {
      if (iVar1 == 0xb) {
        _local_28 = CONCAT44(param_3[8],param_3[10]);
        local_20 = *(undefined8 *)(param_3 + 0xb);
        FUN_100acb230(param_1[2],3,&local_28,0x10);
        return;
      }
      if (iVar1 == 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000100ad664f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x98))
                  ((double)param_3[0xb] / DAT_101cd7830,(double)param_3[0xc] / DAT_101cd7830,param_1
                   ,param_3[10]);
        return;
      }
    }
    else {
      if (iVar1 == 0x13) {
        FUN_100ad5540(param_1,param_3 + 0x14,param_3[2] + -0x50);
        return;
      }
      if (iVar1 == 0x1a) {
        FUN_100ad6780(param_1,param_3[10]);
        return;
      }
    }
switchD_100ad6539_caseD_4:
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                    "CCoherenceWndManager::ProcessStubEvents - unknown command %d");
      return;
    }
  }
  return;
}

