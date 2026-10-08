
void FUN_1006698d0(QObject *param_1)

{
  int *piVar1;
  int iVar2;
  QObject *pQVar3;
  long *plVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  Data *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  *(undefined ***)param_1 = &PTR_FUN_102223e98;
  pQVar3 = (QObject *)CDeclarativeWizardPage::pageContentItem();
  if (pQVar3 != (QObject *)0x0) {
    QObject::disconnect(pQVar3,(char *)0x0,param_1,(char *)0x0);
    local_40 = (Data *)PTR_shared_null_1021e15e8;
    iVar2 = FUN_10066b190();
    QVariant::QVariant(&local_38,iVar2,&local_40,0);
    QObject::setProperty((char *)pQVar3,(QVariant *)"listModel");
    QVariant::~QVariant(&local_38);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10066996d;
      }
      QListData::dispose(local_40);
    }
  }
LAB_10066996d:
  lVar7 = *(long *)(param_1 + 0x40);
  iVar2 = *(int *)(lVar7 + 8);
  if (iVar2 != *(int *)(lVar7 + 0xc)) {
    plVar4 = (long *)(lVar7 + 0x10 + (long)iVar2 * 8);
    lVar7 = (long)*(int *)(lVar7 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x20))();
      }
      plVar4 = plVar4 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  pQVar3 = param_1 + 0x40;
  FUN_1005e7870(pQVar3);
  pQVar6 = *(QArrayData **)(param_1 + 0x50);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_21 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006699e7;
      pQVar6 = *(QArrayData **)(param_1 + 0x50);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1006699e7:
  pDVar5 = *(Data **)pQVar3;
  if (*(int *)pDVar5 != -1) {
    if (*(int *)pDVar5 != 0) {
      LOCK();
      *(int *)pDVar5 = *(int *)pDVar5 + -1;
      local_21 = *(int *)pDVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100669a0b;
      pDVar5 = *(Data **)pQVar3;
    }
    QListData::dispose(pDVar5);
  }
LAB_100669a0b:
  *(undefined **)param_1 = PTR_vtable_1021e17f8 + 0x10;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x28));
    }
  }
  *(undefined **)param_1 = PTR_vtable_1021e17d8 + 0x10;
  pQVar6 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_21 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100669a7c;
      pQVar6 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100669a7c:
  QObject::~QObject(param_1);
  return;
}

