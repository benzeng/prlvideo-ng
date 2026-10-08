
void FUN_10054a4f0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  Data *pDVar6;
  QVariant local_68;
  Data_conflict local_58;
  QString local_50 [2];
  Data *local_40;
  undefined1 local_31;
  
  QItemSelection::indexes();
  iVar3 = *(int *)(local_40 + 8);
  iVar1 = **(int **)(local_40 + (long)iVar3 * 8 + 0x10);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054a593;
      iVar3 = *(int *)(local_40 + 8);
    }
    iVar2 = *(int *)(local_40 + 0xc);
    if (iVar2 != iVar3) {
      lVar5 = (long)iVar3 * 8 + (long)iVar2 * -8;
      pDVar6 = local_40 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar6 != (void *)0x0) {
          operator_delete(*(void **)pDVar6);
        }
        pDVar6 = pDVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_40);
  }
LAB_10054a593:
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (*(long *)(lVar5 + 0x10 + ((long)*(int *)(lVar5 + 8) + (long)iVar1) * 8) == 0) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  QSettings::QSettings((QSettings *)local_50,(QObject *)0x0);
  local_58.field7 = QString::fromAscii_helper("User Preferences/Network/Current network",0x28);
  QVariant::QVariant(&local_68,*(int *)(param_1 + 0x3c));
  QSettings::setValue(local_50,(QVariant *)&local_58);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58.field15 != -1) {
    if (*(int *)local_58.field15 != 0) {
      LOCK();
      *(int *)local_58.field15 = *(int *)local_58.field15 + -1;
      local_31 = *(int *)local_58.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10054a62b;
    }
    QArrayData::deallocate((QArrayData *)local_58.field15,2,8);
  }
LAB_10054a62b:
  QSettings::~QSettings((QSettings *)local_50);
  lVar5 = CVirtualNetwork::getHostOnlyNetwork();
  uVar4 = 0xffffffff;
  if ((lVar5 != 0) && (lVar5 = CHostOnlyNetwork::getParallelsAdapter(), lVar5 != 0)) {
    uVar4 = CParallelsAdapter::getPrlAdapterIndex();
  }
  FUN_10054a6f0(param_1,uVar4);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
  return;
}

