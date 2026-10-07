
long FUN_1008acfb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_100892a60();
  lVar2 = FUN_10087d330(uVar1);
  if (lVar2 == 0) {
    FUN_100887ce0(0xd,0xd1,0x41,"asn_mime.c",0xba);
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_10087dfb0(lVar2,param_1);
    lVar3 = FUN_10089c5a0(param_2,uVar1,0);
    if (lVar3 == 0) {
      FUN_100887ce0(0xd,0xd1,0x6e,"asn_mime.c",0xc0);
    }
    FUN_10087db60(uVar1,0xb,0,0);
    FUN_10087e0a0(uVar1);
    FUN_10087d4e0(lVar2);
  }
  return lVar3;
}

