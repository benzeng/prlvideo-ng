
void FUN_1006e4cb0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  QMenu *pQVar4;
  QWidget *pQVar5;
  QMenu *this;
  void *pvVar6;
  QString *pQVar7;
  QAction *pQVar8;
  int iVar9;
  undefined *puVar10;
  QHostAddress local_b8 [8];
  long local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  QString local_90;
  QString local_88;
  undefined *local_80;
  undefined *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  uVar1 = FUN_100152280();
  QObject::property((char *)&local_58);
  QVariant::toString();
  QObject::property((char *)&local_70);
  QVariant::toString();
  lVar2 = FUN_100154930(uVar1,&local_48,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e4d81;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006e4d81:
  QVariant::~QVariant(&local_70);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e4dba;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e4dba:
  QVariant::~QVariant(&local_58);
  puVar10 = PTR_shared_null_1021e15e8;
  local_78 = PTR_shared_null_1021e15e8;
  if ((lVar2 != 0) && (lVar3 = FUN_100190780(lVar2), lVar3 != 0)) {
    uVar1 = FUN_100190780(lVar2);
    FUN_1007c8b40(&local_80,uVar1);
    puVar10 = PTR_shared_null_1021e15e8;
    if (local_80 != PTR_shared_null_1021e15e8) {
      FUN_10008d4c0(&local_40,&local_80);
      puVar10 = local_40;
      local_40 = PTR_shared_null_1021e15e8;
      local_78 = puVar10;
      FUN_10008c780(&local_40);
    }
    FUN_10008c780(&local_80);
  }
  QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_102225790,0x1e1135f);
  QMetaObject::tr((char *)&local_90,(char *)&PTR_staticMetaObject_102225790,0x1e11371);
  iVar9 = *(int *)(puVar10 + 0xc) - *(int *)(puVar10 + 8);
  if (iVar9 < 2) {
    if (iVar9 < 1) {
      QHostAddress::QHostAddress(local_b8);
    }
    else {
      QHostAddress::QHostAddress
                (local_b8,*(QHostAddress **)(puVar10 + (long)*(int *)(puVar10 + 8) * 8 + 0x10));
    }
    pQVar7 = operator_new(0x30);
    FUN_1006b3be0(pQVar7,0x81,lVar2,local_b8,param_2);
    QAction::setText(pQVar7);
    pQVar8 = (QAction *)QAction::menu();
    QWidget::addAction(pQVar8);
    pQVar7 = operator_new(0x30);
    FUN_1006b3be0(pQVar7,0x82,lVar2,local_b8,param_2);
    QAction::setText(pQVar7);
    pQVar8 = (QAction *)QAction::menu();
    QWidget::addAction(pQVar8);
    QHostAddress::~QHostAddress(local_b8);
  }
  else {
    pQVar4 = operator_new(0x30);
    pQVar5 = (QWidget *)QAction::menu();
    QMenu::QMenu(pQVar4,&local_88,pQVar5);
    this = operator_new(0x30);
    pQVar5 = (QWidget *)QAction::menu();
    QMenu::QMenu(this,&local_90,pQVar5);
    FUN_10008d4c0(&local_b0,&local_78);
    local_a8 = (undefined8 *)(local_b0 + 0x10 + (long)*(int *)(local_b0 + 8) * 8);
    local_a0 = (undefined8 *)(local_b0 + 0x10 + (long)*(int *)(local_b0 + 0xc) * 8);
    if (*(int *)(local_b0 + 8) != *(int *)(local_b0 + 0xc)) {
      do {
        local_98 = 1;
        uVar1 = *local_a8;
        pvVar6 = operator_new(0x30);
        FUN_1006b3be0(pvVar6,0x81,lVar2,uVar1,param_2);
        QWidget::addAction((QAction *)pQVar4);
        pvVar6 = operator_new(0x30);
        FUN_1006b3be0(pvVar6,0x82,lVar2,uVar1,param_2);
        QWidget::addAction((QAction *)this);
        local_a8 = local_a8 + 1;
      } while (local_a8 != local_a0);
    }
    local_98 = 1;
    FUN_10008c780(&local_b0);
    pQVar4 = (QMenu *)QAction::menu();
    QMenu::addMenu(pQVar4);
    pQVar4 = (QMenu *)QAction::menu();
    QMenu::addMenu(pQVar4);
  }
  pQVar8 = (QAction *)QAction::menu();
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_100691620(uVar1,0x84,lVar2);
  QWidget::addAction(pQVar8);
  pQVar8 = (QAction *)QAction::menu();
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_100691620(uVar1,0x83,lVar2);
  QWidget::addAction(pQVar8);
  QAction::menu();
  QMenu::addSeparator();
  pQVar8 = (QAction *)QAction::menu();
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_100691620(uVar1,0x8b,lVar2);
  QWidget::addAction(pQVar8);
  pQVar8 = (QAction *)QAction::menu();
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_100691620(uVar1,0x8c,lVar2);
  QWidget::addAction(pQVar8);
  pQVar8 = (QAction *)QAction::menu();
  uVar1 = FUN_1006915d0();
  lVar2 = 0;
  if ((*param_3 != 0) && (lVar2 = 0, *(int *)(*param_3 + 4) != 0)) {
    lVar2 = param_3[1];
  }
  FUN_100691620(uVar1,0x8d,lVar2);
  QWidget::addAction(pQVar8);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e5280;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1006e5280:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006e52b0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1006e52b0:
  FUN_10008c780(&local_78);
  return;
}

