
void FUN_1005426c0(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  int iVar1;
  Data *pDVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  int local_38;
  undefined1 local_31;
  
  if (param_4 != 4) {
    return;
  }
  iVar1 = **(int **)(*param_3 + 0x10);
  local_38 = iVar1;
  QMutex::lock();
  if (iVar1 == *(int *)(param_1 + 0x78)) {
    bVar7 = true;
    goto LAB_100542843;
  }
  *(int *)(param_1 + 0x78) = iVar1;
  pDVar2 = *(Data **)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = PTR_shared_null_100ba2188;
  bVar7 = false;
  QMutex::unlock();
  local_58 = pDVar2;
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      if ((pDVar2 + (long)*(int *)(pDVar2 + 8) * 8 != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,pDVar2 + (long)*(int *)(pDVar2 + 8) * 8 + 0x10,lVar6 * 8
               );
      }
    }
    else {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + 1;
      local_31 = *(int *)pDVar2 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar3 = *(undefined8 *)local_50;
      uVar4 = FUN_1002a6120(uVar3,0,1);
      FUN_1002a5a50(uVar4,0,&local_38,4);
      FUN_1004c07d0(param_1,uVar3,0);
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
      if ((bool)local_31) goto LAB_100542820;
    }
    QListData::dispose(local_58);
  }
LAB_100542820:
  if (*(int *)pDVar2 != -1) {
    if (*(int *)pDVar2 != 0) {
      LOCK();
      *(int *)pDVar2 = *(int *)pDVar2 + -1;
      local_31 = *(int *)pDVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100542843;
    }
    QListData::dispose(pDVar2);
  }
LAB_100542843:
  if (bVar7) {
    QMutex::unlock();
  }
  return;
}

