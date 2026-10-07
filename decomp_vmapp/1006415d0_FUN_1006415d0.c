
long FUN_1006415d0(int param_1,QDateTime *param_2,undefined8 *param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)&DAT_00000008,param_4);
  QDateTime::QDateTime((QDateTime *)(lVar2 + 0x18),param_2);
  piVar1 = (int *)*param_3;
  *(int **)(lVar2 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return lVar2;
}

