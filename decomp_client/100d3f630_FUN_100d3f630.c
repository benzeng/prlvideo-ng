
void FUN_100d3f630(long *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *local_28;
  QLocale local_20 [15];
  undefined1 local_11;
  
  piVar5 = (int *)*param_1;
  if (piVar5[3] == piVar5[2]) {
    FUN_100d3e840(&local_28);
  }
  else {
    local_28 = piVar5;
    if (*piVar5 != -1) {
      if (*piVar5 == 0) {
        QListData::detach((int)&local_28);
        iVar1 = local_28[2];
        if (iVar1 != local_28[3]) {
          puVar4 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
          piVar5 = local_28 + (long)iVar1 * 2 + 4;
          lVar3 = (long)local_28[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = (int *)*puVar4;
            *(int **)piVar5 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_11 = *piVar2 != 0;
              UNLOCK();
            }
            piVar5 = piVar5 + 2;
            puVar4 = puVar4 + 1;
            lVar3 = lVar3 + -8;
          } while (lVar3 != 0);
        }
      }
      else {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_11 = *piVar5 != 0;
        UNLOCK();
      }
    }
  }
  FUN_100d3f450(local_20,&local_28);
  QLocale::setDefault(local_20);
  QLocale::~QLocale(local_20);
  FUN_100039a80(&local_28);
  return;
}

