
undefined8 * FUN_10061dc10(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QFileInfo local_38 [8];
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_38,param_2);
  cVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_38);
  if (cVar1 == '\0') {
    uVar3 = QString::fromAscii_helper("",0);
    *param_1 = uVar3;
    return param_1;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_48.field0_0x0 = param_2->field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_21 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  local_40.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_21 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xa52986);
  QString::append(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061dcef;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10061dcef:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061dd1f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10061dd1f:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10061dd4f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10061dd4f:
  QFileInfo::QFileInfo(local_58,&local_40);
  cVar1 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_58);
  if (cVar1 == '\0') {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QDir::QDir((QDir *)&local_60,&local_68);
    cVar1 = QDir::mkpath(&local_60);
    QDir::~QDir((QDir *)&local_60);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10061ddd4;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10061ddd4:
    if (cVar1 == '\0') {
      uVar3 = QString::fromAscii_helper("",0);
      *param_1 = uVar3;
      goto LAB_10061deaa;
    }
  }
  uVar2 = QFile::permissions(&local_40);
  if (((uVar2 & 0x777) != 0x777) &&
     (cVar1 = QFile::setPermissions(&local_40,uVar2 | 0x777), cVar1 == '\0')) {
    QString::toUtf8();
    FUN_1008e3970("","prl_problem_report_utils",0,"Failed  to set write permissions to \'%s\'",
                  local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10061de6c;
      }
      QArrayData::deallocate(local_70,1,8);
    }
  }
LAB_10061de6c:
  *param_1 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
LAB_10061deaa:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

