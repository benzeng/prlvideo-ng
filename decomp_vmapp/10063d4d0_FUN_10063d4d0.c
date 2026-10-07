
void FUN_10063d4d0(long *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  QString this;
  QArrayData *pQVar5;
  QDateTime local_a0 [8];
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined1 local_71;
  QArrayData *local_70;
  QArrayData *local_68;
  QRegExp local_60 [8];
  QArrayData *local_58;
  QFileInfo local_50 [8];
  QFile local_48 [23];
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    return;
  }
  QFile::QFile(local_48,param_2);
  QFileInfo::QFileInfo(local_50,local_48);
  cVar1 = QFile::open(local_48,1);
  if (cVar1 == '\0') {
    QString::toLocal8Bit();
    FUN_1008e3970("","prl_problem_report_utils",0,"Error: can\'t open crash dump \'%s\'",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10063d861;
      }
      QArrayData::deallocate(local_58,1,8);
    }
    goto LAB_10063d861;
  }
  lVar4 = QFile::size();
  if (lVar4 == 0) goto LAB_10063d861;
  local_68 = (QArrayData *)
             QString::fromAscii_helper("\\.(\\d{1,})\\.(lin|win|mac)\\.(dmp|lcore)",0x26);
  QRegExp::QRegExp(local_60,&local_68,1,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d591;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10063d591:
  iVar3 = 0;
  iVar2 = QRegExp::indexIn(local_60,param_2,0,0);
  if (iVar2 != -1) {
    QRegExp::cap((int)&local_70);
    local_71 = 0;
    iVar3 = QString::toInt((bool *)&local_70,(int)&local_71);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10063d604;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_10063d604:
  this.field0_0x0 = operator_new(0xc0);
  CRepCrashDump::CRepCrashDump((CRepCrashDump *)this.field0_0x0);
  local_80 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_31 = *(int *)local_80 != 0;
    UNLOCK();
  }
  CRepCrashDump::setPath(this);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d66e;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10063d66e:
  local_90 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_88,&local_90,(long)iVar3,0,10,0x20);
  CRepCrashDump::setApplicationPid(this);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d6e3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_10063d6e3:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d719;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10063d719:
  QFileInfo::lastModified();
  pQVar5 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss.zzz",0x17);
  QDateTime::toString(&local_98);
  CRepCrashDump::setCreationDateTime(this);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d7a0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10063d7a0:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10063d7d6;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10063d7d6:
  QDateTime::~QDateTime(local_a0);
  (**(code **)(*param_1 + 0x88))(param_1,this.field0_0x0);
  QRegExp::~QRegExp(local_60);
LAB_10063d861:
  QFileInfo::~QFileInfo(local_50);
  QFile::~QFile(local_48);
  return;
}

