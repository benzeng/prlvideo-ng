
void FUN_1006a6720(QRegExp *param_1,QRegExp *param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  QRegExp::QRegExp(param_1,param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  piVar1 = *(int **)(param_2 + 0x10);
  *(int **)(param_1 + 0x10) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x10));
      lVar2 = *(long *)(param_1 + 0x10);
      lVar4 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar4 * 8) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  piVar1 = *(int **)(param_2 + 0x18);
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  piVar1 = *(int **)(param_2 + 0x28);
  *(int **)(param_1 + 0x28) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x28));
      lVar2 = *(long *)(param_1 + 0x28);
      lVar4 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_2 + 0x28);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar4 * 8) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  piVar1 = *(int **)(param_2 + 0x30);
  *(int **)(param_1 + 0x30) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x30));
      lVar2 = *(long *)(param_1 + 0x30);
      lVar4 = (long)*(int *)(lVar2 + 8);
      lVar3 = *(long *)(param_2 + 0x30);
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar4 * 8) &&
         (lVar5 = *(int *)(lVar2 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar4 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return;
}

