
void FUN_1005807f0(long param_1,QString *param_2)

{
  QString *pQVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QCoreApplication::translate((char *)&local_48,"CEditProfilesDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100580862;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100580862:
  pQVar1 = *(QString **)(param_1 + 8);
  QCoreApplication::translate
            ((char *)&local_50,"CEditProfilesDialog","Add or remove keyboard and mouse profiles.",0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005808c3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005808c3:
  plVar4 = (long *)QTreeWidget::headerItem();
  QCoreApplication::translate((char *)&local_58,"CEditProfilesDialog","Profiles",0);
  pcVar2 = *(code **)(*plVar4 + 0x20);
  QVariant::QVariant(&local_40,&local_58);
  (*pcVar2)(plVar4,0,0,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058094b;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10058094b:
  puVar3 = PTR_shared_null_1021e1288;
  QAbstractButton::setText(*(QString **)(param_1 + 0x48));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100580993;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100580993:
  QAbstractButton::setText(*(QString **)(param_1 + 0x50));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005809d4;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_1005809d4:
  QAbstractButton::setText(*(QString **)(param_1 + 0x58));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100580a15;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100580a15:
  QAbstractButton::setText(*(QString **)(param_1 + 0x60));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100580a56;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100580a56:
  QAbstractButton::setText(*(QString **)(param_1 + 0x68));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100580a97;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
LAB_100580a97:
  QAbstractButton::setText(*(QString **)(param_1 + 0x70));
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      UNLOCK();
      if (*(int *)puVar3 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)puVar3,2,8);
  }
  return;
}

