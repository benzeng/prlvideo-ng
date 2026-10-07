
void FUN_1003b6c50(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  uint *puVar6;
  
  puVar6 = *(uint **)(param_2 + 0x80);
  if (puVar6 == (uint *)0x0) {
    puVar6 = *(uint **)(param_3 + 0x80);
    if (puVar6 == (uint *)0x0) {
      uVar2 = *param_1;
      if ((ulong)uVar2 == 0) {
        puVar6 = (uint *)**(undefined8 **)(param_1 + 0x50a);
        if (puVar6 == (uint *)0x0) {
          puVar6 = operator_new(0x50);
          puVar6[0] = 0;
          puVar6[1] = 0;
          *(uint **)(puVar6 + 2) = puVar6;
          *(uint **)(puVar6 + 4) = puVar6;
          *(uint **)(puVar6 + 6) = puVar6;
          *(uint **)(puVar6 + 8) = puVar6 + 6;
          *(uint **)(puVar6 + 10) = puVar6 + 6;
          *(uint **)(puVar6 + 0xc) = puVar6;
          *(undefined1 *)(puVar6 + 0x12) = 0;
          *(uint **)(puVar6 + 0xe) = param_1 + 0x50e;
          lVar1 = *(long *)(param_1 + 0x512);
          *(long *)(puVar6 + 0x10) = lVar1;
          *(uint **)(lVar1 + 8) = puVar6 + 0xc;
          *(uint **)(param_1 + 0x512) = puVar6 + 0xc;
        }
        else {
          lVar1 = *(long *)(puVar6 + 10);
          *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(puVar6 + 8);
          *(long *)(*(long *)(puVar6 + 8) + 0x10) = lVar1;
          *(uint **)(puVar6 + 8) = puVar6 + 6;
          *(uint **)(puVar6 + 10) = puVar6 + 6;
        }
      }
      else {
        *param_1 = uVar2 - 1;
        puVar6 = param_1 + (0x40 - (ulong)uVar2) * 0x14 + 2;
      }
      *(uint **)(puVar6 + 8) = param_1 + 0x502;
      *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_1 + 0x506);
      *(uint **)(*(long *)(param_1 + 0x506) + 8) = puVar6 + 6;
      *(uint **)(param_1 + 0x506) = puVar6 + 6;
    }
    lVar1 = param_2 + 0x18;
    lVar3 = *(long *)(param_2 + 0x28);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_2 + 0x20);
    *(long *)(*(long *)(param_2 + 0x20) + 0x10) = lVar3;
    *(long *)(param_2 + 0x28) = lVar1;
    *(uint **)(param_2 + 0x80) = puVar6;
    *(uint **)(param_2 + 0x20) = puVar6;
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(puVar6 + 4);
    *(long *)(*(long *)(puVar6 + 4) + 8) = lVar1;
    *(long *)(puVar6 + 4) = lVar1;
  }
  puVar4 = *(uint **)(param_3 + 0x80);
  if (puVar4 == (uint *)0x0) {
    lVar1 = param_3 + 0x18;
    lVar3 = *(long *)(param_3 + 0x28);
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(param_3 + 0x20);
    *(long *)(*(long *)(param_3 + 0x20) + 0x10) = lVar3;
    *(long *)(param_3 + 0x28) = lVar1;
    *(uint **)(param_3 + 0x80) = puVar6;
    *(uint **)(param_3 + 0x20) = puVar6;
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(puVar6 + 4);
    *(long *)(*(long *)(puVar6 + 4) + 8) = lVar1;
    *(long *)(puVar6 + 4) = lVar1;
  }
  else if (puVar4 != puVar6) {
    while (lVar1 = **(long **)(puVar4 + 2), lVar1 != 0) {
      lVar3 = lVar1 + 0x18;
      lVar5 = *(long *)(lVar1 + 0x28);
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar1 + 0x20);
      *(long *)(*(long *)(lVar1 + 0x20) + 0x10) = lVar5;
      *(long *)(lVar1 + 0x28) = lVar3;
      *(uint **)(lVar1 + 0x80) = puVar6;
      *(uint **)(lVar1 + 0x20) = puVar6;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(puVar6 + 4);
      *(long *)(*(long *)(puVar6 + 4) + 8) = lVar3;
      *(long *)(puVar6 + 4) = lVar3;
    }
    puVar6 = puVar4 + 6;
    lVar1 = *(long *)(puVar4 + 10);
    *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(puVar4 + 8);
    *(long *)(*(long *)(puVar4 + 8) + 0x10) = lVar1;
    *(uint **)(puVar4 + 10) = puVar6;
    *(uint **)(puVar4 + 8) = param_1 + 0x508;
    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_1 + 0x50c);
    *(uint **)(*(long *)(param_1 + 0x50c) + 8) = puVar6;
    *(uint **)(param_1 + 0x50c) = puVar6;
  }
  return;
}

