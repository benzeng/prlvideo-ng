
void FUN_100623b90(CRepSystemLog *param_1,QString *param_2,undefined8 *param_3)

{
  uint uVar1;
  code *pcVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  QString this;
  int iVar8;
  QArrayData *local_80;
  QArrayData *local_78;
  long local_70 [2];
  long local_60 [2];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    FUN_1008e3970("","prl_problem_report_utils",0,"cannot append from from empty path!");
    return;
  }
  cVar5 = QFile::exists(param_2);
  if (cVar5 == '\0') {
    return;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_48.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x268);
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  local_40.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100623c5a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100623c5a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100623c8a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100623c8a:
  cVar5 = QFile::exists(&local_40);
  if (cVar5 != '\0') {
    QFile::remove(&local_40);
  }
  QFile::QFile((QFile *)local_60,param_2);
  cVar6 = QFile::open(local_60,1);
  if (cVar6 == '\0') {
    FUN_1008e3970("","prl_problem_report_utils",0,"Cannot open file to read log file");
    goto LAB_100623fce;
  }
  lVar7 = QFile::size();
  if (0x1000000 < lVar7) {
    pcVar2 = *(code **)(local_60[0] + 0x88);
    lVar7 = QFile::size();
    (*pcVar2)(local_60,lVar7 + -0x1000000);
  }
  QFile::QFile((QFile *)local_70,&local_40);
  cVar6 = QFile::open(local_70,2);
  if (cVar6 != '\0') {
    local_78 = (QArrayData *)PTR_shared_null_100ba20d0;
    iVar8 = 0;
    do {
      QIODevice::read((longlong)&local_80);
      QByteArray::operator=((QByteArray *)&local_78,(QByteArray *)&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100623d9b;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_100623d9b:
      uVar1 = *(uint *)(local_78 + 4);
      if (uVar1 == 0) goto LAB_100623e9a;
      iVar8 = iVar8 + uVar1;
      if (0x1000000 < iVar8) goto LAB_100623e5d;
      QIODevice::write((char *)local_70,(longlong)(local_78 + *(long *)(local_78 + 0x10)));
    } while( true );
  }
  FUN_1008e3970("","prl_problem_report_utils",0,"Cannot open or create file to temp dir");
  (**(code **)(local_60[0] + 0x70))(local_60);
  goto LAB_100623fc5;
LAB_100623e5d:
  if ((1 < *(uint *)local_78) || (*(long *)(local_78 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_78,uVar1 + 1,*(uint *)(local_78 + 8) >> 0x1f);
  }
  QIODevice::write((char *)local_70,(longlong)(local_78 + *(long *)(local_78 + 0x10)));
LAB_100623e9a:
  (**(code **)(local_60[0] + 0x70))(local_60);
  (**(code **)(local_70[0] + 0x70))(local_70);
  if (cVar5 == '\0') {
    this.field0_0x0 = operator_new(0xa8);
    CRepSystemLog::CRepSystemLog((CRepSystemLog *)this.field0_0x0);
    pQVar3 = (QArrayData *)*param_3;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    CRepSystemLog::setName(this);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100623f33;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_100623f33:
    puVar4 = PTR_shared_null_100ba20d0;
    CRepSystemLog::setData(this);
    if (*(int *)puVar4 != -1) {
      if (*(int *)puVar4 != 0) {
        LOCK();
        *(int *)puVar4 = *(int *)puVar4 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100623f86;
      }
      QArrayData::deallocate((QArrayData *)puVar4,2,8);
    }
LAB_100623f86:
    CProblemReport::appendSystemLog(param_1);
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100623fc5;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100623fc5:
  QFile::~QFile((QFile *)local_70);
LAB_100623fce:
  QFile::~QFile((QFile *)local_60);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

