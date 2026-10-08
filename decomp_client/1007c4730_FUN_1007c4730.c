
void FUN_1007c4730(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_10018f120(param_2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get device wrap instance.");
    return;
  }
  lVar1 = FUN_100146b20(lVar1);
  if (lVar1 != 0) {
    FUN_1007bb7c0(param_1,lVar1);
    return;
  }
  return;
}

