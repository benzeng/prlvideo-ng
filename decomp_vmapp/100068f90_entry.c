
undefined4 entry(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  __sigaction_u local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  local_1c = 0;
  local_28 = (__sigaction_u)0x1;
  iVar1 = _sigaction(0xf,(sigaction *)&local_28,(sigaction *)0x0);
  if (iVar1 != 0) {
    piVar3 = ___error();
    FUN_1008e3970("","vm",0,"Failed to setup SIGTERM signal handler with error %d",*piVar3);
  }
  FUN_1008ec5f0();
  uVar2 = FUN_10000df60(param_1,param_2,FUN_100067bc0);
  FUN_10008af70();
  FUN_1008e3970("","vm",0,"***** VM process exiting with code %d",uVar2);
  return uVar2;
}

