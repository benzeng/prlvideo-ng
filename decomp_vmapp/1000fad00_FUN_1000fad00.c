
undefined8 FUN_1000fad00(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_58;
  QArrayData *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  local_40 = (long *)0x0;
  uVar5 = 0;
  FUN_1008e3970("","vm",0,"get a new package");
  QMutex::lock();
  if (*(long *)(param_2 + 0x20) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
  }
  uVar4 = 0;
  if (*param_3 != 0) {
    uVar4 = *(undefined8 *)(*param_3 + 0x10);
  }
  cVar3 = FUN_1007972b0(uVar5,param_2 + 0x28,uVar4,param_3,&local_40,1);
  if (cVar3 == '\0') {
    if (local_40 == (long *)0x0) {
      FUN_1008e3970("","vm",0,"Error: can\'t allocate new job!");
      local_48 = (long *)0x0;
      FUN_100795cd0(param_1,&local_48);
      if (local_48 != (long *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      goto LAB_1000fae52;
    }
    uVar5 = 0;
    if (*local_40 != 0) {
      uVar5 = *(undefined8 *)(*local_40 + 0x10);
    }
    FUN_1007964d0(uVar5,7);
    uVar5 = 0;
    if (*local_40 != 0) {
      uVar5 = *(undefined8 *)(*local_40 + 0x10);
    }
    local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_58 = (long *)0x0;
    FUN_100796540(uVar5,7,&local_50,&local_58);
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000fae46;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  else {
    QWaitCondition::wakeOne();
  }
LAB_1000fae46:
  FUN_100795cd0(param_1,local_40);
LAB_1000fae52:
  QMutex::unlock();
  return param_1;
}

