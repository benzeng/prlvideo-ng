
void FUN_1005a7a50(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CAntivirusPromotionDialog","Parallels Desktop",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a7ac0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005a7ac0:
  pQVar1 = *(QString **)(param_1 + 0x10);
  QCoreApplication::translate
            ((char *)&local_38,"CAntivirusPromotionDialog",
             "Would you like to install Kaspersky Anti-Virus for Mac and get a complimentary 90-day subscription?"
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a7b21;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005a7b21:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_40,"CAntivirusPromotionDialog",
             s_Kaspersky_Anti_Virus_for_Mac_pro_101e0340a,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a7b82;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005a7b82:
  pQVar1 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_48,"CAntivirusPromotionDialog","Don\'t show again",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a7be3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005a7be3:
  pQVar1 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_50,"CAntivirusPromotionDialog","Install",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005a7c44;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005a7c44:
  pQVar1 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_58,"CAntivirusPromotionDialog","Later",0);
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

