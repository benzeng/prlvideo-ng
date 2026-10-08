
void FUN_10035c150(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  Data *pDVar4;
  long lVar5;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  Data *local_38;
  undefined1 local_29;
  
  FUN_100722e10(&local_38,param_2,0);
  FUN_10035d2b0(&local_58,&local_38);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
      (**(code **)(*plVar1 + 200))(plVar1,**(undefined4 **)local_50,1);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10035c24f;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_58 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_10035c24f:
  iVar3 = *(int *)(local_38 + 0xc) - *(int *)(local_38 + 8);
  if (iVar3 != 0 && *(int *)(local_38 + 8) <= *(int *)(local_38 + 0xc)) {
    lVar5 = (long)iVar3;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
      (**(code **)(*plVar1 + 200))
                (plVar1,**(undefined4 **)
                          (local_38 + ((long)*(int *)(local_38 + 8) + lVar5 + -1) * 8 + 0x10),0);
      bVar2 = 1 < lVar5;
      lVar5 = lVar5 + -1;
    } while (bVar2);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38 + 0xc);
    if (iVar3 != *(int *)(local_38 + 8)) {
      lVar5 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar3 * -8;
      pDVar4 = local_38 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar4 != (void *)0x0) {
          operator_delete(*(void **)pDVar4);
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

