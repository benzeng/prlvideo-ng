
undefined4 FUN_100817830(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_28;
  
  uVar2 = 0;
  local_28 = param_2;
  lVar3 = FUN_1008a1790(0,&local_28,(long)param_3);
  if (lVar3 == 0) {
    FUN_100887ce0(0x14,199,0xd,"ssl_rsa.c",0x86);
  }
  else {
    iVar1 = FUN_100812370((undefined8 *)(param_1 + 0x100));
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0xc6,0x41,"ssl_rsa.c",0x4c);
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100817560(*(undefined8 *)(param_1 + 0x100),lVar3);
    }
    FUN_1008a17f0(lVar3);
  }
  return uVar2;
}

