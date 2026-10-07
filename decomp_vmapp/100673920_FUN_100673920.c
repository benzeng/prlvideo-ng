
undefined8 * FUN_100673920(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *local_28;
  undefined1 local_19;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  QString::operator=((QString *)(param_1 + 2),(QString *)(param_2 + 2));
  QString::operator=((QString *)(param_1 + 3),(QString *)(param_2 + 3));
  piVar6 = (int *)param_2[4];
  if ((int *)param_1[4] != piVar6) {
    local_28 = piVar6;
    if (*piVar6 != -1) {
      if (*piVar6 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = local_28[2];
        if (iVar1 != local_28[3]) {
          puVar5 = (undefined8 *)(param_2[4] + 0x10 + (long)*(int *)(param_2[4] + 8) * 8);
          piVar6 = local_28 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_28[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar5;
            *(int **)piVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_19 = *piVar2 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_19 = *piVar6 != 0;
        UNLOCK();
      }
    }
    piVar6 = (int *)param_1[4];
    param_1[4] = local_28;
    local_28 = piVar6;
    FUN_100013180(&local_28);
  }
  piVar6 = (int *)param_2[5];
  if ((int *)param_1[5] != piVar6) {
    local_28 = piVar6;
    if (*piVar6 != -1) {
      if (*piVar6 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = local_28[2];
        if (iVar1 != local_28[3]) {
          puVar5 = (undefined8 *)(param_2[5] + 0x10 + (long)*(int *)(param_2[5] + 8) * 8);
          piVar6 = local_28 + (long)iVar1 * 2 + 4;
          lVar4 = (long)local_28[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar5;
            *(int **)piVar6 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_19 = *piVar2 != 0;
              UNLOCK();
            }
            piVar6 = piVar6 + 2;
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      else {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_19 = *piVar6 != 0;
        UNLOCK();
      }
    }
    piVar6 = (int *)param_1[5];
    param_1[5] = local_28;
    local_28 = piVar6;
    FUN_100013180(&local_28);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  QString::operator=((QString *)(param_1 + 7),(QString *)(param_2 + 7));
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xb] = param_2[0xb];
  param_1[10] = param_2[10];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  return param_1;
}

