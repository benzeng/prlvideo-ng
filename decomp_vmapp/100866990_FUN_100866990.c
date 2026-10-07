
undefined8 FUN_100866990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = 0;
  uVar3 = 0;
  iVar1 = FUN_1008a0450(0,&local_20,&local_30,&local_40,param_2);
  if (iVar1 != 0) {
    uVar3 = 0;
    FUN_10089f9e0(0,&local_2c,&local_28,local_40);
    local_38 = FUN_100867390(local_2c,local_28);
    if (local_38 == 0) {
      FUN_100887ce0(0x10,0xd7,0x10,"ec_ameth.c",0xc3);
    }
    else {
      lVar2 = FUN_100863c40(&local_38,&local_20,(long)local_30);
      if (lVar2 == 0) {
        FUN_100887ce0(0x10,0xd7,0x8e,"ec_ameth.c",0xc9);
        uVar3 = 0;
        if (local_38 != 0) {
          FUN_100863f80();
        }
      }
      else {
        FUN_100892130(param_1,0x198,local_38);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

