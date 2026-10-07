
void FUN_1005d6fb0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  lVar5 = param_2;
  for (plVar3 = (long *)param_1[1]; (param_2 != param_3 && (lVar5 = param_2, plVar3 != param_1));
      plVar3 = (long *)plVar3[1]) {
    plVar3[4] = *(long *)(param_2 + 0x20);
    lVar5 = *(long *)(param_2 + 0x10);
    plVar3[3] = *(long *)(param_2 + 0x18);
    plVar3[2] = lVar5;
    QString::operator=((QString *)(plVar3 + 5),(QString *)(param_2 + 0x28));
    *(undefined1 *)(plVar3 + 6) = *(undefined1 *)(param_2 + 0x30);
    param_2 = *(long *)(param_2 + 8);
    lVar5 = param_3;
  }
  if (plVar3 == param_1) {
    FUN_1005d70d0(param_1,param_1,lVar5,param_3,0);
    return;
  }
  lVar5 = *param_1;
  lVar1 = *plVar3;
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar5 + 8);
  **(long **)(lVar5 + 8) = lVar1;
  do {
    plVar2 = (long *)plVar3[1];
    param_1[2] = param_1[2] + -1;
    pQVar4 = (QArrayData *)plVar3[5];
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        if (*(int *)pQVar4 != 0) goto LAB_1005d708b;
        pQVar4 = (QArrayData *)plVar3[5];
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1005d708b:
    operator_delete(plVar3);
    plVar3 = plVar2;
    if (plVar2 == param_1) {
      return;
    }
  } while( true );
}

