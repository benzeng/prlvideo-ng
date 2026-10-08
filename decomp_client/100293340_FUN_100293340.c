
void FUN_100293340(long param_1)

{
  long *plVar1;
  long lVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar2 = *(long *)(lVar5 + 0x20);
    while (lVar2 != lVar5 + 8) {
      plVar1 = *(long **)(lVar2 + 0x28);
      if (*(int *)(lVar2 + 0x20) == 0) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1);
        }
      }
      else if (plVar1 != (long *)0x0) {
        pQVar3 = (QArrayData *)*plVar1;
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            UNLOCK();
            if (*(int *)pQVar3 != 0) goto LAB_10029340b;
            pQVar3 = (QArrayData *)*plVar1;
          }
          lVar5 = (long)*(int *)(pQVar3 + 4) << 5;
          if (lVar5 != 0) {
            pQVar4 = pQVar3 + *(long *)(pQVar3 + 0x10);
            do {
              (*(code *)**(undefined8 **)pQVar4)(pQVar4);
              pQVar4 = pQVar4 + 0x20;
              lVar5 = lVar5 + -0x20;
            } while (lVar5 != 0);
          }
          QArrayData::deallocate(pQVar3,0x20,8);
        }
LAB_10029340b:
        operator_delete(plVar1);
      }
      lVar2 = QMapNodeBase::nextNode();
      lVar5 = *(long *)(param_1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1000f0500((long *)(param_1 + 8));
  return;
}

