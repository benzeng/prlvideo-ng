
undefined8 FUN_100d36c80(undefined8 param_1,QString *param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  QDir local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QDir local_50 [8];
  QFileInfo local_48 [8];
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QDir::QDir(local_50,param_2);
  QFileInfo::QFileInfo(local_48,local_50,&local_40);
  QDir::~QDir(local_50);
  iVar2 = 1;
  do {
    cVar1 = QFileInfo::exists();
    if (cVar1 == '\0') {
      if (param_4 == '\0') {
        QFileInfo::fileName();
      }
      else {
        QFileInfo::filePath();
      }
      QFileInfo::~QFileInfo(local_48);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_40.field0_0x0 != 0) {
            return param_1;
          }
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
      return param_1;
    }
    local_68 = (QArrayData *)QString::fromAscii_helper("%1 (%2)",7);
    QString::arg(&local_60,&local_68,param_3,0,0x20);
    QString::arg(&local_58,&local_60,iVar2,0,10,0x20);
    QString::operator=(&local_40,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d36d99;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100d36d99:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d36dc9;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100d36dc9:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d36d00;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100d36d00:
    QDir::QDir(local_70,param_2);
    QFileInfo::setFile((QDir *)local_48,(QString *)local_70);
    QDir::~QDir(local_70);
    iVar2 = iVar2 + 1;
  } while( true );
}

