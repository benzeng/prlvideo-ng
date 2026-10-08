
void FUN_1009a5630(long param_1)

{
  QString *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar1 = *(QString **)(param_1 + 0x80);
  QCoreApplication::translate((char *)&local_30,"WPDestinationPath","Name:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a56a4;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009a56a4:
  pQVar1 = *(QString **)(param_1 + 0xa0);
  QCoreApplication::translate((char *)&local_38,"WPDestinationPath","Location:",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a5708;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009a5708:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_40,"WPDestinationPath","Refresh",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

