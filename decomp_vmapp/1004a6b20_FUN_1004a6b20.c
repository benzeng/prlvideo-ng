
undefined8 FUN_1004a6b20(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0x48) == param_2) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  QMutex::unlock();
  QMutex::lock();
  puVar2 = *(uint **)(param_1 + 0x90);
  puVar3 = (undefined8 *)(param_1 + 0x90);
  if (1 < *puVar2) {
    FUN_1004a88d0(puVar3);
    puVar2 = (uint *)*puVar3;
  }
  if (*(long *)(puVar2 + 4) == 0) {
    puVar1 = puVar2 + 2;
  }
  else {
    puVar1 = *(uint **)(puVar2 + 8);
  }
  if (1 < *puVar2) {
    FUN_1004a88d0(puVar3);
    puVar2 = (uint *)*puVar3;
  }
  do {
    if (puVar1 == puVar2 + 2) {
LAB_1004a6c00:
      QMutex::unlock();
      return 0xf0000000;
    }
    if (*(long *)(*(long *)(puVar1 + 8) + 0x10) == param_2) {
      FUN_1004a7f80(puVar3,puVar1);
      goto LAB_1004a6c00;
    }
    puVar1 = (uint *)QMapNodeBase::nextNode();
  } while( true );
}

