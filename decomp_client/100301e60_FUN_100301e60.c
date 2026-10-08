
void FUN_100301e60(CMessageInfo *param_1,bool param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_3 == '\0') && (lVar1 = CMessageInfo::data(), *(char *)(lVar1 + 0x30) != '\0')) {
    uVar2 = FUN_100152280();
    lVar1 = CMessageInfo::data();
    FUN_1001548f0(uVar2,lVar1 + 8);
  }
  CMessageProcessor::showMessage(param_1,param_2);
  return;
}

