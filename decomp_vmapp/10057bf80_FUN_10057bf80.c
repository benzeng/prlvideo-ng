
int FUN_10057bf80(long param_1,undefined8 param_2,byte param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  QArrayData *local_60;
  QArrayData *local_58;
  char local_4a;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  *(undefined1 *)(param_1 + 0x11d8) = 1;
  local_4a = '\0';
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x10);
  (**(code **)(*plVar3 + 0xb8))(local_48,plVar3,param_2,&local_4a);
  if (local_4a != '\0') {
    plVar3 = (long *)0x0;
    if (*(long *)(param_1 + 8) != 0) {
      plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x10);
    }
    iVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,param_2,param_3 ^ 1,local_48);
    if (iVar1 < 0) {
      FUN_1008e3970("","vdisk",0,"RemoveSnapshot failed with 0x%X",iVar1);
    }
    else {
      plVar3 = (long *)0x0;
      if (*(long *)(param_1 + 8) != 0) {
        plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x10);
      }
      iVar1 = (**(code **)(*plVar3 + 0x18))();
      if (iVar1 < 0) {
        FUN_1008e3970("","vdisk",0,"SaveDescriptor failed with 0x%X",iVar1);
      }
    }
    goto LAB_10057c130;
  }
  FUN_1007d6a70(&local_60,param_2);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"State with UID \'%s\' does not exist.",
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10057c0d7;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_10057c0d7:
  iVar1 = -0x7ffe6fec;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10057c130;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10057c130:
  QMutex::unlock();
  if (param_4 != (code *)0x0) {
    iVar2 = 0x3ed;
    if (iVar1 < 0) {
      iVar2 = iVar1;
    }
    (*param_4)(iVar2,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar1;
}

