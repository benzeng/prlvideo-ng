
bool FUN_10099f150(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  uint local_28;
  int local_24;
  
  lVar3 = FUN_1009983c0();
  lVar3 = *(long *)(lVar3 + 0x30);
  lVar6 = 0;
  if (lVar3 != 0) {
    (*DAT_102310a48)(lVar3);
    lVar6 = lVar3;
  }
  local_24 = 1;
  iVar2 = (*DAT_102310c00)(lVar6,&local_24);
  if (iVar2 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  if (local_24 == 0) {
    local_28 = 0xffff;
    uVar4 = FUN_1009983c0(param_1);
    cVar1 = FUN_100992100(uVar4,&local_28);
    if (cVar1 == '\0') {
      bVar5 = false;
    }
    else {
      bVar5 = local_28 == 0x8ff || local_28 - 0x801 < 0x10;
    }
  }
  else {
    bVar5 = false;
  }
  if (lVar6 != 0) {
    (*DAT_102310a50)(lVar6);
  }
  return bVar5;
}

