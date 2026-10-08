
void FUN_10008bfa0(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR__OBJC_CLASS___PDProgress_10226aa60;
  if (param_2 == 0xc) {
    if (param_3 == 10) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar1 = *(uint *)param_4[1];
      iVar2 = *(int *)param_4[2];
      FUN_100087ea0(param_1);
      if ((((uVar1 & 0xfffffff7) == 0x30000001) || (iVar2 == 0x3000000a)) || (iVar2 == 0x3000000f))
      {
        FUN_1000878e0(param_1);
        return;
      }
      break;
    case 1:
    case 2:
    case 4:
    case 8:
    case 9:
      FUN_100087ea0(param_1);
      return;
    case 3:
      FUN_100087ea0(param_1);
      break;
    case 5:
      FUN_10008b0f0(param_1,param_4[1]);
      return;
    case 6:
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      if (*(char *)param_4[1] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010008c174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setProgress__10226a088,0);
        return;
      }
      uVar5 = FUN_1007ef6a0(*(undefined8 *)(param_1 + 0x48));
      UNRECOVERED_JUMPTABLE = PTR__objc_msgSend_1021e1c68;
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (puVar3,PTR_s_progressWithAbstractOperation__10226a0a8,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010008c0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE)(uVar7,PTR_s_setProgress__10226a088,uVar5);
      return;
    case 7:
      FUN_10008a2f0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 10:
      FUN_1000879c0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 0xb:
    case 0xd:
      FUN_100087c70(param_1);
      return;
    case 0xc:
      uVar5 = FUN_1006915d0();
      uVar7 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
      }
      lVar6 = FUN_100691620(uVar5,0xc,uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      if (lVar6 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = QAction::isVisible();
      }
                    /* WARNING: Could not recover jumptable at 0x00010008c193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,PTR_s_setDevPanelAvailable__10226a0d8,uVar4);
      return;
    default:
      goto switchD_10008bfe4_default;
    }
    FUN_100867880(*(undefined8 *)(param_1 + 0x10));
    return;
  }
switchD_10008bfe4_default:
  return;
}

