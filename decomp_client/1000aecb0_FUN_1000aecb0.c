
bool FUN_1000aecb0(long param_1,undefined8 param_2)

{
  ulong in_RAX;
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",4,"_onAfterConsoleCreated");
  }
  uStack_28 = uStack_28 & 0xffffffffffffff;
  plVar1 = operator_new(0x48);
  FUN_1000b7660(plVar1,param_2,param_1,(long)&uStack_28 + 7);
  bVar3 = uStack_28._7_1_ == '\0';
  if (bVar3) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  else {
    puVar2 = (undefined8 *)FUN_1000b4840(param_1 + 0x10,param_2);
    *puVar2 = plVar1;
  }
  return !bVar3;
}

