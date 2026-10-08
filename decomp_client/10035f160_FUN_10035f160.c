
void FUN_10035f160(QObject *param_1)

{
  QArrayData *pQVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220dcf0;
  FUN_10006ac60(param_1,0);
  pQVar1 = *(QArrayData **)(param_1 + 0x40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10035f1b3;
      pQVar1 = *(QArrayData **)(param_1 + 0x40);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_10035f1b3:
  QCursor::~QCursor((QCursor *)(param_1 + 0x20));
  QObject::~QObject(param_1);
  return;
}

