
long * FUN_100473790(long *param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int *local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  QMutex::lock();
  FUN_100478620(&local_30,param_2 + 0x18);
  *param_1 = (long)local_30;
  if (*local_30 != -1) {
    if (*local_30 == 0) {
      QListData::detach((int)param_1);
      lVar3 = *param_1;
      iVar1 = *(int *)(lVar3 + 8);
      if (iVar1 != *(int *)(lVar3 + 0xc)) {
        local_30 = local_30 + (long)local_30[2] * 2 + 4;
        puVar4 = (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8);
        lVar3 = (long)*(int *)(lVar3 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_30;
          *puVar4 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_21 = *piVar2 != 0;
            UNLOCK();
          }
          puVar4 = puVar4 + 1;
          local_30 = local_30 + 2;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *local_30 = *local_30 + 1;
      local_22 = *local_30 != 0;
      UNLOCK();
    }
  }
  FUN_100013180(&local_30);
  QMutex::unlock();
  return param_1;
}

