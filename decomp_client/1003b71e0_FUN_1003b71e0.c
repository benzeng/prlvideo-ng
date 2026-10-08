
long FUN_1003b71e0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  QString *pQVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long unaff_R15;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("Hardware.Hdd[",0xd);
  pQVar3 = (QString *)QString::remove(&local_38,&local_40,1);
  QString::operator=(&local_38,pQVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003b726d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003b726d:
  local_50 = (QArrayData *)QString::fromAscii_helper("]",1);
  QString::indexOf(&local_38,&local_50,0,1);
  QString::left((int)&local_48);
  QString::operator=(&local_38,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003b72e2;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1003b72e2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003b7312;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003b7312:
  lVar4 = CVmConfiguration::getVmHardwareList();
  local_70 = *(Data **)(lVar4 + 0x1b0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar5 = (long)*(int *)(local_70 + 8);
      lVar4 = *(long *)(lVar4 + 0x1b0);
      if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_70 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_70 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    iVar7 = 1;
    do {
      local_58 = 1;
      unaff_R15 = *(long *)local_68;
      iVar1 = *(int *)(unaff_R15 + 0x68);
      iVar2 = QString::toInt((bool *)&local_38,0);
      if (iVar1 == iVar2) goto LAB_1003b73f9;
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  iVar7 = 2;
LAB_1003b73f9:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003b741f;
    }
    QListData::dispose(local_70);
  }
LAB_1003b741f:
  if (iVar7 == 2) {
    unaff_R15 = 0;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return unaff_R15;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return unaff_R15;
}

