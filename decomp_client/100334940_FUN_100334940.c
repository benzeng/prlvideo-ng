
void FUN_100334940(QObject *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  QMapNodeBase *pQVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_10220c440;
  if (1 < DAT_10230ffd0) {
    (*(code *)PTR_FUN_10220c440)(param_1);
    uVar2 = QMetaObject::className();
    FUN_100df99c0("GUI_DDLL","prl_client_app",2,"Destroy DDLL [%p] \'%s\'",param_1,uVar2);
  }
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1003349de;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar3,(int)*(long *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_1003349de:
  pQVar3 = *(QMapNodeBase **)(param_1 + 0x28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100334a1d;
      pQVar3 = *(QMapNodeBase **)(param_1 + 0x28);
    }
    if (*(long *)(pQVar3 + 0x10) != 0) {
      QMapDataBase::freeTree(pQVar3,(int)*(long *)(pQVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar3);
  }
LAB_100334a1d:
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

