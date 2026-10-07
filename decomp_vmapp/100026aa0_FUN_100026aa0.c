
void FUN_100026aa0(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  QMutex::lock();
  puVar1 = *(uint **)(param_1 + 0x30);
  puVar3 = (undefined8 *)(param_1 + 0x30);
  if (1 < *puVar1) {
    FUN_10002dc50(puVar3);
    puVar1 = (uint *)*puVar3;
  }
  if (*(long *)(puVar1 + 4) == 0) {
    puVar2 = puVar1 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar1 + 8);
  }
  while( true ) {
    if (1 < *puVar1) {
      FUN_10002dc50(puVar3);
      puVar1 = (uint *)*puVar3;
    }
    if (puVar2 == puVar1 + 2) break;
    if (*(long **)(puVar2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(puVar2 + 8) + 0x20))();
    }
    puVar2 = (uint *)QMapNodeBase::nextNode();
    puVar1 = (uint *)*puVar3;
  }
  FUN_10002d860(puVar3);
  QMutex::unlock();
  return;
}

