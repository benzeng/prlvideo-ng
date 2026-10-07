
void FUN_1002f6b30(long param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined8 uStack_18;
  
  if (1 < *(int *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x68);
  if ((bVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x68) = 2;
    bVar1 = 2;
  }
  uStack_18 = in_RAX;
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"InterruptWake %x",bVar1);
    bVar1 = *(byte *)(param_1 + 0x68);
  }
  if ((bVar1 & 2) != 0) {
    uStack_18 = CONCAT17(bVar1,CONCAT16(0x50,(undefined6)uStack_18));
    *(byte *)(param_1 + 0x68) = bVar1 & 0xfd;
    FUN_1002f8560(*(undefined8 *)(param_1 + 0x18),(long)&uStack_18 + 6,2);
  }
  return;
}

