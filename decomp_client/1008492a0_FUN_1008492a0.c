
void FUN_1008492a0(long param_1,int param_2,uint param_3,undefined8 *param_4)

{
  QDateTime *this;
  undefined1 uVar1;
  undefined4 uVar2;
  QDateTime local_50;
  QDateTime local_48;
  QDateTime local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_2 != 1) {
    return;
  }
  if (0xd < param_3) {
    return;
  }
  this = (QDateTime *)*param_4;
  switch(param_3) {
  case 0:
    CDownloadedKeyInfo::getProductName();
    QString::operator=((QString *)this,&local_28);
    if (*(int *)local_28.field0_0x0 == -1) {
      return;
    }
    local_38.field0_0x0 = local_28.field0_0x0;
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1008493b5;
  case 1:
    CDownloadedKeyInfo::getKey();
    QString::operator=((QString *)this,&local_30);
    if (*(int *)local_30.field0_0x0 == -1) {
      return;
    }
    local_38.field0_0x0 = local_30.field0_0x0;
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1008493b5;
  case 2:
    CDownloadedKeyInfo::getHwId();
    QString::operator=((QString *)this,&local_38);
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
LAB_1008493b5:
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    break;
  case 3:
    uVar1 = CDownloadedKeyInfo::isAutoRenewable();
    goto LAB_1008494bb;
  case 4:
    CDownloadedKeyInfo::getRegistrationDate();
    QDateTime::operator=(this,&local_40);
    QDateTime::~QDateTime(&local_40);
    break;
  case 5:
    CDownloadedKeyInfo::getGracePeriodStartDate();
    QDateTime::operator=(this,&local_48);
    QDateTime::~QDateTime(&local_48);
    break;
  case 6:
    CDownloadedKeyInfo::getExpirationDate();
    QDateTime::operator=(this,&local_50);
    QDateTime::~QDateTime(&local_50);
    break;
  case 7:
    uVar2 = CDownloadedKeyInfo::getLicenseEdition();
    *(undefined4 *)&(this->field0_0x0).field0_0x0 = uVar2;
    break;
  case 8:
    uVar2 = CDownloadedKeyInfo::getLicenseProduct();
    *(undefined4 *)&(this->field0_0x0).field0_0x0 = uVar2;
    break;
  case 9:
    uVar2 = CDownloadedKeyInfo::getLicenseVersion();
    *(undefined4 *)&(this->field0_0x0).field0_0x0 = uVar2;
    break;
  case 10:
    uVar1 = CDownloadedKeyInfo::isUpgrade();
    goto LAB_1008494bb;
  case 0xb:
    uVar1 = CDownloadedKeyInfo::isActiveHere();
    goto LAB_1008494bb;
  case 0xc:
    uVar1 = CDownloadedKeyInfo::isTrial();
    goto LAB_1008494bb;
  case 0xd:
    uVar1 = *(undefined1 *)(param_1 + 0x100);
LAB_1008494bb:
    *(undefined1 *)&(this->field0_0x0).field0_0x0 = uVar1;
  }
  return;
}

