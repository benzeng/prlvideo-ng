
int FUN_100d4a690(undefined8 param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  QTextStream local_80 [16];
  QFile local_70 [16];
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar3 = FUN_100d4a500(param_1,&local_30);
  if (iVar3 < 0) goto LAB_100d4a832;
  QFileInfo::QFileInfo(local_40,param_2);
  QFileInfo::path();
  QFileInfo::~QFileInfo(local_40);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  QDir::QDir((QDir *)&local_48,&local_50);
  cVar2 = QDir::exists(&local_48);
  QDir::~QDir((QDir *)&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d4a739;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d4a739:
  if (cVar2 == '\0') {
    local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    QDir::QDir((QDir *)&local_58,&local_60);
    cVar2 = QDir::mkpath(&local_58);
    QDir::~QDir((QDir *)&local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d4a797;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100d4a797:
    iVar3 = -0x7fffffff;
    if (cVar2 != '\0') goto LAB_100d4a7a1;
  }
  else {
LAB_100d4a7a1:
    QFile::QFile(local_70,param_2);
    cVar2 = QFile::open(local_70,2);
    iVar3 = -0x7fffffff;
    if (cVar2 != '\0') {
      QTextStream::QTextStream(local_80,(QIODevice *)local_70);
      QTextStream::setCodec((char *)local_80);
      QTextStream::operator<<(local_80,&local_30);
      iVar3 = 0;
      QTextStream::~QTextStream(local_80);
    }
    QFile::~QFile(local_70);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d4a832;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d4a832:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return iVar3;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return iVar3;
}

