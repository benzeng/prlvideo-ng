
undefined4 FUN_1001e78d0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  cVar1 = FUN_100d80630(1);
  if (cVar1 == '\0') {
    FUN_1001e79e0();
    uVar2 = 0;
  }
  else {
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::stop() is stopping dispatcher...");
    local_30[0] = 120000;
    local_28 = 0;
    uVar2 = FUN_1001e8a30(local_30);
    uVar3 = FUN_100dddcf0(uVar2);
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::stop() has finished with result %s",
                  uVar3);
  }
  return uVar2;
}

