
undefined8 FUN_1004c2e80(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  QMutex::lock();
  puVar1 = *(uint **)(param_1 + 0x38);
  puVar3 = (undefined8 *)(param_1 + 0x38);
  if (1 < *puVar1) {
    FUN_1004c3740(puVar3);
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
      FUN_1004c3740(puVar3);
      puVar1 = (uint *)*puVar3;
    }
    if (puVar1 + 2 == puVar2) goto LAB_1004c2f23;
    if (*(long *)(puVar2 + 8) == param_2) break;
    puVar2 = (uint *)QMapNodeBase::nextNode();
    puVar1 = (uint *)*puVar3;
  }
  FUN_1004c33b0(puVar3,puVar2);
LAB_1004c2f23:
  QMutex::unlock();
  return 0xf0000000;
}

