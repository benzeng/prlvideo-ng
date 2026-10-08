
void FUN_100a6c3d0(QReadWriteLock *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  Data *pDVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = param_2;
  QReadWriteLock::QReadWriteLock(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  param_1[0x10] = (QReadWriteLock)0x1;
  auVar6._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar6._0_8_ = PTR_shared_null_1021e15d0;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar6;
  puVar3 = (undefined4 *)FUN_100a6e050(param_1 + 0x20,&local_38);
  *puVar3 = param_2;
  FUN_100a6e680(&local_58,param_4);
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar1 = **(undefined4 **)local_50;
      local_5c = uVar1;
      puVar3 = (undefined4 *)FUN_100a6e050(param_1 + 0x20,&local_5c);
      *puVar3 = uVar1;
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_58 + 0xc);
    if (iVar2 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = local_58 + (long)iVar2 * 8 + 8;
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
  return;
}

