
void FUN_100560410(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"COSXShortcutsWidget","Form",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100560480;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100560480:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_38,"COSXShortcutsWidget","Send OS X system shortcuts:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005604e1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005604e1:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate
            ((char *)&local_40,"COSXShortcutsWidget",s_Mac_OS_system_shortcuts__include_101e016de,0)
  ;
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100560542;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100560542:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate
            ((char *)&local_48,"COSXShortcutsWidget","Show and hide Parallels Desktop:",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005605a3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005605a3:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate
            ((char *)&local_50,"COSXShortcutsWidget",
             "F1, F2, etc. keys can be configured as standard function keys in OS X Keyboard preferences:"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100560604;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100560604:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_58,"COSXShortcutsWidget","Open Keyboard Preferences...",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return;
}

