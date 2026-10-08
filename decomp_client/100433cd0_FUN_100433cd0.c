
void FUN_100433cd0(long param_1)

{
  QObject *pQVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QAbstractTableModel *this;
  QStyledItemDelegate *this_00;
  QModelIndex *pQVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100434070(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  WidgetUtils::setAddRemoveButtonSkins
            (*(CImageButton **)(*(long *)(param_1 + 0x18) + 0x28),
             *(CImageButton **)(*(long *)(param_1 + 0x18) + 0x30));
  uVar5 = FUN_100152280();
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  lVar6 = FUN_1001547d0(uVar5);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100433d63;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100433d63:
  if (lVar6 != 0) {
    pQVar1 = *(QObject **)(*(long *)(param_1 + 0x18) + 0x10);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar3 = CVmCommonOptions::getOsVersion();
    iVar4 = FUN_10015aae0(lVar6);
    WidgetUtils::Adjuster::adjustWidgetText(pQVar1,iVar3,iVar4);
  }
  this = operator_new(0x18);
  lVar6 = *(long *)(param_1 + 0x120);
  QAbstractTableModel::QAbstractTableModel(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021f24b8;
  *(long *)(this + 0x10) = lVar6 + 0xa8;
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
  (**(code **)(*plVar2 + 0x1c0))(plVar2,this);
  this_00 = operator_new(0x10);
  QStyledItemDelegate::QStyledItemDelegate(this_00,*(QObject **)(*(long *)(param_1 + 0x18) + 0x18));
  *(undefined ***)this_00 = &PTR_FUN_1021f23d0;
  QAbstractItemView::setItemDelegate(*(QAbstractItemDelegate **)(*(long *)(param_1 + 0x18) + 0x18));
  lVar6 = *(long *)(*(long *)(param_1 + 0x120) + 0xa8);
  pQVar7 = *(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18);
  if (*(int *)(lVar6 + 8) < *(int *)(lVar6 + 0xc)) {
    iVar3 = 0;
    do {
      local_70 = 0xffffffff;
      local_6c = 0xffffffff;
      local_60 = 0;
      local_68 = 0;
      (**(code **)(*(long *)this + 0x60))(local_58,this,iVar3,3,&local_70);
      QAbstractItemView::openPersistentEditor(pQVar7);
      iVar3 = iVar3 + 1;
      lVar6 = *(long *)(*(long *)(param_1 + 0x120) + 0xa8);
      pQVar7 = *(QModelIndex **)(*(long *)(param_1 + 0x18) + 0x18);
    } while (iVar3 < *(int *)(lVar6 + 0xc) - *(int *)(lVar6 + 8));
  }
  uVar5 = QTreeView::header();
  QHeaderView::setSectionResizeMode(uVar5,0,3);
  QHeaderView::setSectionResizeMode(uVar5,1,1);
  QHeaderView::setSectionResizeMode(uVar5,2,1);
  QHeaderView::setSectionResizeMode(uVar5,3,3);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),0));
  return;
}

