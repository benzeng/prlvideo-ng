
int FUN_100114fc0(long param_1,void *param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 uVar9;
  char *pcVar10;
  QArrayData *local_ad0;
  QArrayData *local_ac8;
  int local_abc;
  QArrayData *local_ab8;
  undefined1 local_aa9;
  void *local_aa8;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined1 local_a98 [1144];
  long local_620;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_ab8 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_38 = lVar1;
  iVar5 = FUN_1007da300("vm.assert",0);
  bVar3 = iVar5 != 0;
  *(uint *)(param_1 + 0x1c) = bVar3 + 2 + (uint)bVar3;
  if (iVar5 == 0) {
    uVar9 = 1;
    FUN_1008e3970("","vm",0,"Monitor Module: 64-bit Assertions: Off");
  }
  else {
    uVar9 = 3;
    FUN_1008e3970("","vm",0,"Monitor Module: 64-bit Assertions: On");
  }
  FUN_1000e9fd0(&local_ac8,uVar9);
  QByteArray::operator=((QByteArray *)&local_ab8,(QByteArray *)&local_ac8);
  if (*(int *)local_ac8 != -1) {
    if (*(int *)local_ac8 != 0) {
      LOCK();
      *(int *)local_ac8 = *(int *)local_ac8 + -1;
      local_aa9 = *(int *)local_ac8 != 0;
      UNLOCK();
      if ((bool)local_aa9) goto LAB_1001150bc;
    }
    QArrayData::deallocate(local_ac8,1,8);
  }
LAB_1001150bc:
  if (*(uint *)(local_ab8 + 4) == 0) {
    FUN_1008e3970("","vm",0,"Failed to read monitor binary");
    iVar5 = -0x7ffffe6b;
LAB_1001153ff:
    FUN_100115760(param_1 + 0x298);
    plVar2 = *(long **)(*(long *)(param_1 + 0x10) + 0x1a50);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1a50) = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_100544ef0(*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    FUN_1008e3970("","vm",0,"Monitor loading phase failed!");
  }
  else {
    *(uint *)(param_1 + 0x28) = *(uint *)(local_ab8 + 4);
    local_aa0 = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    iVar5 = FUN_1007da300("kernel.fast_hyperswitch",1);
    if (iVar5 == 0) {
      bVar3 = false;
    }
    else if ((*(ulong *)((long)param_2 + 0x488) & 0x804) == 0x804) {
      if (*(int *)((long)param_2 + 0x9bc) == 0) {
        local_aa0 = 1;
        *(undefined4 *)(param_1 + 8) = 2;
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
    }
    else {
      bVar3 = false;
    }
    uVar6 = *(int *)(param_1 + 8) - 1;
    if (uVar6 < 4) {
      pcVar10 = (&PTR_s_SelfContext_100ba9780)[(int)uVar6];
    }
    else {
      pcVar10 = "Unknown";
    }
    FUN_1008e3970("","vm",0,"VMM mode %s",pcVar10);
    pvVar8 = (void *)FUN_100544e90(*(uint *)(local_ab8 + 4));
    *(void **)(param_1 + 0x20) = pvVar8;
    if (pvVar8 == (void *)0x0) {
      FUN_1008e3970("","vm",0,"Failed to allocate memory for monitor image!");
      iVar5 = -0x7ffffe6a;
      goto LAB_1001153ff;
    }
    local_a9c = *(undefined4 *)(param_1 + 0x28);
    local_aa8 = pvVar8;
    if ((1 < *(uint *)local_ab8) || (*(long *)(local_ab8 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_ab8,*(uint *)(local_ab8 + 4) + 1,*(uint *)(local_ab8 + 8) >> 0x1f);
    }
    _memcpy(pvVar8,local_ab8 + *(long *)(local_ab8 + 0x10),(long)(int)*(uint *)(local_ab8 + 4));
    _memcpy(local_a98,param_2,0xa58);
    iVar7 = FUN_100111070(param_1,0x81b,&local_aa8,0xa69,0xa69,&local_abc);
    if (iVar7 != 0) {
      FUN_1008e3970("","vm",0,"Failed to load monitor!%x",iVar7);
      iVar5 = -0x7ffffaa7;
      if (iVar7 != -0x7ffffff5) {
        iVar5 = (iVar7 == -0x7fffffff) + 0x80000195;
      }
      goto LAB_1001153ff;
    }
    if (local_abc != 0xa69) {
      FUN_1008e3970("","vm",0,"IOCTL_LOAD_MONITOR incoherency: expected %lu output bytes, got %u",
                    0xa69);
      iVar5 = -0x7ffffe6b;
      goto LAB_1001153ff;
    }
    *(long *)((long)param_2 + 0x478) = local_620;
    FUN_1000e9fd0(&local_ad0,*(undefined4 *)(param_1 + 0x1c));
    FUN_1001142f0(param_1 + 0x298,&local_ad0,local_620 + 0x100000000000);
    if (*(int *)local_ad0 != -1) {
      if (*(int *)local_ad0 != 0) {
        LOCK();
        *(int *)local_ad0 = *(int *)local_ad0 + -1;
        local_aa9 = *(int *)local_ad0 != 0;
        UNLOCK();
        if ((bool)local_aa9) goto LAB_100115359;
      }
      QArrayData::deallocate(local_ad0,1,8);
    }
LAB_100115359:
    if (bVar3) {
      FUN_1008e3970("","vm",0,"KVMM base is %llx",local_620);
    }
    pvVar8 = operator_new(0xbd10);
    FUN_1000f6b90(pvVar8);
    FUN_1000f6d00(pvVar8,local_620,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    uVar4 = FUN_1000a7060(*(undefined8 *)(param_1 + 0x10));
    FUN_1000f5c80(pvVar8,uVar4);
    *(void **)(*(long *)(param_1 + 0x10) + 0x1a50) = pvVar8;
    iVar5 = 0;
  }
  if (*(int *)local_ab8 != -1) {
    if (*(int *)local_ab8 != 0) {
      LOCK();
      *(int *)local_ab8 = *(int *)local_ab8 + -1;
      local_aa9 = *(int *)local_ab8 != 0;
      UNLOCK();
      if ((bool)local_aa9) goto LAB_1001154b6;
    }
    QArrayData::deallocate(local_ab8,1,8);
  }
LAB_1001154b6:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

