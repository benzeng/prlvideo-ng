
undefined8 * FUN_1009e3350(undefined8 *param_1)

{
  QString *pQVar1;
  undefined8 uVar2;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QDateTime local_28;
  QString local_20;
  undefined1 local_11;
  
  FUN_1009e2e50(&local_20);
  if (*(int *)(local_20.field0_0x0 + 4) == 0) {
    uVar2 = QString::fromAscii_helper("",0);
    *param_1 = uVar2;
    goto LAB_1009e364b;
  }
  QDateTime::currentDateTime();
  local_38 = (QArrayData *)QString::fromAscii_helper("/%1",3);
  local_40 = (QArrayData *)QString::fromAscii_helper("PrlProblemReport",0x10);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  pQVar1 = (QString *)QString::append(&local_20);
  QString::operator=(&local_20,pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3408;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1009e3408:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3438;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009e3438:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3468;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009e3468:
  local_58 = (QArrayData *)QString::fromAscii_helper("-%1.%2",6);
  local_68 = (QArrayData *)QString::fromAscii_helper("yyyy.MM.dd-hh.mm.ss.zzz",0x17);
  QDateTime::toString(&local_60);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  local_70 = (QArrayData *)QString::fromAscii_helper("xml",3);
  QString::arg(&local_48,&local_50,&local_70,0,0x20);
  QString::append(&local_20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3527;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009e3527:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3557;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1009e3557:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3587;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009e3587:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_11 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e35b7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1009e35b7:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e35e7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1009e35e7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009e3617;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009e3617:
  *param_1 = local_20.field0_0x0;
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  QDateTime::~QDateTime(&local_28);
LAB_1009e364b:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return param_1;
}

