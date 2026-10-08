
undefined8 FUN_100cb2b10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if (iVar1 == 0x15) {
    uVar2 = FUN_100c8c7a0(*(undefined8 *)(param_1 + 0x20),&DAT_102256918);
  }
  else {
    FUN_100c62ee0(0x23,0x83,0x79,"p12_add.c",0xab);
    uVar2 = 0;
  }
  return uVar2;
}

