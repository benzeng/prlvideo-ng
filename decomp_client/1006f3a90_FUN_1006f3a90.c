
void FUN_1006f3a90(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char *pcVar6;
  size_t sVar7;
  CAppUpdateLogic *this;
  undefined8 extraout_RDX;
  int iVar8;
  bool bVar9;
  QVariant local_98;
  QVariant local_88;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  undefined1 local_50 [12];
  QString local_40;
  undefined1 local_31;
  
  QMetaObject::indexOfEnumerator((char *)&PTR_PTR_1022261c0);
  local_50 = QMetaObject::enumerator(0x22261c0);
  pcVar6 = (char *)QMetaEnum::valueToKey((int)local_50);
  iVar8 = -1;
  if (pcVar6 != (char *)0x0) {
    sVar7 = _strlen(pcVar6);
    iVar8 = (int)sVar7;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar6,iVar8);
  pcVar6 = (char *)QDeclarativeView::rootObject();
  QVariant::QVariant(&local_60,&local_40);
  QObject::setProperty(pcVar6,(QVariant *)"state");
  QVariant::~QVariant(&local_60);
  if (*(int *)(param_1 + 0x28) != 1) goto LAB_1006f3c8e;
  CProductUpdateInfo::getMajorVersionFromFileName(&local_68);
  pQVar1 = *(QString **)(param_1 + 0x40);
  FUN_1001c7700(&local_78,PTR_s_Upgrade_to___PRODUCT_NAME__1_102270998);
  QString::arg(&local_70,&local_78,&local_68,0,0x20);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f3bb8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006f3bb8:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f3be8;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006f3be8:
  pcVar6 = (char *)QDeclarativeView::rootObject();
  QVariant::QVariant(&local_88,(QString *)(param_1 + 0x90));
  QObject::setProperty(pcVar6,(QVariant *)"activationKey");
  QVariant::~QVariant(&local_88);
  pcVar6 = (char *)QDeclarativeView::rootObject();
  QVariant::QVariant(&local_98,&local_68);
  QObject::setProperty(pcVar6,(QVariant *)"upgradeMajorVersion");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f3c8e;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1006f3c8e:
  puVar4 = PTR_m_instance_1021e1340;
  plVar2 = *(long **)(param_1 + 0x38);
  pcVar3 = *(code **)(*plVar2 + 0x68);
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(long *)PTR_m_instance_1021e1340 == 0) {
      this = operator_new(0x18);
      CAppUpdateLogic::CAppUpdateLogic(this);
      *(CAppUpdateLogic **)puVar4 = this;
      DAT_102274b28 = 1;
    }
    bVar5 = CAppUpdateLogic::isOnAppStart();
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = 0;
  }
  (*pcVar3)(plVar2,bVar5);
  bVar9 = *(int *)(param_1 + 0x28) == 1;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x68))
            (*(long **)(param_1 + 0x40),bVar9,extraout_RDX,bVar9);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

