
void FUN_10034d220(QSettings *param_1)

{
  QArrayData *pQVar1;
  
  QSettings::QSettings(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_metaObject_102273810;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("Maintenance",0xb);
  QSettings::beginGroup((QString *)param_1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10034d293;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10034d293:
  QSettings::beginGroup((QString *)param_1);
  return;
}

