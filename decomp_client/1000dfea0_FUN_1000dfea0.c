
undefined8 FUN_1000dfea0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  
  uVar2 = FUN_1000bd0c0();
  cVar1 = FUN_1000bd100(param_1,uVar2);
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = FUN_100152280();
    lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
    if (lVar4 == 0) {
      pcVar5 = "Error: Vm does not exist";
    }
    else {
      uVar3 = FUN_10018c280(lVar4);
      lVar4 = FUN_10031a440(uVar3,1);
      if (lVar4 != 0) {
        return 0;
      }
      pcVar5 = "Error: Vm is not running, failed to run it";
    }
    FUN_100df99c0("SGAC","prl_client_app",0,pcVar5);
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

