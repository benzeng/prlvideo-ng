
void FUN_1003aa9b0(ulong param_1,uint param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  
  *(ulong *)param_1 = param_1;
  *(ulong *)(param_1 + 8) = param_1;
  *(ulong *)(param_1 + 0x10) = param_1;
  *(ulong *)(param_1 + 0x18) = param_1;
  *(ulong *)(param_1 + 0x20) = param_1 + 0x18;
  *(ulong *)(param_1 + 0x28) = param_1 + 0x18;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x48) = param_2;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xf0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  if (param_2 != 0) {
    uVar3 = (ulong)param_2;
    puVar2 = operator_new__(uVar3 * 0x40 + 8);
    *puVar2 = uVar3;
    puVar5 = puVar2 + 1;
    do {
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[2] = (ulong)puVar5;
      puVar5[3] = (ulong)(puVar5 + 2);
      puVar5[4] = (ulong)(puVar5 + 2);
      *(undefined1 *)(puVar5 + 7) = 0;
      *(byte *)((long)puVar5 + 0x39) = *(byte *)((long)puVar5 + 0x39) & 0xfe;
      puVar5[6] = 0;
      puVar5[5] = 0;
      puVar5 = puVar5 + 8;
    } while (puVar5 != puVar2 + uVar3 * 8 + 1);
    *(ulong **)(param_1 + 0x40) = puVar2 + 1;
    uVar1 = *(uint *)(param_1 + 0x48);
    uVar3 = (ulong)uVar1;
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar1 != (uVar1 & 1)) {
        uVar4 = uVar3 - (uVar1 & 1);
        puVar5 = puVar2 + 9;
        lVar6 = uVar3 - (uVar3 & 1);
        do {
          puVar5[-8] = param_1;
          *puVar5 = param_1;
          puVar5 = puVar5 + 0x10;
          lVar6 = lVar6 + -2;
        } while (lVar6 != 0);
      }
      if (uVar3 != uVar4) {
        puVar2 = puVar2 + uVar4 * 8 + 1;
        do {
          *puVar2 = param_1;
          uVar4 = uVar4 + 1;
          puVar2 = puVar2 + 8;
        } while (uVar4 < uVar3);
      }
    }
  }
  return;
}

