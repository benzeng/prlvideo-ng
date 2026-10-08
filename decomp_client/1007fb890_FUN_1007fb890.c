
void FUN_1007fb890(QTreeWidget *param_1)

{
  QMapNodeBase *pQVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1021faf20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1021fb250;
  pQVar2 = *(QArrayData **)(param_1 + 0x38);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1007fb8e2;
      pQVar2 = *(QArrayData **)(param_1 + 0x38);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1007fb8e2:
  pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007fb92a;
      pQVar1 = *(QMapNodeBase **)(param_1 + 0x30);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10013c770();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1007fb92a:
  QTreeWidget::~QTreeWidget(param_1);
  return;
}

