
undefined8 FUN_100bedc30(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x253;
  }
  else {
    iVar1 = FUN_100be7ae0((undefined8 *)(param_1 + 0x130));
    if (iVar1 != 0) {
      uVar2 = FUN_100bed140(*(undefined8 *)(param_1 + 0x130),param_2);
      return uVar2;
    }
    uVar2 = 0x41;
    uVar3 = 599;
  }
  FUN_100c62ee0(0x14,0xae,uVar2,"ssl_rsa.c",uVar3);
  return 0;
}

