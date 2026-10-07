
void FUN_1000539a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  long *param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_100ba8510;
  piVar2 = (int *)*param_5;
  param_1[2] = piVar2;
  if (*piVar2 != -1) {
    if (*piVar2 == 0) {
      QListData::detach((int)(param_1 + 2));
      lVar5 = param_1[2];
      iVar1 = *(int *)(lVar5 + 8);
      if (iVar1 != *(int *)(lVar5 + 0xc)) {
        puVar3 = (undefined8 *)(*param_5 + 0x10 + (long)*(int *)(*param_5 + 8) * 8);
        puVar4 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
        lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar3;
          *puVar4 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  param_1[3] = PTR_shared_null_100ba20d0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[9] = 0;
  param_1[10] = PTR_shared_null_100ba2188;
  QFile::QFile((QFile *)(param_1 + 0xb));
  param_1[0xd] = 0;
  piVar2 = (int *)*param_3;
  param_1[0xe] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return;
}

