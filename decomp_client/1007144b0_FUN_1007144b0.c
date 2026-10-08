
long FUN_1007144b0(int param_1,undefined8 *param_2,QKeySequence *param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = QMapDataBase::createNode(param_1,0x58,(QMapNodeBase *)0x8,param_4);
  piVar1 = (int *)*param_2;
  *(int **)(lVar2 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[1];
  *(int **)(lVar2 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QKeySequence::QKeySequence((QKeySequence *)(lVar2 + 0x28),param_3);
  QKeySequence::QKeySequence((QKeySequence *)(lVar2 + 0x30),param_3 + 8);
  *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(param_3 + 0x10);
  QKeySequence::QKeySequence((QKeySequence *)(lVar2 + 0x40),param_3 + 0x18);
  QKeySequence::QKeySequence((QKeySequence *)(lVar2 + 0x48),param_3 + 0x20);
  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(param_3 + 0x28);
  return lVar2;
}

