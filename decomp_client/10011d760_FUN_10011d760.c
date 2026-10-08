
bool FUN_10011d760(QString *param_1,QString *param_2)

{
  long lVar1;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  if (param_1 != (QString *)0x0) {
    QString::fromUtf8_helper((char *)&local_38,0x1e41978);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10011d7c8;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_10011d7c8:
  if (param_2 != (QString *)0x0) {
    QString::fromUtf8_helper((char *)&local_30,0x1e41978);
    QString::operator=(param_2,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10011d81d;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_10011d81d:
  lVar1 = CAntivirusInfo::installedAntivirus(0);
  return lVar1 != 0;
}

