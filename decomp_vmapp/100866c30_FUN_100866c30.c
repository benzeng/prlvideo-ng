
undefined8 FUN_100866c30(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  long local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_48 = 0;
  iVar1 = FUN_1008b1d10(0,&local_30,&local_40,&local_50,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10089f9e0(0,&local_3c,&local_38,local_50);
  local_48 = FUN_100867390(local_3c,local_38);
  if (local_48 != 0) {
    lVar2 = FUN_100863430(&local_48,&local_30,(long)local_40);
    if (lVar2 == 0) {
      uVar3 = 0x8e;
      uVar4 = 0xf7;
      goto LAB_100866e33;
    }
    lVar2 = FUN_100864970(local_48);
    if (lVar2 != 0) {
LAB_100866d50:
      FUN_100892130(param_1,0x198,local_48);
      return 1;
    }
    uVar3 = FUN_1008648d0(local_48);
    lVar2 = FUN_10085b6e0(uVar3);
    if (lVar2 == 0) {
      uVar3 = 0x107;
    }
    else {
      uVar4 = FUN_10085b9c0(uVar3);
      iVar1 = FUN_10085b7b0(lVar2,uVar4);
      if (iVar1 == 0) {
        FUN_10085b080(lVar2);
        uVar3 = 0x10c;
      }
      else {
        uVar4 = FUN_100864920(local_48);
        iVar1 = FUN_10085c790(uVar3,lVar2,uVar4,0,0,0);
        if (iVar1 == 0) {
          FUN_10085b080(lVar2);
          uVar3 = 0x112;
        }
        else {
          iVar1 = FUN_100864890(local_48,lVar2);
          FUN_10085b080(lVar2);
          if (iVar1 != 0) goto LAB_100866d50;
          uVar3 = 0x117;
        }
      }
    }
    FUN_100887ce0(0x10,0xd5,0x10,"ec_ameth.c",uVar3);
  }
  uVar3 = 0x10;
  uVar4 = 0x121;
LAB_100866e33:
  FUN_100887ce0(0x10,0xd5,uVar3,"ec_ameth.c",uVar4);
  if (local_48 != 0) {
    FUN_100863f80();
  }
  return 0;
}

