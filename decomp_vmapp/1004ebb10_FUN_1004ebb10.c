
void FUN_1004ebb10(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  QArrayData *pQVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar5 = (long *)param_1[1];
    lVar2 = *plVar5;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[2] = 0;
    while (plVar5 != param_1) {
      plVar3 = (long *)plVar5[1];
      FUN_1004eba70(plVar5 + 0xb);
      FUN_1004eb9a0(plVar5 + 8);
      pQVar4 = (QArrayData *)plVar5[5];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ebbaa;
          pQVar4 = (QArrayData *)plVar5[5];
        }
        QArrayData::deallocate(pQVar4,1,8);
      }
LAB_1004ebbaa:
      pQVar4 = (QArrayData *)plVar5[4];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ebbda;
          pQVar4 = (QArrayData *)plVar5[4];
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004ebbda:
      pQVar4 = (QArrayData *)plVar5[3];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ebc0a;
          pQVar4 = (QArrayData *)plVar5[3];
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004ebc0a:
      pQVar4 = (QArrayData *)plVar5[2];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ebb50;
          pQVar4 = (QArrayData *)plVar5[2];
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004ebb50:
      operator_delete(plVar5);
      plVar5 = plVar3;
    }
  }
  return;
}

