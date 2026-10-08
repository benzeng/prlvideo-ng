
void FUN_100a260d0(QObject *param_1)

{
  QObject *pQVar1;
  long lVar2;
  QObject *pQVar3;
  long lVar4;
  QObject *pQVar5;
  QMapNodeBase *pQVar6;
  QArrayData *pQVar7;
  
  *(undefined ***)param_1 = &PTR_FUN_102237cb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102237d38;
  pQVar1 = param_1 + 0x30;
  FUN_100a28f10(pQVar1);
  if (param_1[0x21] != (QObject)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
  }
  if (param_1[0x20] != (QObject)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x40))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  FUN_100a29090(param_1 + 0x80);
  FUN_100a298a0(param_1 + 0x80);
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    pQVar3 = *(QObject **)(param_1 + 0x70);
    lVar4 = *(long *)pQVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x78) = 0;
    while (pQVar3 != param_1 + 0x68) {
      pQVar5 = *(QObject **)(pQVar3 + 8);
      std::string::~string((string *)(pQVar3 + 0x10));
      operator_delete(pQVar3);
      pQVar3 = pQVar5;
    }
  }
  pQVar7 = *(QArrayData **)(param_1 + 0x58);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a261ef;
      pQVar7 = *(QArrayData **)(param_1 + 0x58);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a261ef:
  FUN_100039a80(param_1 + 0x50);
  FUN_100039a80(param_1 + 0x48);
  FUN_100039a80(param_1 + 0x40);
  pQVar6 = *(QMapNodeBase **)(param_1 + 0x38);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100a26257;
      pQVar6 = *(QMapNodeBase **)(param_1 + 0x38);
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      FUN_100a2b690();
      QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_100a26257:
  pQVar6 = *(QMapNodeBase **)pQVar1;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100a2629d;
      pQVar6 = *(QMapNodeBase **)pQVar1;
    }
    if (*(long *)(pQVar6 + 0x10) != 0) {
      FUN_100a2b590();
      QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar6);
  }
LAB_100a2629d:
  pQVar7 = *(QArrayData **)(param_1 + 0x28);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100a262cf;
      pQVar7 = *(QArrayData **)(param_1 + 0x28);
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100a262cf:
  QObject::~QObject(param_1);
  return;
}

