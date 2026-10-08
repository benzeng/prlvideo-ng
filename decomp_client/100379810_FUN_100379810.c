
undefined8 * FUN_100379810(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
  if (((lVar1 == 0) || (*(int *)(lVar1 + 4) == 0)) ||
     (*(long *)(*(long *)(param_2 + 0x38) + 0x20) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    uVar2 = FUN_100323dd0();
    FUN_1001884b0(param_1,uVar2);
  }
  return param_1;
}

