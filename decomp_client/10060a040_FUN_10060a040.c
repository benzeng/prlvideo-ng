
void FUN_10060a040(long param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  undefined *local_40;
  _func_void_Node_ptr *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  puVar4 = PTR_shared_null_1021e15d0;
  local_40 = PTR_shared_null_1021e15d0;
  local_30 = param_2;
  FUN_100612f60(&local_38,param_1 + 0x68,param_3,&local_40);
  iVar3 = *(int *)(puVar4 + 0x10);
  if (iVar3 != -1) {
    if (iVar3 != 0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a0a6;
    }
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
  }
LAB_10060a0a6:
  FUN_100613070(&local_68,&local_38,&local_30);
  FUN_100614750(&local_60,&local_68);
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 == -1) {
LAB_10060a153:
    for (; local_58 != local_50; local_58 = local_58 + 8) {
      cVar5 = FUN_10019cd90(*(undefined8 *)local_58);
      if (cVar5 != '\0') {
        FUN_10060a320();
      }
      local_48 = 1;
    }
  }
  else {
    if (*(int *)local_68 == 0) {
LAB_10060a10a:
      FUN_100322470(&local_68,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                    local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10);
      QListData::dispose(local_68);
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_10060a10a;
    }
    if (local_48 != 0) goto LAB_10060a153;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060a213;
    }
    FUN_100322470(&local_60,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                  local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10);
    QListData::dispose(local_60);
  }
LAB_10060a213:
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_38 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_29 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return;
      }
    }
    QHashData::free_helper(local_38);
  }
  return;
}

