
void FUN_1005253a0(long param_1,void *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  puVar3 = PTR_nothrow_100ba21c8;
  uVar5 = (ulong)param_3;
  pvVar4 = operator_new__(uVar5,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_40 = operator_new(0x18,(nothrow_t *)puVar3);
  if (local_40 == (long *)0x0) {
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    local_40 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_40 + 1) = 1;
    local_40[2] = (long)pvVar4;
    *local_40 = (long)&PTR_FUN_10111cc30;
    if (pvVar4 != (void *)0x0) {
      _memcpy((void *)local_40[2],param_2,uVar5);
      local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
      FUN_100519ab0(param_1 + 0x28,&local_48,&local_40,param_3,0,0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005254b6;
        }
        QArrayData::deallocate(local_48,2,8);
      }
      goto LAB_1005254b6;
    }
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","ShellIntHost",1,"sendDataAsync: failed to allocate %u bytes",uVar5);
  }
LAB_1005254b6:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return;
}

