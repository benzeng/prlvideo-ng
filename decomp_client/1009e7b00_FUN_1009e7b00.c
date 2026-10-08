
void FUN_1009e7b00(long param_1,QString param_2)

{
  undefined *puVar1;
  char cVar2;
  QFileInfo local_68 [8];
  QArrayData *local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  CRepScreenShot::getData();
  if (*(int *)(local_28 + 4) != 0) {
    FUN_100df99c0("","prl_problem_report_utils",0,"cannot append element with value field!");
    goto LAB_1009e7dd6;
  }
  CRepScreenShot::getName();
  cVar2 = QFile::exists(&local_30);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_problem_report_utils",0,"Cannot find file pass to append");
  }
  else {
    local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
    local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_40);
    QFileInfo::QFileInfo(local_58,&local_30);
    QFileInfo::fileName();
    local_38.field0_0x0 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_38);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e7c12;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1009e7c12:
    QFileInfo::~QFileInfo(local_58);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e7c4b;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1009e7c4b:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e7c7b;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1009e7c7b:
    cVar2 = QFile::copy(&local_30,&local_38);
    if (cVar2 == '\0') {
      FUN_100df99c0("","prl_problem_report_utils",0,"Cannot copy file to temp dir");
    }
    else {
      QFileInfo::QFileInfo(local_68,&local_30);
      QFileInfo::fileName();
      CRepScreenShot::setName(param_2);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_19 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009e7ce6;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1009e7ce6:
      QFileInfo::~QFileInfo(local_68);
      puVar1 = PTR_shared_null_1021e1288;
      CRepScreenShot::setData(param_2);
      if (*(int *)puVar1 != -1) {
        if (*(int *)puVar1 != 0) {
          LOCK();
          *(int *)puVar1 = *(int *)puVar1 + -1;
          local_19 = *(int *)puVar1 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009e7d76;
        }
        QArrayData::deallocate((QArrayData *)puVar1,2,8);
      }
    }
LAB_1009e7d76:
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009e7da6;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1009e7da6:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009e7dd6;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1009e7dd6:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

