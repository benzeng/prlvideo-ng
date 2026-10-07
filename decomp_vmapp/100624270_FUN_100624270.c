
void FUN_100624270(CRepSystemLog *param_1,QString param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  QString local_98;
  QFileInfo local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  long local_78 [2];
  QArrayData *local_68;
  QString local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  CRepSystemLog::getName();
  QFileInfo::QFileInfo(local_58,&local_60);
  QFileInfo::fileName();
  local_38.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_29 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100624342;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100624342:
  QFileInfo::~QFileInfo(local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10062437b;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10062437b:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006243ab;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006243ab:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006243db;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006243db:
  if (param_2.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
    QFile::remove(&local_38);
    goto LAB_100624667;
  }
  CRepSystemLog::getData();
  if (*(int *)(local_68 + 4) == 0) {
    FUN_1008e3970("","prl_problem_report_utils",0,"cannot append element with value field!");
  }
  else {
    QFile::QFile((QFile *)local_78,&local_38);
    cVar2 = QFile::exists(&local_38);
    cVar3 = QFile::open(local_78,2);
    if (cVar3 == '\0') {
      FUN_1008e3970("","prl_problem_report_utils",0,"Cannot open or create file to temp dir");
    }
    else {
      QString::toUtf8();
      lVar4 = QIODevice::write((char *)local_78);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10062447e;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_10062447e:
      if (lVar4 == 0) {
        FUN_1008e3970("","prl_problem_report_utils",0,"Cannot write from data to temp file");
        (**(code **)(local_78[0] + 0x70))(local_78);
      }
      else {
        CRepSystemLog::getName();
        QFileInfo::QFileInfo(local_90,&local_98);
        QFileInfo::fileName();
        CRepSystemLog::setName(param_2);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006244f5;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1006244f5:
        QFileInfo::~QFileInfo(local_90);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_29 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100624537;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100624537:
        puVar1 = PTR_shared_null_100ba20d0;
        CRepSystemLog::setData(param_2);
        if (*(int *)puVar1 != -1) {
          if (*(int *)puVar1 != 0) {
            LOCK();
            *(int *)puVar1 = *(int *)puVar1 + -1;
            local_29 = *(int *)puVar1 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10062458a;
          }
          QArrayData::deallocate((QArrayData *)puVar1,2,8);
        }
LAB_10062458a:
        if (cVar2 == '\0') {
          CProblemReport::appendSystemLog(param_1);
        }
        else {
          (**(code **)(*(long *)param_2.field0_0x0 + 0x88))(param_2.field0_0x0);
        }
      }
    }
    QFile::~QFile((QFile *)local_78);
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100624667;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100624667:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

