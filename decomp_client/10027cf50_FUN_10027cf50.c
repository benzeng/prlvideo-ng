
void FUN_10027cf50(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined **)param_1 = PTR_DAT_1021e17d0 + 0x10;
  QVariant::~QVariant((QVariant *)(param_1 + 0x18));
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10027cfa5;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10027cfa5:
  QObject::~QObject(param_1);
  return;
}

