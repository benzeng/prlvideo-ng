
undefined8 FUN_1008cec80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_40 [2];
  undefined8 local_30;
  
  if (DAT_1011c2a18 == 0) {
    DAT_1011c2a18 = FUN_1008cfaa0();
  }
  (**(code **)(DAT_1011c2a18 + 0x10))(local_40);
  local_30 = param_1;
  iVar1 = (**(code **)(local_40[0] + 0x28))(local_40,param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_30;
  }
  return uVar2;
}

