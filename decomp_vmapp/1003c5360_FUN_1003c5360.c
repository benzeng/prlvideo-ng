
void FUN_1003c5360(uint *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_2 != 0) {
    do {
      if ((*(long *)(param_2 + 0x80) == 0) &&
         ((uVar3 = *(byte *)(param_2 + 0x7c) - 1, 7 < uVar3 || ((0x8bU >> (uVar3 & 0x1f) & 1) == 0))
         )) {
        uVar3 = *param_1;
        if ((ulong)uVar3 == 0) {
          puVar4 = (uint *)**(undefined8 **)(param_1 + 0x50a);
          if (puVar4 == (uint *)0x0) {
            puVar4 = operator_new(0x50);
            puVar4[0] = 0;
            puVar4[1] = 0;
            *(uint **)(puVar4 + 2) = puVar4;
            *(uint **)(puVar4 + 4) = puVar4;
            *(uint **)(puVar4 + 6) = puVar4;
            *(uint **)(puVar4 + 8) = puVar4 + 6;
            *(uint **)(puVar4 + 10) = puVar4 + 6;
            *(uint **)(puVar4 + 0xc) = puVar4;
            *(undefined1 *)(puVar4 + 0x12) = 0;
            *(uint **)(puVar4 + 0xe) = param_1 + 0x50e;
            lVar1 = *(long *)(param_1 + 0x512);
            *(long *)(puVar4 + 0x10) = lVar1;
            *(uint **)(lVar1 + 8) = puVar4 + 0xc;
            *(uint **)(param_1 + 0x512) = puVar4 + 0xc;
          }
          else {
            lVar1 = *(long *)(puVar4 + 10);
            *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(puVar4 + 8);
            *(long *)(*(long *)(puVar4 + 8) + 0x10) = lVar1;
            *(uint **)(puVar4 + 8) = puVar4 + 6;
            *(uint **)(puVar4 + 10) = puVar4 + 6;
          }
        }
        else {
          *param_1 = uVar3 - 1;
          puVar4 = param_1 + (0x40 - (ulong)uVar3) * 0x14 + 2;
        }
        lVar1 = param_2 + 0x18;
        lVar2 = *(long *)(param_2 + 0x28);
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x20);
        *(long *)(*(long *)(param_2 + 0x20) + 0x10) = lVar2;
        *(long *)(param_2 + 0x28) = lVar1;
        *(uint **)(param_2 + 0x80) = puVar4;
        *(uint **)(param_2 + 0x20) = puVar4;
        *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(puVar4 + 4);
        *(long *)(*(long *)(puVar4 + 4) + 8) = lVar1;
        *(long *)(puVar4 + 4) = lVar1;
        *(uint **)(puVar4 + 8) = param_1 + 0x502;
        *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_1 + 0x506);
        *(uint **)(*(long *)(param_1 + 0x506) + 8) = puVar4 + 6;
        *(uint **)(param_1 + 0x506) = puVar4 + 6;
      }
      param_2 = **(long **)(param_2 + 0x38);
    } while (param_2 != 0);
  }
  return;
}

