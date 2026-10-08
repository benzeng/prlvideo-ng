
undefined4 FUN_1001e51e0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = MacUtils::isSafeBoot();
  uVar2 = 0x80015433;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,"Safe Boot mode detected");
  }
  FUN_1001e50a0(param_1,3,uVar2);
  return uVar2;
}

