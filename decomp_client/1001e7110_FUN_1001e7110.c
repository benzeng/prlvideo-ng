
uint FUN_1001e7110(void)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_28 [2];
  long local_20;
  
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::restart() is stopping dispacther...");
  local_28[0] = 120000;
  local_20 = 0;
  uVar1 = FUN_1001e8e10(local_28);
  if ((-1 < (int)uVar1) || (uVar1 == 0x80000404)) {
    uVar1 = FUN_1001e8f70(local_28);
    if ((-1 < (int)uVar1) || (uVar1 == 0x80000404)) {
      uVar1 = FUN_1001e9070();
      uVar1 = (int)uVar1 >> 0x1f & uVar1;
    }
  }
  if (local_20 != 0) {
    _PrlHandle_Free();
  }
  pcVar3 = "";
  if ((int)uVar1 < 0) {
    pcVar3 = "NOT";
  }
  uVar2 = FUN_100dddcf0(uVar1);
  FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,
                "Direct::restart() has%s stopped dispacther with result %s",pcVar3,uVar2);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_1001e7240();
    uVar2 = FUN_100dddcf0(uVar1);
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Direct::restart() has finished with result %s",
                  uVar2);
  }
  return uVar1;
}

