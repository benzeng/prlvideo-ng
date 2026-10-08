
undefined8 FUN_100caa200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_40 [2];
  undefined8 local_30;
  
  if (DAT_102318458 == 0) {
    DAT_102318458 = FUN_100cab020();
  }
  (**(code **)(DAT_102318458 + 0x10))(local_40);
  local_30 = param_1;
  iVar1 = (**(code **)(local_40[0] + 0x28))(local_40,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_30;
  }
  return uVar2;
}

