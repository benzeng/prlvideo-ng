
undefined8 FUN_100053e40(long param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  QArrayData *local_68;
  QFileInfo local_60 [8];
  int *local_58;
  QString *local_50;
  QString *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_58 = *(int **)(param_1 + 0x10);
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        puVar5 = (undefined8 *)
                 (*(long *)(param_1 + 0x10) + 0x10 +
                 (long)*(int *)(*(long *)(param_1 + 0x10) + 8) * 8);
        piVar6 = local_58 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = (QString *)(local_58 + (long)local_58[2] * 2 + 4);
  local_48 = (QString *)(local_58 + (long)local_58[3] * 2 + 4);
  if (local_58[2] != local_58[3]) {
    do {
      local_40 = 1;
      QFileInfo::QFileInfo(local_60,local_50);
      cVar3 = QFileInfo::isDir();
      if (cVar3 == '\0') {
        lVar4 = QFileInfo::size();
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar4;
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      else {
        QFileInfo::absoluteFilePath();
        lVar4 = FUN_100054050(param_1,&local_68,param_1 + 0x28);
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar4;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100053fa0;
          }
          QArrayData::deallocate(local_68,2,8);
        }
      }
LAB_100053fa0:
      iVar1 = *(int *)(param_1 + 0x38);
      QFileInfo::~QFileInfo(local_60);
      uVar7 = 9;
      if (iVar1 == 100) goto LAB_100053fd6;
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  uVar7 = 0;
LAB_100053fd6:
  FUN_100013180(&local_58);
  return uVar7;
}

