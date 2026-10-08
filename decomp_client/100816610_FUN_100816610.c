
void FUN_100816610(CAbstractTask *param_1)

{
  int *piVar1;
  QMapNodeBase *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102203b90;
  pQVar2 = *(QMapNodeBase **)(param_1 + 0x138);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100816675;
      pQVar2 = *(QMapNodeBase **)(param_1 + 0x138);
    }
    if (*(long *)(pQVar2 + 0x10) != 0) {
      FUN_100249310();
      QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar2);
  }
LAB_100816675:
  piVar1 = *(int **)(param_1 + 0x120);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x120) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x120));
    }
  }
  piVar1 = *(int **)(param_1 + 0x110);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x110) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x110));
    }
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x18));
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

