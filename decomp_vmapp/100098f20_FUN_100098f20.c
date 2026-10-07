
void FUN_100098f20(long *param_1)

{
  long lVar1;
  long *plVar2;
  QArrayData *pQVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar4 = (long *)param_1[1];
    *(undefined8 *)(*plVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = *plVar4;
    param_1[2] = 0;
    while (plVar4 != param_1) {
      plVar2 = (long *)plVar4[1];
      pQVar3 = (QArrayData *)plVar4[5];
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_100098f60;
          pQVar3 = (QArrayData *)plVar4[5];
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100098f60:
      operator_delete(plVar4);
      plVar4 = plVar2;
    }
  }
  return;
}

