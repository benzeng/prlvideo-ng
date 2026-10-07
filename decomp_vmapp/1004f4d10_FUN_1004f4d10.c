
QString * FUN_1004f4d10(QString *param_1,undefined8 param_2,QString *param_3,QString *param_4)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  QString local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::toUtf8_helper(&local_40);
  lVar3 = _opendir_INODE64((QArrayData *)
                           (local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10)));
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004f4d7c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,1,8);
  }
LAB_1004f4d7c:
  if (lVar3 == 0) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  }
  else {
    do {
      lVar4 = _readdir_INODE64(lVar3);
      if (lVar4 == 0) {
        param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        break;
      }
      QString::fromUtf8_helper((char *)&local_48,(int)lVar4 + 0x15);
      QString::normalized(param_1,&local_48,1,0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004f4df6;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_1004f4df6:
      cVar1 = operator==(param_1,param_3);
      if (cVar1 != '\0') break;
      cVar1 = FUN_1004f4ad0(param_1);
      cVar2 = '\x03';
      if (cVar1 == '\0') {
        FUN_1004f49a0(&local_50,param_1);
        cVar1 = operator==(&local_50,param_4);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004f4e73;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
LAB_1004f4e73:
        if (cVar1 == '\0') goto LAB_1004f4f40;
        FUN_1004f5140(&local_58,param_1);
        cVar1 = operator==(&local_58,param_3);
        if (cVar1 == '\0') {
          QString::toUpper_helper(&local_60);
          cVar2 = operator==(&local_58,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004f4eff;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
        }
        else {
          cVar2 = '\x01';
        }
LAB_1004f4eff:
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004f4f2f;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_1004f4f2f:
        if (cVar2 == '\0') goto LAB_1004f4f40;
      }
      else {
LAB_1004f4f40:
        pQVar5 = param_1->field0_0x0;
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004f4f6e;
            pQVar5 = param_1->field0_0x0;
          }
          QArrayData::deallocate((QArrayData *)pQVar5,2,8);
        }
      }
LAB_1004f4f6e:
    } while ((cVar2 == '\0') || (cVar2 == '\x03'));
    _closedir(lVar3);
  }
  return param_1;
}

