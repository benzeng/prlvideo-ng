
void FUN_1000f03c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar2 = *(long *)(lVar5 + 0x20);
    while (lVar2 != lVar5 + 8) {
      puVar1 = *(undefined8 **)(lVar2 + 0x28);
      if (*(int *)(lVar2 + 0x20) == 0) {
        if (puVar1 != (undefined8 *)0x0) {
          FUN_100039a80(puVar1);
          goto LAB_1000f04b1;
        }
      }
      else if (puVar1 != (undefined8 *)0x0) {
        pQVar3 = (QArrayData *)*puVar1;
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_1000f04b1;
            pQVar3 = (QArrayData *)*puVar1;
          }
          lVar5 = (long)*(int *)(pQVar3 + 4) << 3;
          if (lVar5 != 0) {
            pQVar4 = pQVar3 + *(long *)(pQVar3 + 0x10);
            do {
              FUN_100039a80(pQVar4);
              pQVar4 = pQVar4 + 8;
              lVar5 = lVar5 + -8;
            } while (lVar5 != 0);
          }
          QArrayData::deallocate(pQVar3,8,8);
        }
LAB_1000f04b1:
        operator_delete(puVar1);
      }
      lVar2 = QMapNodeBase::nextNode();
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1000f0500((long *)(param_1 + 8));
  return;
}

