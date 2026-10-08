
undefined8 FUN_100cb2da0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  if (iVar1 == 0x15) {
    uVar2 = FUN_100c8c7a0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),&DAT_102256978);
  }
  else {
    FUN_100c62ee0(0x23,0x82,0x79,"p12_add.c",0xfd);
    uVar2 = 0;
  }
  return uVar2;
}

