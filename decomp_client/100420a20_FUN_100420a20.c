
void FUN_100420a20(QSize *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  Data *pDVar3;
  QMapNodeBase *pQVar4;
  char cVar5;
  undefined8 uVar6;
  QSize QVar7;
  QSize QVar8;
  QSize QVar9;
  QString *pQVar10;
  QString QVar11;
  long *plVar12;
  long lVar13;
  void *pvVar14;
  int iVar15;
  Data *pDVar16;
  int iVar17;
  undefined4 local_bc;
  Data *local_b8;
  undefined4 local_ac;
  Data *local_a8;
  QArrayData *local_a0;
  QMapNodeBase *local_98;
  Data *local_90;
  Data *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined4 local_5c;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100426bc0(param_1[0xc],param_1);
  FUN_1001c72e0(&local_40);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420a8b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100420a8b:
  uVar6 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QVar7 = (QSize)FUN_1001547d0(uVar6,&local_48);
  QVar8.field0_0x0 = 0;
  QVar8.field1_0x4 = 0;
  if (QVar7 != (QSize)0x0) {
    QVar8 = (QSize)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)QVar7);
  }
  QVar9 = param_1[0x12];
  if (QVar9 != QVar8) {
    if (QVar8 != (QSize)0x0) {
      LOCK();
      *(int *)QVar8 = *(int *)QVar8 + 1;
      local_31 = *(int *)QVar8 != 0;
      UNLOCK();
      QVar9 = param_1[0x12];
    }
    if (QVar9 != (QSize)0x0) {
      LOCK();
      *(int *)QVar9 = *(int *)QVar9 + -1;
      local_31 = *(int *)QVar9 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (param_1[0x12] != (QSize)0x0)) {
        operator_delete((void *)param_1[0x12]);
      }
    }
    param_1[0x12] = QVar8;
    param_1[0x13] = QVar7;
  }
  if (QVar8 != (QSize)0x0) {
    LOCK();
    *(int *)QVar8 = *(int *)QVar8 + -1;
    local_31 = *(int *)QVar8 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete((void *)QVar8);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420b71;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100420b71:
  puVar2 = PTR_s_deviceType_1021f1e48;
  if (param_1[0x12] == (QSize)0x0) {
    return;
  }
  if (*(int *)((long)param_1[0x12] + 4) == 0) {
    return;
  }
  if (param_1[0x13] == (QSize)0x0) {
    return;
  }
  pcVar1 = *(char **)((long)param_1[0xc] + 0x40);
  local_5c = 6;
  if (DAT_102273e70 == 0) {
    DAT_102273e70 = FUN_1003deea0("PRL_DEVICE_TYPE",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_58,DAT_102273e70,&local_5c,0);
  QObject::setProperty(pcVar1,(QVariant *)puVar2);
  QVariant::~QVariant(&local_58);
  puVar2 = PTR_s_remoteDeviceSelector_1021f1e50;
  pcVar1 = *(char **)((long)param_1[0xc] + 0x40);
  QVariant::QVariant(&local_70,false);
  QObject::setProperty(pcVar1,(QVariant *)puVar2);
  QVariant::~QVariant(&local_70);
  QVar7.field0_0x0 = 0;
  QVar7.field1_0x4 = 0;
  if ((param_1[0x12] != (QSize)0x0) &&
     (QVar7.field0_0x0 = 0, QVar7.field1_0x4 = 0, *(int *)((long)param_1[0x12] + 4) != 0)) {
    QVar7 = param_1[0x13];
  }
  FUN_10015a320(QVar7);
  CDispUser::getUserWorkspace();
  CDispUserWorkspace::getUserHomeFolder();
  pQVar10 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
  CPrlFileDevSelector::setServerUserHomeFolder(pQVar10);
  QVar11.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)CPrlFileDevSelectorWidget::getFileDevSelector();
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Hard_disk_images____hdd___VMware_10226f8d0);
  CPrlFileDevSelector::setFileFilterString(QVar11);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420d01;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100420d01:
  QWidget::setFixedWidth((int)*(undefined8 *)((long)param_1[0xc] + 0x40));
  FUN_100422230(param_1,1);
  QWidget::setFixedWidth((int)*(undefined8 *)((long)param_1[0xc] + 0x58));
  QWidget::setAttribute(*(undefined8 *)((long)param_1[0xc] + 0xb0),0x5a,1);
  QDoubleSpinBox::setRange(DAT_102273e60,DAT_100e1e228);
  puVar2 = PTR_shared_null_1021e15e8;
  local_88 = (Data *)PTR_shared_null_1021e15e8;
  local_90 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1003ba890(DAT_102273e60,&local_88,&local_90);
  if (0.0 <= DAT_102273e60) {
    iVar17 = (int)(DAT_102273e60 + DAT_100e110f0);
  }
  else {
    iVar17 = (int)((DAT_102273e60 - (double)(int)(DAT_100e110e0 + DAT_102273e60)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + DAT_102273e60);
  }
  if (0.0 <= DAT_102273e58) {
    iVar15 = (int)(DAT_102273e58 + DAT_100e110f0);
  }
  else {
    iVar15 = (int)((DAT_102273e58 - (double)(int)(DAT_100e110e0 + DAT_102273e58)) + DAT_100e110f0) +
             (int)(DAT_100e110e0 + DAT_102273e58);
  }
  local_98 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  CMemorySlider::initialize
            (*(undefined8 *)((long)param_1[0xc] + 0x60),iVar17,iVar15,0x20,0xffffffff,0xffffffff,4,
             &local_88,&local_90,&local_98);
  pQVar4 = local_98;
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420ebc;
    }
    if (*(long *)(local_98 + 0x10) != 0) {
      QMapDataBase::freeTree(local_98,(int)*(long *)(local_98 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100420ebc:
  QWidget::hide();
  QVar9.field0_0x0 = 0;
  QVar9.field1_0x4 = 0;
  if ((param_1[0x12] != (QSize)0x0) &&
     (QVar9.field0_0x0 = 0, QVar9.field1_0x4 = 0, *(int *)((long)param_1[0x12] + 4) != 0)) {
    QVar9 = param_1[0x13];
  }
  cVar5 = FUN_100111f20(QVar9,param_1[0x11]);
  if ((cVar5 == '\0') || (cVar5 = FUN_100d80630(1), cVar5 != '\0')) {
    QComboBox::removeItem((int)*(undefined8 *)((long)param_1[0xc] + 0x28));
  }
  QVar7 = (QSize)(**(code **)((long)*param_1 + 0x78))(param_1);
  param_1[0x18] = QVar7;
  QWidget::setFixedSize(param_1);
  FUN_100422590(param_1);
  plVar12 = (long *)QDialogButtonBox::button(*(undefined8 *)((long)param_1[0xc] + 0xd8),0x400);
  (**(code **)(*plVar12 + 0x68))(plVar12,1);
  QWidget::setEnabled(SUB81(*(undefined8 *)((long)param_1[0xc] + 8),0));
  QProgressBar::setValue((int)*(undefined8 *)((long)param_1[0xc] + 200));
  (**(code **)(**(long **)((long)param_1[0xc] + 200) + 0x68))
            (*(long **)((long)param_1[0xc] + 200),0);
  QDialog::setSizeGripEnabled(SUB81(param_1,0));
  local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
  lVar13 = qt_qFindChild_helper(param_1,&local_a0,PTR_staticMetaObject_1021e15f0,1);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042101e;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10042101e:
  if (lVar13 != 0) {
    QWidget::setFixedHeight((int)lVar13);
  }
  pvVar14 = operator_new(0x18);
  uVar6 = *(undefined8 *)((long)param_1[0xc] + 0x28);
  local_a8 = (Data *)puVar2;
  local_ac = 0x1f;
  FUN_100138150(&local_a8,&local_ac);
  FUN_100137ad0(pvVar14,uVar6,&local_a8);
  pDVar3 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004210ef;
    }
    iVar17 = *(int *)(local_a8 + 0xc);
    if (iVar17 != *(int *)(local_a8 + 8)) {
      lVar13 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar17 * -8;
      pDVar16 = local_a8 + (long)iVar17 * 8 + 8;
      do {
        if (*(void **)pDVar16 != (void *)0x0) {
          operator_delete(*(void **)pDVar16);
        }
        pDVar16 = pDVar16 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1004210ef:
  pvVar14 = operator_new(0x18);
  uVar6 = *(undefined8 *)((long)param_1[0xc] + 0x40);
  local_b8 = (Data *)puVar2;
  local_bc = 0x1f;
  FUN_100138150(&local_b8,&local_bc);
  FUN_100137ad0(pvVar14,uVar6,&local_b8);
  pDVar3 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004211af;
    }
    iVar17 = *(int *)(local_b8 + 0xc);
    if (iVar17 != *(int *)(local_b8 + 8)) {
      lVar13 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar17 * -8;
      pDVar16 = local_b8 + (long)iVar17 * 8 + 8;
      do {
        if (*(void **)pDVar16 != (void *)0x0) {
          operator_delete(*(void **)pDVar16);
        }
        pDVar16 = pDVar16 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_1004211af:
  FUN_1004227c0(param_1,0,0xffffffff);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004211ea;
    }
    QListData::dispose(local_90);
  }
LAB_1004211ea:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421210;
    }
    QListData::dispose(local_88);
  }
LAB_100421210:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

