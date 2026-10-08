
long * FUN_10073e900(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  QTextStream *pQVar3;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar3 = (QTextStream *)*param_2;
  pQVar3[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_a0,0x1e143dd);
  QTextStream::operator<<(pQVar3,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073e981;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10073e981:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(*param_3 + 0x10) + *param_3);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_98,0x1e143e9);
  QTextStream::operator<<(pQVar3,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ea21;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_10073ea21:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[1] + 0x10) + param_3[1]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_90,0x1e143f2);
  QTextStream::operator<<(pQVar3,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073eac2;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_10073eac2:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[2] + 0x10) + param_3[2]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_88,0x1e143ff);
  QTextStream::operator<<(pQVar3,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073eb5a;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10073eb5a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[4] + 0x10) + param_3[4]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_80,0x1e14409);
  QTextStream::operator<<(pQVar3,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ebf2;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10073ebf2:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[5] + 0x10) + param_3[5]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_78,0x1e14416);
  QTextStream::operator<<(pQVar3,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ec8a;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10073ec8a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[3] + 0x10) + param_3[3]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_70,0x1e14426);
  QTextStream::operator<<(pQVar3,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ed22;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10073ed22:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[7] + 0x10) + param_3[7]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_68,0x1e14442);
  QTextStream::operator<<(pQVar3,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073edba;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10073edba:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[8] + 0x10) + param_3[8]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_60,0x1e14455);
  QTextStream::operator<<(pQVar3,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ee52;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10073ee52:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[6] + 0x10) + param_3[6]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e1446b);
  QTextStream::operator<<(pQVar3,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073eeea;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10073eeea:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[9] + 0x10) + param_3[9]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e1447e);
  QTextStream::operator<<(pQVar3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073ef82;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10073ef82:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  FUN_10073dd90(&local_a8,param_3);
  QDebug::putString((QChar *)param_2,(ulong)(local_a8 + *(long *)(local_a8 + 0x10)));
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e14493);
  QTextStream::operator<<(pQVar3,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f02a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10073f02a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  FUN_10073e290(&local_b0,param_3);
  QDebug::putString((QChar *)param_2,(ulong)(local_b0 + *(long *)(local_b0 + 0x10)));
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e144a4);
  QTextStream::operator<<(pQVar3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f0d2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10073f0d2:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  FUN_10073e010(&local_b8,param_3);
  QDebug::putString((QChar *)param_2,(ulong)(local_b8 + *(long *)(local_b8 + 0x10)));
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f158;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10073f158:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f18e;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10073f18e:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f1c4;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10073f1c4:
  pQVar3 = (QTextStream *)*param_2;
  pQVar3[0x20] = (QTextStream)0x1;
  QTextStream::operator<<(pQVar3,' ');
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}

