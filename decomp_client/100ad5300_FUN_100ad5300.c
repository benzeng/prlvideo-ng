
void FUN_100ad5300(long param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  Data *pDVar5;
  Data *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 0xac8) = param_2;
  cVar2 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  piVar4 = (int *)PTR_shared_null_1021e15e8;
  if (cVar2 == '\0') goto LAB_100ad5433;
  local_40 = PTR_shared_null_1021e15e8;
  FUN_1000abcb0(&local_48,&local_40);
  FUN_100ad3ab0(param_1,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad53c7;
    }
    iVar1 = *(int *)(local_48 + 0xc);
    if (iVar1 != *(int *)(local_48 + 8)) {
      lVar3 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_48 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar5 != (void *)0x0) {
          operator_delete(*(void **)pDVar5);
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    piVar4 = (int *)PTR_shared_null_1021e15e8;
    QListData::dispose(local_48);
  }
LAB_100ad53c7:
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ad5433;
    }
    iVar1 = piVar4[3];
    if (iVar1 != piVar4[2]) {
      lVar3 = (long)piVar4[2] * 8 + (long)iVar1 * -8;
      piVar4 = piVar4 + (long)iVar1 * 2 + 2;
      do {
        if (*(void **)piVar4 != (void *)0x0) {
          operator_delete(*(void **)piVar4);
        }
        piVar4 = piVar4 + -2;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_100ad5433:
  FUN_100ae33f0(param_1,param_2);
  return;
}

