
void FUN_10061e780(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  QArrayData *local_88;
  long local_80 [2];
  QArrayData *local_70;
  QDir local_68 [8];
  QString local_60;
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QDir::tempPath();
  QDir::QDir(local_68,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10061e7f1;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10061e7f1:
  FUN_1007d6bd0(local_48);
  FUN_1007d6a70(&local_70,local_48);
  QDir::absoluteFilePath(&local_60);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_49 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10061e848;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10061e848:
  QDir::~QDir(local_68);
  QFile::QFile((QFile *)local_80,&local_60);
  cVar2 = QFile::open(local_80,0x1a);
  if (cVar2 != '\0') {
    QString::toUtf8();
    QIODevice::write((char *)local_80);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_49 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_10061e8bd;
      }
      QArrayData::deallocate(local_88,1,8);
    }
LAB_10061e8bd:
    (**(code **)(local_80[0] + 0x70))(local_80);
    (**(code **)(*param_1 + 0x68))(param_1,&local_60,param_3);
  }
  QFile::~QFile((QFile *)local_80);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_49 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10061e917;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10061e917:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

