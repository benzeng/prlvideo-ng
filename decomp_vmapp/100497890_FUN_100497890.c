
undefined8 FUN_100497890(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  QMutex::lock();
  puVar1 = *(uint **)(param_1 + 0x78);
  puVar3 = (undefined8 *)(param_1 + 0x78);
  if (1 < *puVar1) {
    FUN_100498ef0(puVar3);
    puVar1 = (uint *)*puVar3;
  }
  if (*(long *)(puVar1 + 4) == 0) {
    puVar2 = puVar1 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar1 + 8);
  }
  uVar4 = 0xffffffff;
  while( true ) {
    if (1 < *puVar1) {
      FUN_100498ef0(puVar3);
      puVar1 = (uint *)*puVar3;
    }
    if (puVar2 == puVar1 + 2) goto LAB_100497949;
    if (*(long *)(puVar2 + 8) == param_2) break;
    puVar2 = (uint *)QMapNodeBase::nextNode();
    puVar1 = (uint *)*puVar3;
  }
  uVar4 = 0xf0000000;
  FUN_1004989b0(puVar3,puVar2);
LAB_100497949:
  QMutex::unlock();
  return uVar4;
}

