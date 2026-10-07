
void FUN_10051bb70(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  FUN_1004c0650();
  FUN_100519220(param_1 + 5);
  *param_1 = &PTR_FUN_100bc4a40;
  param_1[5] = &PTR_FUN_100bc4ad0;
  piVar1 = (int *)*param_3;
  param_1[0xd] = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0xd));
      lVar2 = param_1[0xd];
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_3;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  piVar1 = (int *)*param_4;
  param_1[0xe] = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0xe));
      lVar2 = param_1[0xe];
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_4;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  QMutex::QMutex((QMutex *)(param_1 + 0x11),0);
  puVar4 = PTR_shared_null_100ba2180;
  param_1[0x12] = PTR_shared_null_100ba2180;
  QMutex::QMutex((QMutex *)(param_1 + 0x13),0);
  param_1[0x14] = puVar4;
  return;
}

