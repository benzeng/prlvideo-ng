
undefined4 FUN_1001e7960(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::stop() is stopping dispatcher...");
  local_30[0] = 120000;
  local_28 = 0;
  uVar1 = FUN_1001e8a30(local_30);
  uVar2 = FUN_100dddcf0(uVar1);
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::stop() has finished with result %s",uVar2)
  ;
  return uVar1;
}

