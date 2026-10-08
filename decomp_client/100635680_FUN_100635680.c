
void FUN_100635680(long param_1,QString *param_2)

{
  QString *pQVar1;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::translate((char *)&local_30,"CRenewLicenseDialog","Dialog",0);
  QWidget::setWindowTitle(param_2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006356f0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006356f0:
  pQVar1 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate
            ((char *)&local_38,"CRenewLicenseDialog","Do not show this message again",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100635751;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100635751:
  pQVar1 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_40,"CRenewLicenseDialog","<b>!</b>",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006357b2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006357b2:
  pQVar1 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_48,"CRenewLicenseDialog","No internet connection.",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100635813;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100635813:
  pQVar1 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_50,"CRenewLicenseDialog","<b>Grace period expires on %1.</b>",0);
  QLabel::setText(pQVar1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100635874;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100635874:
  pQVar1 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate
            ((char *)&local_58,"CRenewLicenseDialog",
             "Your license has expired. You can continue using Parallels Workstation during the grace period. To be able to use Parallels Workstation after the grace period is over, you need to purchase a license renewal. If you have already done so, click Renew License."
             ,0);
  QLabel::setText(pQVar1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006358d5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006358d5:
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  QLabel::setText(*(QString **)(param_1 + 0x80));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100635920;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100635920:
  pQVar1 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate((char *)&local_68,"CRenewLicenseDialog","Check License",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100635984;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100635984:
  pQVar1 = *(QString **)(param_1 + 0xa8);
  QCoreApplication::translate((char *)&local_70,"CRenewLicenseDialog","Close",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006359e8;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006359e8:
  pQVar1 = *(QString **)(param_1 + 0xb0);
  QCoreApplication::translate((char *)&local_78,"CRenewLicenseDialog","Enter Activation Key",0);
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      UNLOCK();
      if (*(int *)local_78 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
  return;
}

