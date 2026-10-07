
undefined8 FUN_1003fb3b0(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar5 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                   0xfffffffffffffffe);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5);
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    lVar6 = 0;
    if (plVar2[2] != 0) {
      lVar6 = ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba21d0,0);
    }
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    if (lVar6 != 0) {
      iVar4 = CVmHardDisk::getOnlineCompactMode();
      iVar4 = (**(code **)(*plVar5 + 0x278))(plVar5,iVar4 == 1);
      if (iVar4 != -0x7ffdefe9) {
        return 0;
      }
      *param_2 = *param_2 + 1;
      return 0;
    }
  }
  (**(code **)(*plVar5 + 0x170))(&local_40,plVar5);
  QString::toUtf8();
  FUN_1008e3970("","HddUtils",0,"Unable to get config for [%s] ",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003fb530;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1003fb530:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0xffffffff;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return 0xffffffff;
}

