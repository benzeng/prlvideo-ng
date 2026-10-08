
void FUN_1007bebc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_1007bf8a0(param_1,1);
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001547d0(uVar1,param_1 + 0x30);
  if (lVar2 != 0) {
    lVar2 = FUN_10015a340(lVar2);
    FUN_1007c2220(param_1,*(undefined8 *)(lVar2 + 0x140),param_2);
    FUN_1007c2b80(param_1);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
  return;
}

