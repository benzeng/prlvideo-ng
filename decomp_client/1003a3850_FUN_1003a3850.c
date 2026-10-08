
undefined8 * FUN_1003a3850(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1003b0a30(*(long *)(param_2 + 0x40) + 0x20);
  if (lVar1 == 0) {
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,"(!)Error: Vm instance is null.");
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    uVar2 = FUN_1003b0a30(*(long *)(param_2 + 0x40) + 0x20);
    FUN_100188480(param_1,uVar2);
  }
  return param_1;
}

