
undefined8 * FUN_10044e3f0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x28));
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    uVar2 = FUN_1003b0a30(*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x28));
    FUN_100188480(param_1,uVar2);
  }
  return param_1;
}

