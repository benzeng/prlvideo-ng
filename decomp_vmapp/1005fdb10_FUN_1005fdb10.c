
int FUN_1005fdb10(long param_1,undefined8 param_2)

{
  Data *pDVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  QFileInfo *this;
  long lVar6;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QFileInfo local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  QDir::QDir(local_40,(QString *)(param_1 + 0x10));
  QDir::entryInfoList(&local_48,local_40,0x600f,0xffffffff);
  uVar2 = *(uint *)(local_48 + 8);
  uVar5 = (ulong)uVar2;
  if (*(uint *)(local_48 + 0xc) == uVar2) {
    iVar4 = -0x7ffdf000;
    FUN_1008e3970("Backup","vdisk",0,"Unable to get list of files");
  }
  else {
    iVar4 = 0;
    if ((int)uVar2 < (int)*(uint *)(local_48 + 0xc)) {
      lVar6 = 0;
      do {
        pDVar1 = local_48 + ((int)uVar5 + lVar6) * 8 + 0x10;
        iVar4 = FUN_100600480();
        if (iVar4 == 1) {
          iVar4 = FUN_1005fe590(param_1,pDVar1,param_2);
          if (iVar4 < 0) break;
        }
        else if (iVar4 - 2U < 4) {
          if (2 < DAT_1011b55f8) {
            QFileInfo::fileName();
            QString::toUtf8();
            FUN_1008e3970("Backup","vdisk",3,"Skip file [%s]",local_50 + *(long *)(local_50 + 0x10))
            ;
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005fdc4a;
              }
              QArrayData::deallocate(local_50,1,8);
            }
LAB_1005fdc4a:
            if (*(int *)local_58 != -1) {
              if (*(int *)local_58 != 0) {
                LOCK();
                *(int *)local_58 = *(int *)local_58 + -1;
                local_31 = *(int *)local_58 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005fddd0;
              }
              QArrayData::deallocate(local_58,2,8);
            }
          }
        }
        else {
          QFileInfo::absoluteFilePath();
          QFileInfo::QFileInfo(local_60,&local_68);
          iVar4 = FUN_1005fe400();
          QFileInfo::~QFileInfo(local_60);
          if (*(int *)local_68.field0_0x0 != -1) {
            if (*(int *)local_68.field0_0x0 != 0) {
              LOCK();
              *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
              local_31 = *(int *)local_68.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005fdd06;
            }
            QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
          }
LAB_1005fdd06:
          if (iVar4 < 0) break;
          if (2 < DAT_1011b55f8) {
            QFileInfo::fileName();
            QString::toUtf8();
            FUN_1008e3970("Backup","vdisk",3,"Add completely unknown file [%s]",
                          local_70 + *(long *)(local_70 + 0x10));
            if (*(int *)local_70 != -1) {
              if (*(int *)local_70 != 0) {
                LOCK();
                *(int *)local_70 = *(int *)local_70 + -1;
                local_31 = *(int *)local_70 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005fdd91;
              }
              QArrayData::deallocate(local_70,1,8);
            }
LAB_1005fdd91:
            if (*(int *)local_78 != -1) {
              if (*(int *)local_78 != 0) {
                LOCK();
                *(int *)local_78 = *(int *)local_78 + -1;
                local_31 = *(int *)local_78 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1005fddd0;
              }
              QArrayData::deallocate(local_78,2,8);
            }
          }
        }
LAB_1005fddd0:
        lVar6 = lVar6 + 1;
        uVar5 = (ulong)*(int *)(local_48 + 8);
        iVar4 = 0;
      } while (lVar6 < (long)((long)*(int *)(local_48 + 0xc) - uVar5));
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005fde5a;
    }
    iVar3 = *(int *)(local_48 + 0xc);
    if (iVar3 != *(int *)(local_48 + 8)) {
      lVar6 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar3 * -8;
      this = (QFileInfo *)(local_48 + (long)iVar3 * 8 + 8);
      do {
        QFileInfo::~QFileInfo(this);
        this = this + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(local_48);
  }
LAB_1005fde5a:
  QDir::~QDir(local_40);
  return iVar4;
}

