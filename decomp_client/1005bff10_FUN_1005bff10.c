
long FUN_1005bff10(int param_1,undefined8 *param_2,long param_3,bool param_4)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = QMapDataBase::createNode(param_1,0xa0,(QMapNodeBase *)0x8,param_4);
  piVar1 = (int *)*param_2;
  *(int **)(lVar2 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_100283580(lVar2 + 0x20,param_3);
  piVar1 = *(int **)(param_3 + 0x58);
  *(int **)(lVar2 + 0x78) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_3 + 0x60);
  *(int **)(lVar2 + 0x80) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_3 + 0x68);
  *(int **)(lVar2 + 0x88) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_3 + 0x70);
  *(int **)(lVar2 + 0x90) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_3 + 0x78);
  *(int **)(lVar2 + 0x98) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return lVar2;
}

