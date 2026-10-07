
undefined8 FUN_1005249e0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  ulong uVar8;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    return 0xf0000014;
  }
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000003;
  }
  lVar5 = FUN_1002a6120(param_2,0,0);
  puVar4 = PTR_nothrow_100ba21c8;
  if (lVar5 == 0) {
    return 0xf000001c;
  }
  uVar2 = *(uint *)(lVar5 + 8);
  if (uVar2 < 0x1c) {
    return 0xf0000003;
  }
  uVar8 = (ulong)(uVar2 + 4);
  pvVar6 = operator_new__(uVar8,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_40 = operator_new(0x18,(nothrow_t *)puVar4);
  if (local_40 == (long *)0x0) {
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    local_40 = (long *)0x0;
  }
  else {
    *(undefined4 *)(local_40 + 1) = 1;
    local_40[2] = (long)pvVar6;
    *local_40 = (long)&PTR_FUN_10111cc30;
    if (pvVar6 != (void *)0x0) {
      puVar3 = (undefined4 *)local_40[2];
      *puVar3 = 4;
      FUN_1002a5990(lVar5,0,puVar3 + 1,uVar2);
      local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
      uVar7 = 0;
      FUN_100519ab0(param_1 + 0x28,&local_48,&local_40,uVar8,0,0);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100524b5d;
        }
        QArrayData::deallocate(local_48,2,8);
      }
      goto LAB_100524b5d;
    }
  }
  uVar7 = 0xf0000011;
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","ShellIntHost",1,"failed to allocate %u bytes",uVar8);
  }
LAB_100524b5d:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar7;
}

