
void FUN_100289810(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x1087);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0xb) = 3;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 8);
  *(undefined2 *)(param_2 + 8) = 0x105;
  *(undefined1 *)(param_2 + 10) = 0x14;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0x80;
  *(byte *)(param_2 + 0x1d) = bVar1 & 7;
  uVar2 = *(undefined4 *)(param_1 + 0x1088);
  *(char *)(param_2 + 0x1e) = (char)uVar2;
  uVar3 = (undefined2)uVar2;
  *(undefined2 *)(param_2 + 0x22) = uVar3;
  *(undefined2 *)(param_2 + 0x26) = 0;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x10a0);
  *(undefined2 *)(param_2 + 0x20) = 0x80;
  *(undefined2 *)(param_2 + 0x2c) = 0x80;
  *(undefined1 *)(param_2 + 0x2e) = *(undefined1 *)(param_1 + 0x108c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x109c);
  *(undefined2 *)(param_2 + 0x34) = uVar3;
  *(undefined1 *)(param_2 + 0x36) = *(undefined1 *)(param_1 + 0x1090);
  *(undefined1 *)(param_2 + 0x37) = *(undefined1 *)(param_1 + 0x1094);
  if (DAT_101115e68 < 0) {
    DAT_101115e68 = FUN_1007da300("devices.scsi.hpq",1);
  }
  if (DAT_101115e68 != 0) {
    *(byte *)(param_2 + 0x3c) = *(byte *)(param_2 + 0x3c) | 1;
    *(undefined2 *)(param_2 + 0x44) = 1;
  }
  return;
}

