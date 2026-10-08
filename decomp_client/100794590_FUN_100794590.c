
void FUN_100794590(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  QEvent *pQVar3;
  QArrayData *local_70;
  QKeyEvent local_68 [18];
  byte local_56;
  undefined1 local_21;
  
  uVar1 = QKeySequence::operator[](param_2);
  uVar2 = QKeySequence::operator[](param_2);
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  QKeyEvent::QKeyEvent(local_68,6,uVar1 & 0x1ffffff,uVar2 & 0xfe000000,&local_70,0,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10079461f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10079461f:
  pQVar3 = (QEvent *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar3 = (QEvent *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar3 = *(QEvent **)(param_1 + 0x20);
  }
  local_56 = local_56 & 0xfd;
  if (*(QObject **)PTR_self_1021e1388 != (QObject *)0x0) {
    QCoreApplication::notifyInternal(*(QObject **)PTR_self_1021e1388,pQVar3);
  }
  QKeyEvent::~QKeyEvent(local_68);
  return;
}

