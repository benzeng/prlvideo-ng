
undefined8 FUN_1008d6560(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100821ab0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
  if (iVar1 == 0x15) {
    uVar2 = FUN_1008b1220(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20),&DAT_100be6368);
  }
  else {
    FUN_100887ce0(0x23,0x82,0x79,"p12_add.c",0xfd);
    uVar2 = 0;
  }
  return uVar2;
}

