
long FUN_100a2c0c0(int param_1,undefined8 *param_2,long *param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = QMapDataBase::createNode(param_1,0x28,(QMapNodeBase *)0x8,param_4);
  piVar1 = (int *)*param_2;
  *(int **)(lVar3 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  lVar2 = *param_3;
  *(long *)(lVar3 + 0x20) = lVar2;
  if (lVar2 != 0) {
    _PrlHandle_AddRef();
  }
  return lVar3;
}

