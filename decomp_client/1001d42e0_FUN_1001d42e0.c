
undefined8 FUN_1001d42e0(undefined8 param_1,bool param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001d50a0();
  cVar1 = FUN_1001d5140(uVar2,0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Set application visibility to %d",param_2);
    uVar2 = MacUtils::setApplicationVisibility(param_2);
  }
  return uVar2;
}

