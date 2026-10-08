
undefined1 FUN_100d9d8b0(QString *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  QFileInfo *this;
  long lVar4;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QFileInfo local_50 [8];
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,param_1);
  QDir::setFilter(local_40,0x6107);
  QDir::setSorting(local_40,4);
  QDir::entryInfoList(&local_48,local_40,0xffffffff,0xffffffff);
  if (*(int *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    lVar4 = 0;
    do {
      cVar2 = QFileInfo::isDir();
      if (cVar2 == '\0') {
        QFileInfo::fileName();
        local_68.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(".DS_Store",9);
        cVar2 = operator==(&local_60,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d9d9fc;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100d9d9fc:
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d9da2c;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_100d9da2c:
        uVar3 = 1;
        if (cVar2 == '\0') goto LAB_100d9da52;
      }
      else {
        cVar2 = QFileInfo::isSymLink();
        uVar3 = 1;
        if (cVar2 != '\0') goto LAB_100d9da52;
        QFileInfo::QFileInfo(local_50,param_1);
        cVar2 = QFileInfo::operator==
                          (local_50,(QFileInfo *)
                                    (local_48 + (*(int *)(local_48 + 8) + lVar4) * 8 + 0x10));
        QFileInfo::~QFileInfo(local_50);
        if (cVar2 == '\0') {
          QFileInfo::filePath();
          uVar3 = FUN_100d9d8b0(&local_58);
          if (*(int *)local_58 == -1) goto LAB_100d9da52;
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d9da52;
          }
          QArrayData::deallocate(local_58,2,8);
          goto LAB_100d9da52;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (long)*(int *)(local_48 + 0xc) - (long)*(int *)(local_48 + 8));
  }
  uVar3 = 0;
LAB_100d9da52:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d9daba;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar4 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      this = (QFileInfo *)(local_48 + (long)iVar1 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_100d9daba:
  QDir::~QDir(local_40);
  return uVar3;
}

