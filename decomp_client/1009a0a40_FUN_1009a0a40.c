
undefined8 FUN_1009a0a40(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long local_38;
  undefined4 local_2c;
  
  lVar3 = FUN_1009983c0(param_2);
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar4 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar4 = lVar3;
  }
  pcVar1 = DAT_102310ea8;
  local_38 = 0;
  lVar3 = FUN_1009983c0(param_2);
  iVar2 = (*pcVar1)(*(undefined8 *)(lVar3 + 0x28),&local_38);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTAgent_GetSysCfg",
                  "(getPTLogic()->GetAgentHandle(), &hSysCfg.GetHandle())",
                  "Pages/WPDestinationPath.cpp",0xe7,"GenerateVmName");
  }
  local_40 = 0;
  iVar2 = (*DAT_102310eb8)(local_38,&local_40);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","PrlPTASysCfg_GetVmOs",
                  "(hSysCfg, &hVmOsInfo.GetHandle())","Pages/WPDestinationPath.cpp",0xe9,
                  "GenerateVmName");
  }
  local_2c = 0xffff;
  iVar2 = (*DAT_102310fc0)(local_40,&local_2c);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  FUN_100d44a70(param_1,local_2c);
  if (local_40 != 0) {
    (*DAT_102310a50)();
  }
  local_40 = 0;
  if (local_38 != 0) {
    (*DAT_102310a50)();
  }
  local_38 = 0;
  if (lVar4 != 0) {
    (*DAT_102310a50)(lVar4);
  }
  return param_1;
}

