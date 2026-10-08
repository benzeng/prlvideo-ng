
undefined8 FUN_1007ebbd0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_100152a20(uVar1,param_1 + 0x18);
  uVar1 = 0;
  if (lVar2 == 0) {
    uVar1 = FUN_100152280();
    lVar2 = FUN_1001548f0(uVar1,param_1 + 0x18);
    uVar1 = 1;
    if (lVar2 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Invalid antivirus target");
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

