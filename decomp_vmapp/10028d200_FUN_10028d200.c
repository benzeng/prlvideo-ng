
void FUN_10028d200(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined1 **)(param_1 + 0x88);
  uVar3 = 2;
  if ((ulong)(byte)puVar1[0x16] < 3) {
    uVar3 = (ulong)(byte)puVar1[0x16];
  }
  puVar2 = (&PTR_DAT_101115e90)[uVar3];
  *(undefined1 *)(param_1 + 8) = *puVar1;
  *(undefined1 *)(param_1 + 0xb) = puVar1[3];
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(puVar2 + 4);
  *(undefined *)(param_1 + 0xe) = puVar2[6];
  *(undefined1 *)(param_1 + 0xf) = puVar1[7];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(puVar1 + 8);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar1 + 0x14);
  return;
}

