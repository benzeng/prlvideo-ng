
void FUN_1003519d0(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  QObject *pQVar4;
  int *piVar5;
  uint *puVar6;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      FUN_100830fb0(param_1);
      return;
    }
    puVar1 = (undefined8 *)(param_1 + 0x20);
    puVar3 = *(uint **)(param_1 + 0x20);
    if (1 < *puVar3) {
      FUN_100352c30(puVar1,puVar3[1]);
      puVar3 = (uint *)*puVar1;
    }
    puVar6 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar3) {
        FUN_100352c30(puVar1,puVar3[1]);
        puVar3 = (uint *)*puVar1;
      }
      if (puVar6 == puVar3 + (long)(int)puVar3[3] * 2 + 4) break;
      pQVar4 = (QObject *)FUN_10018f120(*(undefined8 *)(param_1 + 0x10),8,**(undefined4 **)puVar6);
      if (pQVar4 != (QObject *)0x0) {
        piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
        if (piVar5 != (int *)0x0) {
          if (piVar5[1] != 0) {
            lVar2 = *(long *)puVar6;
            FUN_100149970(pQVar4,lVar2 + 8,*(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 0x10))
            ;
          }
          LOCK();
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            operator_delete(piVar5);
          }
        }
      }
      puVar6 = puVar6 + 2;
      puVar3 = (uint *)*puVar1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (*(int *)(param_1 + 0x50) == 0) {
      QTimer::start();
    }
    FUN_100830fb0(param_1);
  }
  return;
}

