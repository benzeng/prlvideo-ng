
ulong FUN_100992770(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_18;
  int local_14;
  
  cVar1 = FUN_100990a70(*(undefined8 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    local_18 = 0xffff;
    cVar1 = FUN_100992100(param_1,&local_18);
    if (cVar1 != '\0') {
      local_14 = 1;
      uVar2 = (*DAT_102310d30)(*(undefined8 *)(param_1 + 0x30),&local_14);
      if ((int)uVar2 < 0) {
        uVar2 = FUN_100df99c0("","TransporterWizardModel",0,
                              "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                              "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,
                              "GetVal");
      }
      if ((local_14 != 0) && (uVar3 = (local_18 >> 8) - 9, uVar3 < 8)) {
        return CONCAT71((int7)((ulong)uVar2 >> 8),0xc1 >> ((byte)uVar3 & 0x1f)) & 0xffffffffffffff01
        ;
      }
    }
  }
  return 0;
}

