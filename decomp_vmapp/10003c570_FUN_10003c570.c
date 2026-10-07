
void FUN_10003c570(long param_1,int param_2)

{
  Data *pDVar1;
  undefined8 *puVar2;
  int iVar3;
  Data *local_30;
  undefined1 local_21;
  
  if (param_2 == 3) {
    local_30 = (Data *)PTR_shared_null_100ba2188;
    QMutex::lock();
    pDVar1 = *(Data **)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = PTR_shared_null_100ba2188;
    local_30 = pDVar1;
    QMutex::unlock();
    iVar3 = *(int *)(pDVar1 + 0xc) - *(int *)(pDVar1 + 8);
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      puVar2 = (undefined8 *)FUN_10003c6b0(&local_30,iVar3);
      FUN_1004c07d0(param_1,*puVar2,0xf0000020);
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_21 = 0;
      }
      QListData::dispose(local_30);
    }
  }
  return;
}

