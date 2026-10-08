
void FUN_100264c10(CAbstractTask *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_102205190;
  if (*(long **)(param_1 + 0x128) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x20))();
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x140);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100264c77;
      pQVar2 = *(QArrayData **)(param_1 + 0x140);
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100264c77:
  if (*(long *)(param_1 + 0x138) != 0) {
    _PrlHandle_Free();
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x28));
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x18));
    }
  }
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

