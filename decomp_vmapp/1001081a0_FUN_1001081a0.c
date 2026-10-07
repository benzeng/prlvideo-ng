
long FUN_1001081a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  QArrayData *local_60;
  long *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pvVar3 = operator_new(0x18);
  FUN_1007d6bd0(local_48);
  FUN_1007d6a70(&local_60,local_48);
  FUN_100107980(pvVar3,param_2,&local_60);
  plVar4 = (long *)FUN_100109130(pvVar3,0);
  local_58 = plVar4;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10010823e;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10010823e:
  QMutex::lock();
  FUN_1001089d0(param_1 + 0x18,&local_58);
  *(int *)(plVar4[2] + 0x10) = *(int *)(plVar4[2] + 0x10) + 1;
  lVar5 = 0;
  if (plVar4 != (long *)0x0) {
    lVar5 = plVar4[2];
  }
  QMutex::unlock();
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

