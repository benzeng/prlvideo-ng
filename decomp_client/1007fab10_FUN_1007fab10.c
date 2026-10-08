
void FUN_1007fab10(QMenu *param_1)

{
  QMapNodeBase *pQVar1;
  
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021f9e10;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_1021f9fc0;
  pQVar1 = *(QMapNodeBase **)((long)&param_1[1].field0_0x0 + 6);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007fab7d;
      pQVar1 = *(QMapNodeBase **)((long)&param_1[1].field0_0x0 + 6);
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
LAB_1007fab7d:
  QMenu::~QMenu(param_1);
  return;
}

