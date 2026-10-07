
undefined4 FUN_1008a2fa0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_10087ece0();
  lVar3 = FUN_10087d330(uVar2);
  if (lVar3 == 0) {
    FUN_100887ce0(0xb,0x76,7,"t_x509.c",0x5a);
    uVar1 = 0;
  }
  else {
    FUN_10087db60(lVar3,0x6a,0,param_1);
    uVar1 = FUN_1008a30d0(lVar3,param_2,0,0);
    FUN_10087d4e0(lVar3);
  }
  return uVar1;
}

