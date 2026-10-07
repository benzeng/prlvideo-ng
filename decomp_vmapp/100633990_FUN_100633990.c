
int FUN_100633990(undefined8 param_1,long *param_2,long *param_3,long *param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar4 = 0;
  if ((0 < param_5) && (iVar4 = 0, *param_2 != *param_3)) {
    iVar4 = 0;
    lVar5 = *param_2;
    do {
      lVar3 = lVar5 + 8;
      local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
      cVar2 = FUN_100634c90(param_1,lVar5,&local_48,1);
      if (cVar2 != '\0') {
        QFileInfo::absoluteFilePath();
        QFileInfo::QFileInfo(local_50,&local_58);
        pcVar1 = *(code **)(*param_4 + 0x68);
        QFileInfo::absoluteFilePath();
        (*pcVar1)(param_4,&local_40,&local_48);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100633a74;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_100633a74:
        QFileInfo::~QFileInfo(local_50);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100633aac;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100633aac:
        iVar4 = iVar4 + 1;
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100633adf;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100633adf:
    } while ((iVar4 < param_5) && (lVar5 = lVar3, lVar3 != *param_3));
  }
  return iVar4;
}

