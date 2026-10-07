
undefined4 FUN_1008a01c0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_30;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_100891f40();
    if (lVar3 == 0) {
      FUN_100887ce0(0xd,0xa1,0x41,"x_pubkey.c",0x126);
    }
    else {
      FUN_100892240(lVar3,param_1);
      local_30 = 0;
      iVar1 = FUN_10089fc10(&local_30,lVar3);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_1008a52d0(local_30,param_2,&DAT_100be10c8);
        FUN_1008a4c40(local_30,&DAT_100be10c8);
      }
      FUN_1008924e0(lVar3);
    }
  }
  return uVar2;
}

