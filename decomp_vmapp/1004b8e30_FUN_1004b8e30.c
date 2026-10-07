
ulong FUN_1004b8e30(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  byte bVar6;
  
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x1040);
  puVar3 = *(uint **)(param_1 + 0x1040);
  if (1 < *puVar3) {
    FUN_1004ba8b0(puVar1,puVar3[1]);
    puVar3 = (uint *)*puVar1;
  }
  puVar5 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  bVar6 = 0;
  while( true ) {
    if (1 < *puVar3) {
      FUN_1004ba8b0(puVar1,puVar3[1]);
      puVar3 = (uint *)*puVar1;
    }
    if (puVar5 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
    bVar2 = FUN_1004b8f70(param_1,*(undefined8 *)puVar5);
    bVar6 = bVar6 | bVar2;
    puVar5 = puVar5 + 2;
    puVar3 = *(uint **)(param_1 + 0x1040);
  }
  FUN_1004ba180(puVar1);
  uVar4 = QMutex::unlock();
  return CONCAT71((int7)((ulong)uVar4 >> 8),bVar6) & 0xffffffffffffff01;
}

