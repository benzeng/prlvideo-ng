
void FUN_100991d40(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  FUN_100df99c0("","TransporterWizardModel",0,"Client notification, type = %d, error = 0x%x",param_2
                ,param_3);
  uVar2 = FUN_100990b40(*(undefined8 *)(param_1 + 0x10));
  plVar3 = (long *)FUN_1009980c0(uVar2);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0xd0))(plVar3,param_2,param_3);
  }
  if (param_2 < 0x12) {
    switch(param_2) {
    case 1:
      bVar5 = param_3 == 0x8000000;
      break;
    case 2:
      bVar5 = false;
      break;
    case 3:
      FUN_1009bec20(param_1,param_3);
      return;
    default:
      goto switchD_100991dc1_caseD_4;
    case 5:
      if (param_3 != 0x8000000) goto LAB_100991f6b;
      iVar1 = (*DAT_102310d20)(*(undefined8 *)(param_1 + 0x30));
      if (iVar1 < 0) {
        FUN_100df99c0("","TransporterWizardModel",0,
                      "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",
                      "PrlPTAMigration_CaptureActiveOsAndAllSystemLayouts","(m_hMigration)",
                      "TransporterWizardLogic.cpp",0x117,"onClientNotification");
      }
      iVar1 = (*DAT_102310c68)(*(undefined8 *)(param_1 + 0x30));
      if (-1 < iVar1) {
        return;
      }
      uVar6 = 0x119;
      pcVar4 = "PrlPTAMigration_CollectDocItemsTree";
      goto LAB_100991f47;
    }
    FUN_1009bebc0(param_1,bVar5,param_3);
    return;
  }
  switch(param_2) {
  case 0x12:
    if (param_3 == 0x8000000) {
      param_3 = 0x8000000;
    }
LAB_100991f6b:
    FUN_1009bec80(param_1,param_3);
    return;
  case 0x13:
    if (param_3 != 0x8000000) goto LAB_100991f6b;
    break;
  case 0x14:
    FUN_1009bed40(param_1,param_3);
    return;
  default:
    goto switchD_100991dc1_caseD_4;
  case 0x18:
    FUN_1009bece0(param_1,param_3);
    return;
  }
  iVar1 = (*DAT_102310e58)(*(undefined8 *)(param_1 + 0x30));
  if (-1 < iVar1) {
    return;
  }
  uVar6 = 0x123;
  pcVar4 = "PrlPTAMigration_CollectUserInfo";
LAB_100991f47:
  FUN_100df99c0("","TransporterWizardModel",0,
                "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]",pcVar4,"(m_hMigration)",
                "TransporterWizardLogic.cpp",uVar6,"onClientNotification");
switchD_100991dc1_caseD_4:
  return;
}

