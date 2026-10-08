
void FUN_1000a54f0(long param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  if (1 < *puVar4) {
    FUN_1000a5ea0(puVar3);
    puVar4 = (uint *)*puVar3;
  }
  if (*(long *)(puVar4 + 4) == 0) {
    puVar1 = puVar4 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar4 + 8);
  }
  if (1 < *puVar4) {
    FUN_1000a5ea0(puVar3);
    puVar4 = (uint *)*puVar3;
  }
  while (puVar1 != puVar4 + 2) {
    uVar2 = 0;
    if (*(long *)(puVar1 + 8) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(puVar1 + 8) + 0x10);
    }
    FUN_1000a1a00(uVar2);
    puVar1 = (uint *)QMapNodeBase::nextNode();
  }
  return;
}

