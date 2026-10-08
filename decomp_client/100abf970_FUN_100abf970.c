
void FUN_100abf970(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(uint **)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 8);
  if (1 < *puVar2) {
    FUN_100abfda0(puVar3);
    puVar2 = (uint *)*puVar3;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar1 = puVar2 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar2 + 8);
  }
  while( true ) {
    if (1 < *puVar2) {
      FUN_100abfda0(puVar3);
      puVar2 = (uint *)*puVar3;
    }
    if (puVar1 == puVar2 + 2) break;
    if (*(long **)(puVar1 + 10) != (long *)0x0) {
      (**(code **)(**(long **)(puVar1 + 10) + 0x20))();
    }
    puVar1 = (uint *)FUN_100abfc60(puVar3,puVar1);
    puVar2 = (uint *)*puVar3;
  }
  return;
}

