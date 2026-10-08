
void FUN_100660030(CDeclarativeWizardPage *param_1,CAbstractWizardModel *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  QArrayData *local_68;
  long local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  CDeclarativeWizardPage::CDeclarativeWizardPage(param_1,param_2,7,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1022237f0;
  uVar1 = QString::fromAscii_helper("desktop_full",0xc);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_1022237b0,0x1e0b997);
  FUN_1001c72e0(&local_50);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(uint *)local_48 + 1) {
    LOCK();
    *(uint *)local_48 = *(uint *)local_48 + 1;
    local_21 = *(uint *)local_48 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  local_38 = (QArrayData *)local_40.field0_0x0;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_21 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_40.field0_0x0 + 4);
  if ((1 < *(uint *)local_40.field0_0x0) ||
     ((*(uint *)(local_40.field0_0x0 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_38 + 4);
  }
  *(uint *)(local_38 + 4) = uVar2 + 1;
  *(undefined2 *)(local_38 + (long)(int)uVar2 * 2 + *(long *)(local_38 + 0x10)) = 0x20;
  *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10)) =
       0;
  QString::number((int)&local_58,0xc);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  QString::append(&local_30);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100660193;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100660193:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006601c3;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006601c3:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006601f3;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006601f3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100660223;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100660223:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100660253;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100660253:
  CAbstractWizardPage::setTitle((QString *)param_1);
  uVar1 = FUN_100748240();
  local_68 = (QArrayData *)QString::fromAscii_helper("desktop.mac",0xb);
  uVar1 = FUN_100748290(uVar1,&local_68);
  QObject::connect(&local_60,uVar1,"2stateChanged(WebStore::CCatalogModel::State)",param_1,
                   "1onCatalogStateChanged(WebStore::CCatalogModel::State)",0);
  if (local_60 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006602f1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006602f1:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

