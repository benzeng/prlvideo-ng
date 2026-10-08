
void FUN_1007d6c70(long param_1,undefined8 *param_2)

{
  QString this;
  int iVar1;
  QArrayData *pQVar2;
  QDateTime local_148;
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  CSbaInstallation local_110 [216];
  QArrayData *local_38;
  undefined1 local_29;
  
  this.field0_0x0 = (QTypedArrayData<unsigned_short> *)(param_1 + 0x140);
  CSbaInstallation::getType();
  iVar1 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),"no data",
                     0xffffffff,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6cf2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007d6cf2:
  if (iVar1 != 0) {
    FUN_1007cc540(param_1);
    CSbaInstallation::CSbaInstallation(local_110);
    CSbaInstallation::operator=((CSbaInstallation *)this.field0_0x0,local_110);
    CSbaInstallation::~CSbaInstallation(local_110);
  }
  QCoreApplication::applicationDirPath();
  local_120 = (QArrayData *)*param_2;
  if (1 < *(int *)local_120 + 1U) {
    LOCK();
    *(int *)local_120 = *(int *)local_120 + 1;
    local_29 = *(int *)local_120 != 0;
    UNLOCK();
  }
  CSbaInstallation::setType(this);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_29 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6d90;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_1007d6d90:
  local_130 = local_118;
  if (1 < *(int *)local_118 + 1U) {
    LOCK();
    *(int *)local_118 = *(int *)local_118 + 1;
    local_29 = *(int *)local_118 != 0;
    UNLOCK();
  }
  FUN_1007d71f0(&local_128,&local_130);
  CSbaInstallation::setThisPath(this);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6e07;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1007d6e07:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6e3d;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1007d6e3d:
  local_138 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
  CSbaInstallation::setThisVer(this);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6e9a;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_1007d6e9a:
  QDateTime::currentDateTime();
  pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_140);
  CSbaInstallation::setCreationDateTime(this);
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_29 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6f1d;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_1007d6f1d:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007d6f53;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1007d6f53:
  QDateTime::~QDateTime(&local_148);
  FUN_1007cc540(param_1);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      UNLOCK();
      if (*(int *)local_118 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_118,2,8);
  }
  return;
}

