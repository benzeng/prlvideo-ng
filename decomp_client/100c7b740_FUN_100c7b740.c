
undefined4 FUN_100c7b740(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_30;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_100c6d320();
    if (lVar3 == 0) {
      FUN_100c62ee0(0xd,0xa1,0x41,"x_pubkey.c",0x126);
    }
    else {
      FUN_100c6d620(lVar3,param_1);
      local_30 = 0;
      iVar1 = FUN_100c7b190(&local_30,lVar3);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = FUN_100c80850(local_30,param_2,&DAT_1022516d8);
        FUN_100c801c0(local_30,&DAT_1022516d8);
      }
      FUN_100c6d8c0(lVar3);
    }
  }
  return uVar2;
}

