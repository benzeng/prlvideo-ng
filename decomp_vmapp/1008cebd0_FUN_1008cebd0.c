
undefined8 FUN_1008cebd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40 [2];
  undefined8 local_30;
  
  lVar2 = FUN_10087ebd0(param_2,"rb");
  if (lVar2 == 0) {
    FUN_100887ce0(0xe,100,2,"conf_lib.c",0x69);
    uVar3 = 0;
  }
  else {
    if (DAT_1011c2a18 == 0) {
      DAT_1011c2a18 = FUN_1008cfaa0();
    }
    (**(code **)(DAT_1011c2a18 + 0x10))(local_40);
    local_30 = param_1;
    iVar1 = (**(code **)(local_40[0] + 0x28))(local_40,lVar2,param_3);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = local_30;
    }
    FUN_10087d4e0(lVar2);
  }
  return uVar3;
}

