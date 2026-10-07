
undefined8 FUN_100817cd0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x125;
  }
  else {
    iVar1 = FUN_100812370((undefined8 *)(param_1 + 0x100));
    if (iVar1 != 0) {
      uVar2 = FUN_1008179d0(*(undefined8 *)(param_1 + 0x100),param_2);
      return uVar2;
    }
    uVar2 = 0x41;
    uVar3 = 0x129;
  }
  FUN_100887ce0(0x14,0xc9,uVar2,"ssl_rsa.c",uVar3);
  return 0;
}

