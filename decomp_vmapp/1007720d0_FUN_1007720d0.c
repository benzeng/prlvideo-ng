
QString * FUN_1007720d0(QString *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QProcess local_38 [23];
  undefined1 local_21;
  
  QProcess::QProcess(local_38,(QObject *)0x0);
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_40 = (QArrayData *)QString::fromAscii_helper("system_profiler -xml -detailLevel mini",0x26);
  QProcess::start(local_38,&local_40,3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10077214c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077214c:
  QProcess::waitForFinished((int)local_38);
  QProcess::readAllStandardOutput();
  pQVar2 = local_58 + *(long *)(local_58 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_58 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_58 + 4));
    if ((int)lVar1 == -1) {
      _strlen((char *)pQVar2);
    }
  }
  QString::fromUtf8_helper((char *)&local_50,(int)pQVar2);
  QString::normalized(&local_48,&local_50,1,0);
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007721f9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007721f9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100772229;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100772229:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100772259;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100772259:
  QProcess::~QProcess(local_38);
  return param_1;
}

