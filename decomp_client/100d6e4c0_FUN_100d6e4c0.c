
byte FUN_100d6e4c0(int param_1,QString *param_2,byte param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (5 < param_1 - 1U) {
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","UserFolder",1,"Invalid folder ID %u",param_1);
      return 0;
    }
    return 0;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = _NSHomeDirectory();
  pcVar5 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_UTF8String_1022699e8);
  if (pcVar5 != (char *)0x0) {
    _strlen(pcVar5);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
  QString::operator=(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d6e570;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d6e570:
  uVar4 = _NSSearchPathForDirectoriesInDomains
                    (*(undefined8 *)(&DAT_101db2aa0 + (long)(int)(param_1 - 1U) * 8),1,1);
  lVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_count_102268e68);
  bVar1 = true;
  if (lVar6 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_firstObject_102269030);
    pcVar5 = (char *)(*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_UTF8String_1022699e8);
    if (pcVar5 != (char *)0x0) {
      _strlen(pcVar5);
    }
    QString::fromUtf8_helper((char *)&local_50,(int)pcVar5);
    QString::operator=(param_2,&local_50);
    bVar1 = false;
    if (*(int *)local_50.field0_0x0 != -1) {
      bVar1 = false;
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d6e632;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100d6e632:
  _objc_autoreleasePoolPop(uVar3);
  if (bVar1) {
    bVar2 = 0;
  }
  else {
    bVar2 = QString::startsWith(param_2,&local_40,1);
    if ((param_3 & bVar2) != 0) {
      bVar2 = 1;
      QString::remove((int)param_2,0);
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return bVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return bVar2;
}

