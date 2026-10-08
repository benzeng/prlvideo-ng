
undefined4 FUN_1001e5120(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = MacUtils::isIntel64BitMachine();
  uVar2 = 0x80015462;
  if (cVar1 == '\0') {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,"Is not Intel 64-bit machine");
  }
  else {
    uVar2 = 0;
  }
  FUN_1001e50a0(param_1,1,uVar2);
  return uVar2;
}

