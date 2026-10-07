
undefined1 FUN_100537c50(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  
  QMutex::lock();
  puVar3 = *(uint **)(param_1 + 0x10);
  puVar5 = (undefined8 *)(param_1 + 0x10);
  if (1 < *puVar3) {
    FUN_100541d10(puVar5);
    puVar3 = (uint *)*puVar5;
  }
  if (*(long *)(puVar3 + 4) == 0) {
    puVar4 = puVar3 + 2;
  }
  else {
    puVar4 = *(uint **)(puVar3 + 8);
  }
  while( true ) {
    if (1 < *puVar3) {
      FUN_100541d10(puVar5);
      puVar3 = (uint *)*puVar5;
    }
    if (puVar4 == puVar3 + 2) break;
    if ((*(long *)(puVar4 + 8) != 0) &&
       (lVar1 = *(long *)(*(long *)(puVar4 + 8) + 0x10), lVar1 != 0)) {
      cVar2 = FUN_10053b2c0(lVar1,param_2);
      uVar6 = 1;
      if (cVar2 != '\0') goto LAB_100537d16;
    }
    puVar4 = (uint *)QMapNodeBase::nextNode();
    puVar3 = (uint *)*puVar5;
  }
  uVar6 = 0;
LAB_100537d16:
  QMutex::unlock();
  return uVar6;
}

