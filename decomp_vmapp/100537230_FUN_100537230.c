
void FUN_100537230(long param_1,long param_2)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined1 local_38 [8];
  uint *local_30;
  
  QMutex::lock();
  puVar1 = *(uint **)(param_1 + 0x10);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  if (1 < *puVar1) {
    FUN_100541b80(puVar4,puVar1[1]);
    puVar1 = (uint *)*puVar4;
  }
  puVar3 = puVar1 + (long)(int)puVar1[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar1) {
      FUN_100541b80(puVar4,puVar1[1]);
      puVar1 = (uint *)*puVar4;
    }
    if (puVar3 == puVar1 + (long)(int)puVar1[3] * 2 + 4) goto LAB_1005372da;
    lVar2 = 0;
    if (**(long **)(**(long **)puVar3 + 0x10) != 0) {
      lVar2 = *(long *)(**(long **)(**(long **)puVar3 + 0x10) + 0x10);
    }
    if (lVar2 == param_2) break;
    puVar3 = puVar3 + 2;
  }
  local_30 = puVar3;
  FUN_100540f60(local_38,puVar4,&local_30);
LAB_1005372da:
  QMutex::unlock();
  return;
}

