
long * FUN_1004ec1c0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  QArrayData *pQVar4;
  
  if (param_2 != param_3) {
    lVar1 = *param_3;
    lVar2 = *param_2;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    do {
      plVar3 = (long *)param_2[1];
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
      pQVar4 = (QArrayData *)param_2[6];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ec23c;
          pQVar4 = (QArrayData *)param_2[6];
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004ec23c:
      pQVar4 = (QArrayData *)param_2[2];
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          UNLOCK();
          if (*(int *)pQVar4 != 0) goto LAB_1004ec26c;
          pQVar4 = (QArrayData *)param_2[2];
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004ec26c:
      operator_delete(param_2);
      param_2 = plVar3;
    } while (plVar3 != param_3);
  }
  return param_3;
}

