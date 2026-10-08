
undefined8 FUN_100caa270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40 [2];
  undefined8 local_30;
  
  lVar2 = FUN_100c59ef0(param_2,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0xe,0x67,7,"conf_lib.c",0x7a);
    uVar3 = 0;
  }
  else {
    if (DAT_102318458 == 0) {
      DAT_102318458 = FUN_100cab020();
    }
    (**(code **)(DAT_102318458 + 0x10))(local_40);
    local_30 = param_1;
    iVar1 = (**(code **)(local_40[0] + 0x28))(local_40,lVar2,param_3);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = local_30;
    }
    FUN_100c586e0(lVar2);
  }
  return uVar3;
}

