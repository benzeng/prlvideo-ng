
undefined8 FUN_100992020(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_18;
  int local_14;
  
  cVar1 = FUN_100990a70(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    local_18 = 0xffff;
    cVar1 = FUN_100992100(param_1,&local_18);
    if (cVar1 == '\0') {
      uVar4 = 0;
    }
    else {
      lVar3 = FUN_100990b00(*(undefined8 *)(param_1 + 0x10));
      if (*(int *)(lVar3 + 0x24) < 0) {
        local_14 = 1;
        iVar2 = (*DAT_102310d30)(*(undefined8 *)(param_1 + 0x30),&local_14);
        if (iVar2 < 0) {
          FUN_100df99c0("","TransporterWizardModel",0,
                        "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                        "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
        }
        if (local_14 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = CVmProfileHelper::are_profiles_supported(local_18);
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

