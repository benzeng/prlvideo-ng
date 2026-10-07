
void FUN_100289790(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  puVar3 = *(undefined1 **)(param_2 + 0x88);
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  bVar1 = puVar3[5];
  uVar4 = 0x100;
  if (bVar1 != 0) {
    uVar4 = (uint)bVar1;
  }
  *(uint *)(param_1 + 0x1090) = uVar4;
  bVar2 = puVar3[6];
  *(uint *)(param_1 + 0x1094) = (uint)bVar2;
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(puVar3 + 0x10);
  *(undefined4 *)(param_1 + 0x109c) = *(undefined4 *)(puVar3 + 0x14);
  *(uint *)(param_1 + 0x1088) = (uint)*(ushort *)(puVar3 + 0xc);
  *(undefined2 *)(param_2 + 10) = 0x205;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar3 + 8);
  *(undefined1 *)(param_2 + 8) = *puVar3;
  *(byte *)(param_2 + 0xd) = bVar1;
  *(byte *)(param_2 + 0xe) = bVar2;
  return;
}

