
void FUN_100a39180(long param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  long lVar4;
  Data *local_48;
  Data *local_40;
  int *local_38;
  undefined1 local_29;
  
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0xc) == *(int *)(lVar4 + 8)) {
    return;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    if (*(long *)(param_1 + 0x88) == lVar4) {
      return;
    }
    FUN_100a3f920(&local_38,param_2);
    piVar2 = *(int **)(param_1 + 0x88);
    *(int **)(param_1 + 0x88) = local_38;
    if (*piVar2 == -1) {
      return;
    }
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return;
      }
      local_29 = 0;
    }
    local_38 = piVar2;
    FUN_100a3fda0(&local_38,piVar2);
    return;
  }
  FUN_100a3ee80(&local_40,FUN_100a3ef60);
  FUN_100a3ee80(&local_48,FUN_100a3ef70);
  iVar1 = *(int *)(local_40 + 8);
  if (*(int *)(local_40 + 0xc) != iVar1) {
    pDVar3 = local_40 + (long)iVar1 * 8 + 0x10;
    lVar4 = (long)*(int *)(local_40 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      FUN_100a3a020(param_1,*(undefined8 *)pDVar3,param_2);
      pDVar3 = pDVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (*(int *)(local_48 + 0xc) != *(int *)(local_48 + 8)) {
    FUN_100a39ef0(param_1,&local_48,param_2);
  }
  if ((*(int *)(local_40 + 0xc) == *(int *)(local_40 + 8)) &&
     (*(int *)(local_48 + 0xc) == *(int *)(local_48 + 8))) {
    FUN_100a39dc0(param_1,param_2);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      local_38 = (int *)CONCAT71(local_38._1_7_,*(int *)local_48 != 0);
      if (*(int *)local_48 != 0) goto LAB_100a392cc;
    }
    QListData::dispose(local_48);
  }
LAB_100a392cc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      local_38 = (int *)CONCAT71(local_38._1_7_,*(int *)local_40 != 0);
      if (*(int *)local_40 != 0) {
        return;
      }
    }
    QListData::dispose(local_40);
  }
  return;
}

