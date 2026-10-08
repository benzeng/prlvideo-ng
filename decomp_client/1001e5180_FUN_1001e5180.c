
undefined4 FUN_1001e5180(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = MacUtils::isAppleHypervisorCompatible();
  uVar2 = 0x80015506;
  if (cVar1 == '\0') {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,"Not compatible with Apple Hypervisor");
  }
  else {
    uVar2 = 0;
  }
  FUN_1001e50a0(param_1,2,uVar2);
  return uVar2;
}

