
undefined8 FUN_10086f0c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int local_24;
  undefined1 local_20 [8];
  
  uVar3 = 0;
  iVar1 = FUN_1008b1d10(0,local_20,&local_24,0,param_2);
  if (iVar1 != 0) {
    uVar3 = 0;
    lVar2 = FUN_10086ed80(0,local_20,(long)local_24);
    if (lVar2 == 0) {
      FUN_100887ce0(4,0x93,4,"rsa_ameth.c",0x72);
    }
    else {
      FUN_100892130(param_1,6,lVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

