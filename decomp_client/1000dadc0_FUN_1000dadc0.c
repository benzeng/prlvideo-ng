
void FUN_1000dadc0(QString *param_1)

{
  int iVar1;
  char cVar2;
  QFileInfo *this;
  long lVar3;
  QString local_60;
  QArrayData *local_58;
  Data *local_50;
  QDir local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QDir::QDir(local_48,param_1);
  cVar2 = QDir::exists();
  if (cVar2 != '\0') {
    QDir::setFilter(local_48,0x6009);
    QDir::setSorting(local_48,4);
    QDir::entryInfoList(&local_50,local_48,0xffffffff,0xffffffff);
    if (*(int *)(local_50 + 8) < *(int *)(local_50 + 0xc)) {
      lVar3 = 0;
      do {
        cVar2 = QFileInfo::isDir();
        if (cVar2 != '\0') {
          QFileInfo::absoluteFilePath();
          local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x1db6890);
          QString::append(&local_60);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000daede;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1000daede:
          cVar2 = QFile::exists(&local_60);
          if (cVar2 != '\0') {
            FUN_1000d7c20(&local_58);
          }
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000daf23;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_1000daf23:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000daf60;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
LAB_1000daf60:
        lVar3 = lVar3 + 1;
      } while (lVar3 < (long)*(int *)(local_50 + 0xc) - (long)*(int *)(local_50 + 8));
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000dafda;
      }
      iVar1 = *(int *)(local_50 + 0xc);
      if (iVar1 != *(int *)(local_50 + 8)) {
        lVar3 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
        this = (QFileInfo *)(local_50 + (long)iVar1 * 8 + 8);
        do {
          QFileInfo::~QFileInfo(this);
          this = this + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_50);
    }
  }
LAB_1000dafda:
  QDir::~QDir(local_48);
  return;
}

