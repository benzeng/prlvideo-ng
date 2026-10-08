
undefined4 FUN_100c43bc0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = FUN_100c59ee0();
  lVar4 = FUN_100c58530(uVar3);
  if (lVar4 == 0) {
    FUN_100c62ee0(0x10,0xb5,0x20,"eck_prn.c",0x5c);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_100c58d60(lVar4,0x6a,0,param_1);
    lVar5 = FUN_100c6d320();
    if (lVar5 != 0) {
      iVar1 = FUN_100c6d6d0(lVar5,param_2);
      if (iVar1 != 0) {
        uVar2 = FUN_100c6d9d0(lVar4,lVar5,param_3,0);
        FUN_100c6d8c0(lVar5);
      }
    }
    FUN_100c586e0(lVar4);
  }
  return uVar2;
}

