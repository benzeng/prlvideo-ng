
void FUN_100431600(long param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  Data *pDVar8;
  QVariant local_188;
  QVariant local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [24];
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [24];
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [24];
  QString local_d8;
  QString local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  QVariant local_98;
  Data *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar5 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar6 = FUN_1001547d0(uVar5,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100431673;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100431673:
  if (lVar6 == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_10015a320(lVar6);
  CDispUser::getUserWorkspace();
  CDispUserWorkspace::getUserHomeFolder();
  QFileDialog::getExistingDirectory(&local_40,uVar5,&local_48,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004316f1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004316f1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100431721;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100431721:
  if (*(int *)(local_40.field0_0x0 + 4) == 0) goto LAB_100431bac;
  cVar3 = FUN_100435040(param_1,&local_40);
  if (cVar3 != '\0') {
    plVar7 = (long *)QAbstractItemView::model();
    local_80 = 0xffffffff;
    local_7c = 0xffffffff;
    local_70 = 0;
    local_78 = 0;
    (**(code **)(*plVar7 + 0x60))(local_68,plVar7,0,2,&local_80);
    plVar7 = (long *)QAbstractItemView::model();
    pcVar2 = *(code **)(*plVar7 + 0x148);
    QVariant::QVariant(&local_98,&local_40);
    (*pcVar2)(&local_88,plVar7,local_68,2,&local_98,1,0x22);
    QVariant::~QVariant(&local_98);
    QAbstractItemView::setCurrentIndex(*(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18));
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100431bac;
      }
      iVar1 = *(int *)(local_88 + 0xc);
      if (iVar1 != *(int *)(local_88 + 8)) {
        lVar6 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
        pDVar8 = local_88 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_88);
    }
    goto LAB_100431bac;
  }
  plVar7 = (long *)QAbstractItemView::model();
  local_b0 = 0xffffffff;
  local_ac = 0xffffffff;
  local_a0 = 0;
  local_a8 = 0;
  uVar4 = (**(code **)(*plVar7 + 0x78))(plVar7,&local_b0);
  plVar7 = (long *)QAbstractItemView::model();
  local_c8 = 0xffffffff;
  local_c4 = 0xffffffff;
  local_b8 = 0;
  local_c0 = 0;
  cVar3 = (**(code **)(*plVar7 + 0xf0))(plVar7,uVar4,1,&local_c8);
  if (cVar3 == '\0') goto LAB_100431bac;
  MacUtils::getLocalizedFileName(&local_d0);
  FUN_100430ab0(&local_d8,&local_d0,*(long *)(param_1 + 0x120) + 0xa8);
  QString::operator=(&local_d0,&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_29 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100431990;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100431990:
  plVar7 = (long *)QAbstractItemView::model();
  local_108 = 0xffffffff;
  local_104 = 0xffffffff;
  local_f8 = 0;
  local_100 = 0;
  (**(code **)(*plVar7 + 0x60))(local_f0,plVar7,uVar4,1,&local_108);
  plVar7 = (long *)QAbstractItemView::model();
  local_138 = 0xffffffff;
  local_134 = 0xffffffff;
  local_128 = 0;
  local_130 = 0;
  (**(code **)(*plVar7 + 0x60))(local_120,plVar7,uVar4,2,&local_138);
  plVar7 = (long *)QAbstractItemView::model();
  local_168 = 0xffffffff;
  local_164 = 0xffffffff;
  local_158 = 0;
  local_160 = 0;
  (**(code **)(*plVar7 + 0x60))(local_150,plVar7,uVar4,3,&local_168);
  plVar7 = (long *)QAbstractItemView::model();
  pcVar2 = *(code **)(*plVar7 + 0x98);
  QVariant::QVariant(&local_178,&local_40);
  (*pcVar2)(plVar7,local_120,&local_178,2);
  QVariant::~QVariant(&local_178);
  plVar7 = (long *)QAbstractItemView::model();
  pcVar2 = *(code **)(*plVar7 + 0x98);
  QVariant::QVariant(&local_188,&local_d0);
  (*pcVar2)(plVar7,local_f0,&local_188,2);
  QVariant::~QVariant(&local_188);
  QAbstractItemView::openPersistentEditor(*(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18));
  QTreeView::resizeColumnToContents((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
  QAbstractItemView::setCurrentIndex(*(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18));
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100431bac;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100431bac:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

