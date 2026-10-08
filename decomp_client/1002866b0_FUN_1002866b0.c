
void FUN_1002866b0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int *piVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = *(long *)(lVar6 + 0x20);
    while (lVar2 != lVar6 + 8) {
      puVar1 = *(undefined8 **)(lVar2 + 0x28);
      if (*(int *)(lVar2 + 0x20) == 0) {
        if (puVar1 != (undefined8 *)0x0) {
          piVar3 = (int *)*puVar1;
          if (*piVar3 != -1) {
            if (*piVar3 != 0) {
              LOCK();
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 != 0) goto LAB_1002867f0;
              piVar3 = (int *)*puVar1;
            }
            FUN_100286360(puVar1,piVar3);
          }
          goto LAB_1002867f0;
        }
      }
      else if (puVar1 != (undefined8 *)0x0) {
        pQVar4 = (QArrayData *)*puVar1;
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            UNLOCK();
            if (*(int *)pQVar4 != 0) goto LAB_1002867f0;
            pQVar4 = (QArrayData *)*puVar1;
          }
          lVar6 = (long)*(int *)(pQVar4 + 4) << 3;
          if (lVar6 != 0) {
            pQVar5 = pQVar4 + *(long *)(pQVar4 + 0x10);
            do {
              piVar3 = *(int **)pQVar5;
              if (*piVar3 == 0) {
LAB_100286780:
                FUN_100286360(pQVar5,piVar3);
              }
              else if (*piVar3 != -1) {
                LOCK();
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  piVar3 = *(int **)pQVar5;
                  goto LAB_100286780;
                }
              }
              pQVar5 = pQVar5 + 8;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
          QArrayData::deallocate(pQVar4,8,8);
        }
LAB_1002867f0:
        operator_delete(puVar1);
      }
      lVar2 = QMapNodeBase::nextNode();
      lVar6 = *(long *)(param_1 + 8);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1000f0500((long *)(param_1 + 8));
  return;
}

