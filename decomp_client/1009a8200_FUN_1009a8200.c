
bool FUN_1009a8200(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int local_24;
  
  lVar2 = FUN_1009983c0();
  lVar2 = *(long *)(lVar2 + 0x30);
  lVar3 = 0;
  if (lVar2 != 0) {
    (*DAT_102310a48)(lVar2);
    lVar3 = lVar2;
  }
  local_24 = 0;
  iVar1 = (*DAT_102310e08)(lVar3,&local_24);
  if (iVar1 < 0) {
    FUN_100df99c0("","TransporterWizardModel",0,
                  "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc","(hHandle, &val)"
                  ,"../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
  }
  iVar1 = local_24;
  if (lVar3 != 0) {
    (*DAT_102310a50)(lVar3);
  }
  return iVar1 == 1;
}

