
void FUN_1006ee380(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f58c0;
  FUN_100252c80(param_1 + 0x128);
  FUN_100252e70(param_1 + 0xd0);
  FUN_10024f950(param_1 + 0x88);
  pQVar1 = *(QArrayData **)(param_1 + 0x80);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006ee3f4;
      pQVar1 = *(QArrayData **)(param_1 + 0x80);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006ee3f4:
  pQVar1 = *(QArrayData **)(param_1 + 0x78);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1006ee424;
      pQVar1 = *(QArrayData **)(param_1 + 0x78);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006ee424:
  QObject::~QObject(param_1);
  return;
}

