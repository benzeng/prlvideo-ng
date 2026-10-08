
void FUN_10009b130(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  puVar2 = *(uint **)(param_1 + 0x50);
  if (1 < *puVar2) {
    FUN_10009c6d0(puVar1,puVar2[1]);
    puVar2 = (uint *)*puVar1;
  }
  puVar3 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar2) {
      FUN_10009c6d0(puVar1,puVar2[1]);
      puVar2 = (uint *)*puVar1;
    }
    if (puVar3 == puVar2 + (long)(int)puVar2[3] * 2 + 4) break;
    if (-1 < *(int *)(*(long *)(**(long **)puVar3 + 0x10) + 0x38)) {
      QTimer::stop();
      puVar2 = (uint *)*puVar1;
    }
    puVar3 = puVar3 + 2;
  }
  FUN_10009c2c0(puVar1);
  FUN_10009c3a0(param_1 + 0x48);
  return;
}

