
void FUN_100722020(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  piVar2 = *(int **)(param_1 + 0x10);
  param_2[2] = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_2 + 2));
      lVar3 = param_2[2];
      lVar5 = (long)*(int *)(lVar3 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 + (long)*(int *)(lVar4 + 8) * 8 != lVar3 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar3 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar3 + 0xc))) {
        _memcpy((void *)(lVar3 + 0x10 + lVar5 * 8),
                (void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  return;
}

