
void FUN_100302c80(CMessageInfo *param_1,bool param_2,char param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  
  uVar3 = FUN_1001d50a0();
  uVar3 = FUN_1001d50d0(uVar3);
  FUN_1001e1c00(uVar3);
  if (param_3 == '\0') {
    if (DAT_102310928 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_1001d4a60(pvVar4);
      DAT_102273638 = 1;
      DAT_102310928 = pvVar4;
    }
    uVar5 = FUN_1001d4b90(DAT_102310928);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)CMessageDataProvider::instance();
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      puVar7 = (undefined4 *)CMessageInfo::data();
      (*pcVar1)(plVar6,*puVar7);
    }
  }
  CMessageProcessor::preprocessMsgLogic(param_1,param_2);
  plVar6 = (long *)CMessageDataProvider::instance();
  pcVar1 = *(code **)(*plVar6 + 0xb8);
  puVar7 = (undefined4 *)CMessageInfo::data();
  cVar2 = (*pcVar1)(plVar6,*puVar7);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001d50a0();
    uVar3 = FUN_1001d50d0(uVar3);
    FUN_1001e1740(uVar3,2);
    return;
  }
  return;
}

