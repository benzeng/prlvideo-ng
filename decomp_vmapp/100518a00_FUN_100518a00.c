
void FUN_100518a00(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  Data *pDVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (param_4 != 0x30) {
    return;
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    uVar5 = *(undefined8 *)(*param_3 + 0x10);
  }
  QMutex::lock();
  pDVar1 = *(Data **)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_100ba2188;
  QMutex::unlock();
  local_58 = pDVar1;
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 == 0) {
      QListData::detach((int)&local_58);
      lVar3 = (long)*(int *)(local_58 + 8);
      if ((pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 != local_58 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_58 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar3 * 8 + 0x10,pDVar1 + (long)*(int *)(pDVar1 + 8) * 8 + 0x10,lVar4 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + 1;
      local_31 = *(int *)pDVar1 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar2 = *(undefined8 *)local_50;
      lVar3 = FUN_1002a6120(uVar2,0,1);
      FUN_1002a5a50(lVar3,0,uVar5,0x30);
      *(undefined4 *)(lVar3 + 0x10) = 0x30;
      FUN_1004c07d0(param_1,uVar2,0);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100518b6a;
    }
    QListData::dispose(local_58);
  }
LAB_100518b6a:
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      local_31 = *(int *)pDVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QListData::dispose(pDVar1);
  }
  return;
}

