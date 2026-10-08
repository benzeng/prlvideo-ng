
void FUN_1000e6ff0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  piVar1 = (int *)*param_2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[1];
  param_1[1] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[2];
  param_1[2] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)param_2[3];
  param_1[3] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[6] = param_2[6];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  FUN_1000e7280(param_1 + 7,param_2 + 7);
  piVar1 = (int *)param_2[8];
  param_1[8] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  piVar1 = (int *)param_2[0xb];
  param_1[0xb] = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0xb));
      lVar3 = param_1[0xb];
      lVar5 = (long)*(int *)(lVar3 + 8);
      lVar4 = param_2[0xb];
      if ((lVar4 + (long)*(int *)(lVar4 + 8) * 8 != lVar3 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),
                (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  _memcpy(param_1 + 0xc,param_2 + 0xc,0x50);
  return;
}

