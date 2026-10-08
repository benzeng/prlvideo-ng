
void FUN_100133b80(QMenu *param_1,QWidget *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  QActionGroup *this;
  
  QMenu::QMenu(param_1,param_2);
  param_1->field0_0x0 = (undefined4 **)&PTR_FUN_1021f9e10;
  param_1->field2_0x10 = (undefined4 **)&PTR_FUN_1021f9fc0;
  puVar2 = PTR_shared_null_1021e12f0;
  if (*(int *)PTR_shared_null_1021e12f0 == -1) {
LAB_100133c6b:
    *(undefined **)((long)&param_1[1].field0_0x0 + 6) = puVar2;
  }
  else {
    if (*(int *)PTR_shared_null_1021e12f0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_1021e12f0 = *(int *)PTR_shared_null_1021e12f0 + 1;
      UNLOCK();
      goto LAB_100133c6b;
    }
    uVar3 = QMapDataBase::createData();
    *(undefined8 *)((long)&param_1[1].field0_0x0 + 6) = uVar3;
    if (*(long *)(puVar2 + 0x10) != 0) {
      puVar4 = (ulong *)FUN_100137920(*(long *)(puVar2 + 0x10),uVar3);
      lVar1 = *(long *)((long)&param_1[1].field0_0x0 + 6);
      *(ulong **)(lVar1 + 0x10) = puVar4;
      *puVar4 = *puVar4 & 3 | lVar1 + 8U;
      QMapDataBase::recalcMostLeftNode();
    }
  }
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (*(int *)puVar2 != 0) goto LAB_100133cb6;
    }
    if (*(long *)(puVar2 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree((QMapNodeBase *)puVar2,(int)*(undefined8 *)(puVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_100133cb6:
  this = operator_new(0x10);
  QActionGroup::QActionGroup(this,(QObject *)param_1);
  *(QActionGroup **)((long)&param_1[1].field1_0x8.field0_0x0 + 6) = this;
  QActionGroup::setExclusive(SUB81(this,0));
  return;
}

