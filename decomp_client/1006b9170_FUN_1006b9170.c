
undefined8 * FUN_1006b9170(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_58 = *(Data **)(param_2 + 0x28);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar5 = (long)*(int *)(local_58 + 8);
      lVar1 = *(long *)(param_2 + 0x28);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_58 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_58 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      local_60 = *(undefined8 *)local_50;
      uVar3 = FUN_1006947d0();
      puVar2 = *(undefined8 **)(param_2 + 0x38);
      iVar8 = 0;
      if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
        uVar7 = *(uint *)((long)puVar2 + 0x24) ^ uVar3;
        for (puVar4 = *(undefined8 **)
                       (puVar2[1] + ((ulong)uVar7 % (ulong)*(uint *)(puVar2 + 4)) * 8);
            puVar4 != puVar2; puVar4 = (undefined8 *)*puVar4) {
          if ((*(uint *)(puVar4 + 1) == uVar7) && (uVar3 == *(uint *)((long)puVar4 + 0xc))) {
            iVar8 = 0;
            if (puVar4 != puVar2) {
              iVar8 = *(int *)(puVar4 + 2);
            }
            break;
          }
        }
      }
      if (iVar8 == param_3) {
        FUN_100072390(param_1,&local_60);
      }
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
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

