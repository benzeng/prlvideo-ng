
void FUN_1004b95a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1028);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x1020) + uVar4 * 4);
      uVar2 = uVar3 >> 0x10 ^ uVar3;
      for (puVar5 = *(undefined8 **)(param_1 + 0x18 + (ulong)((uVar2 >> 8 ^ uVar2) & 0xff) * 8);
          puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
        if (*(uint *)(puVar5 + 7) == uVar3) {
          if (((*(uint *)(puVar5 + 9) & 0x20) == 0) || (puVar5[0xe] == 0)) {
            if (*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) + 0x868) != 0) {
              *(undefined1 *)((long)puVar5 + 0x21) = 1;
            }
            if ((*(uint *)(puVar5 + 9) & 0x41) == 0) {
              FUN_1004bf6a0(param_1 + 0x1030,puVar5 + 0xb);
              uVar1 = *(uint *)(param_1 + 0x1028);
            }
          }
          else {
            *(undefined1 *)((long)puVar5 + 0x7c) = 1;
          }
          break;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}

