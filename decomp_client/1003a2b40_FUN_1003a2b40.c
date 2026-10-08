
void FUN_1003a2b40(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = MessageUtils::isMessageHidden(param_2);
  if ((param_3 != 0) && (cVar1 != '\x01')) {
    FUN_1003a2210(param_1,param_3,param_4);
    return;
  }
  return;
}

