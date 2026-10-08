
void FUN_100d6eec0(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10225b990;
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPsConverter",1,"[PrlPostscript] PSConverter::abort started.");
  }
  param_1[0x30] = (QObject)0x1;
  QProcess::kill();
  QProcess::~QProcess((QProcess *)(param_1 + 0x20));
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d6ef51;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d6ef51:
  pQVar1 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d6ef81;
      pQVar1 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d6ef81:
  QObject::~QObject(param_1);
  return;
}

