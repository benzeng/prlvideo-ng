
undefined8 FUN_100772580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *local_70;
  QArrayData *local_68;
  QProcess local_60 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("ls %1%2%3",9);
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("/Library/Audio/Plug-Ins/Components /Library/Audio/Plug-Ins/HAL ",0x3f);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  QString::arg(&local_30,&local_38,param_2,0,0x20);
  local_50 = (QArrayData *)QString::fromAscii_helper("/Library/Audio/Plug-Ins/Components",0x22);
  QString::arg(&local_28,&local_30,&local_50,0,0x20);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077264a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10077264a:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077267a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10077267a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007726aa;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007726aa:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007726da;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007726da:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10077270a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077270a:
  QProcess::QProcess(local_60,(QObject *)0x0);
  QProcess::start(local_60,&local_28,3);
  QProcess::waitForFinished((int)local_60);
  QProcess::readAllStandardOutput();
  pQVar2 = local_70 + *(long *)(local_70 + 0x10);
  if ((pQVar2 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) != 0)) {
    lVar1 = 0;
    do {
      if (pQVar2[lVar1] == (QArrayData)0x0) break;
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(local_70 + 4));
    if ((int)lVar1 == -1) {
      _strlen((char *)pQVar2);
    }
  }
  QString::fromUtf8_helper((char *)&local_68,(int)pQVar2);
  QString::normalized(param_1,&local_68,1,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007727cc;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007727cc:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007727fc;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1007727fc:
  QProcess::~QProcess(local_60);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

