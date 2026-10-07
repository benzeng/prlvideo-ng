
ulong FUN_100466220(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((DAT_1011bbf70 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_1011bbf70), iVar4 != 0)) {
    DAT_1011bbf68 = 0x7fffffff;
    ___cxa_guard_release(&DAT_1011bbf70);
  }
  uVar5 = _rand();
  uVar7 = (ulong)uVar5 % (ulong)DAT_1011bbf68;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(uint *)(puVar2 + 4) == 0) {
    return uVar7;
  }
  uVar5 = *(uint *)((long)puVar2 + 0x24) ^ (uint)uVar7;
  puVar6 = *(undefined8 **)(puVar2[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar2 + 4)) * 8);
  while( true ) {
    if (puVar6 == puVar2) {
      return uVar7;
    }
    if ((*(uint *)(puVar6 + 1) == uVar5) && ((uint)uVar7 == *(uint *)((long)puVar6 + 0xc))) break;
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 == puVar2) {
    return uVar7;
  }
  uVar5 = _rand();
  uVar7 = (ulong)uVar5 % (ulong)DAT_1011bbf68;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(uint *)(puVar2 + 4) == 0) {
    return uVar7;
  }
  uVar5 = *(uint *)((long)puVar2 + 0x24) ^ (uint)uVar7;
  puVar6 = *(undefined8 **)(puVar2[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar2 + 4)) * 8);
  while( true ) {
    if (puVar6 == puVar2) {
      return uVar7;
    }
    if ((*(uint *)(puVar6 + 1) == uVar5) && ((uint)uVar7 == *(uint *)((long)puVar6 + 0xc))) break;
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 == puVar2) {
    return uVar7;
  }
  uVar5 = _rand();
  uVar7 = (ulong)uVar5 % (ulong)DAT_1011bbf68;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (*(uint *)(puVar2 + 4) == 0) {
    return uVar7;
  }
  uVar5 = *(uint *)((long)puVar2 + 0x24) ^ (uint)uVar7;
  puVar6 = *(undefined8 **)(puVar2[1] + ((ulong)uVar5 % (ulong)*(uint *)(puVar2 + 4)) * 8);
  while( true ) {
    if (puVar6 == puVar2) {
      return uVar7;
    }
    if ((*(uint *)(puVar6 + 1) == uVar5) && ((uint)uVar7 == *(uint *)((long)puVar6 + 0xc))) break;
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 == puVar2) {
    return uVar7;
  }
  uVar5 = _rand();
  uVar7 = (ulong)uVar5 % (ulong)DAT_1011bbf68;
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar5 = *(uint *)(puVar2 + 4);
  if (uVar5 == 0) {
    return uVar7;
  }
  uVar1 = *(uint *)((long)puVar2 + 0x24);
  uVar8 = (uint)uVar7 ^ uVar1;
  lVar3 = puVar2[1];
  puVar6 = *(undefined8 **)(lVar3 + ((ulong)uVar8 % (ulong)uVar5) * 8);
  while( true ) {
    if (puVar6 == puVar2) {
      return uVar7;
    }
    if ((*(uint *)(puVar6 + 1) == uVar8) && ((uint)uVar7 == *(uint *)((long)puVar6 + 0xc))) break;
    puVar6 = (undefined8 *)*puVar6;
  }
  if (puVar6 == puVar2) {
    return uVar7;
  }
  uVar7 = 0;
  puVar6 = *(undefined8 **)(lVar3 + ((ulong)uVar1 % (ulong)uVar5) * 8);
  uVar8 = uVar1;
  while( true ) {
    while( true ) {
      if (puVar6 == puVar2) {
        return uVar7;
      }
      if ((*(uint *)(puVar6 + 1) == uVar8) && ((int)uVar7 == *(int *)((long)puVar6 + 0xc))) break;
      puVar6 = (undefined8 *)*puVar6;
    }
    if (puVar6 == puVar2) break;
    uVar8 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar8;
    uVar8 = uVar1 ^ uVar8;
    puVar6 = *(undefined8 **)(lVar3 + ((ulong)uVar8 % (ulong)uVar5) * 8);
  }
  return uVar7;
}

