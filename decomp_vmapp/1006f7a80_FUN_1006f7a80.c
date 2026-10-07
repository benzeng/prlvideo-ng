
undefined1 FUN_1006f7a80(QString *param_1,undefined8 param_2,QString *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QTextStream local_60 [16];
  QString local_50;
  QFile local_48 [23];
  undefined1 local_31;
  
  QFile::QFile(local_48,param_1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  cVar2 = QFile::open(local_48,1);
  if (cVar2 == '\0') {
LAB_1006f7c9f:
    uVar5 = 0;
  }
  else {
    QTextStream::QTextStream(local_60,(QIODevice *)local_48);
    do {
      QTextStream::readLine((longlong)&local_68);
      QString::operator=(&local_50,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f7b39;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1006f7b39:
      iVar3 = QString::indexOf(&local_50,param_2,0,1);
      if (iVar3 != -1) {
        local_70 = (QArrayData *)QString::fromAscii_helper("{",1);
        iVar3 = QString::indexOf(&local_50,&local_70,iVar3,1);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f7bb2;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1006f7bb2:
        local_78 = (QArrayData *)QString::fromAscii_helper("}",1);
        iVar4 = QString::indexOf(&local_50,&local_78,iVar3,1);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f7c0e;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1006f7c0e:
        if ((iVar3 != -1) && (iVar4 != -1)) {
          QString::mid((int)&local_80,(int)&local_50);
          QString::operator=(param_3,&local_80);
          bVar1 = true;
          if (*(int *)local_80.field0_0x0 == -1) break;
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) break;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          break;
        }
      }
      bVar1 = false;
    } while (local_50.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0);
    QTextStream::~QTextStream(local_60);
    uVar5 = 1;
    if (!bVar1) goto LAB_1006f7c9f;
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f7cd2;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006f7cd2:
  QFile::~QFile(local_48);
  return uVar5;
}

