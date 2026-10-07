
undefined8 FUN_1005bb880(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  QDateTime local_60 [8];
  QString local_58;
  QFileInfo local_50 [8];
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  uVar3 = 0x80000003;
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar3;
    iVar2 = FUN_1007ea6f0(param_3,&DAT_1011bc8b8);
    *(bool *)(param_2 + 3) = iVar2 == 0;
    local_40 = PTR_shared_null_100ba2188;
    FUN_10051afa0(param_2 + 2,&local_40);
    FUN_100013180(&local_40);
    param_2[4] = 0;
    puVar5 = (undefined8 *)*param_4;
    uVar3 = 0;
    if (puVar5 != (undefined8 *)param_4[1]) {
      do {
        FUN_100594a40(&local_48,*puVar5,param_3);
        FUN_10000c490(param_2 + 2,&local_48);
        FUN_100585d90(&local_58,*puVar5,&local_48);
        QFileInfo::QFileInfo(local_50,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005bb998;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1005bb998:
        cVar1 = QDateTime::isValid();
        if (cVar1 == '\0') {
          QFileInfo::created();
          QDateTime::operator=((QDateTime *)(param_2 + 5),local_60);
          QDateTime::~QDateTime(local_60);
        }
        lVar4 = QFileInfo::size();
        param_2[4] = param_2[4] + lVar4;
        QFileInfo::~QFileInfo(local_50);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005bba0a;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1005bba0a:
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined8 *)param_4[1]);
      uVar3 = 0;
    }
  }
  return uVar3;
}

