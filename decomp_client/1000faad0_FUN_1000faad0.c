
void FUN_1000faad0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_2c;
  
  local_2c = param_3;
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_1006e1350();
  plVar3 = (long *)FUN_1006e7590(uVar1,param_2,lVar2);
  if (plVar3 != (long *)0x0) {
    FUN_1000fbac0(param_1,plVar3,&local_2c,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001000fab44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x88))(plVar3);
    return;
  }
  FUN_100df99c0("STUBMENU","prl_client_app",0,"Error: failed to get CIfaceMenu");
  return;
}

