
void FUN_10080ff40(CAbstractTask *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102200db0;
  piVar1 = *(int **)(param_1 + 0x248);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x248) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x248));
    }
  }
  piVar1 = *(int **)(param_1 + 0x238);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x238) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x238));
    }
  }
  piVar1 = *(int **)(param_1 + 0x228);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x228) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x228));
    }
  }
  piVar1 = *(int **)(param_1 + 0x218);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x218) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x218));
    }
  }
  piVar1 = *(int **)(param_1 + 0x208);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x208) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x208));
    }
  }
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x110));
  CVmConfiguration::~CVmConfiguration((CVmConfiguration *)(param_1 + 0x18));
  CAbstractTask::~CAbstractTask(param_1);
  return;
}

