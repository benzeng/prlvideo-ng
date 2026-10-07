
long FUN_1004a10e0(int param_1,undefined8 *param_2,QVariant *param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = QMapDataBase::createNode(param_1,0x30,(QMapNodeBase *)&DAT_00000008,param_4);
  piVar1 = (int *)*param_2;
  *(int **)(lVar2 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  QVariant::QVariant((QVariant *)(lVar2 + 0x20),param_3);
  return lVar2;
}

