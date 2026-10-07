
long * FUN_1003fa9e0(long param_1,undefined8 param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_1 == 0) {
    FUN_1008e3970("","HddUtils",0,"Error: async device must not be null!");
    return (long *)0x0;
  }
  iVar2 = FUN_1007da300("devices.hdd.raw",1);
  plVar4 = (long *)FUN_100407f00(param_2);
  if (plVar4 != (long *)0x0) {
    *param_3 = 0;
    (**(code **)(*plVar4 + 0x248))(plVar4,param_1);
    pcVar1 = *(code **)(*plVar4 + 200);
    uVar3 = FUN_1003fac50();
    (*pcVar1)(plVar4,uVar3);
    return plVar4;
  }
  uVar5 = 0x2003;
  if (iVar2 == 0) {
    uVar5 = 3;
  }
  plVar4 = (long *)FUN_10059ac80(param_2,uVar5,param_3);
  if (plVar4 == (long *)0x0) {
    return (long *)0x0;
  }
  (**(code **)(*plVar4 + 0x248))(plVar4,param_1);
  pcVar1 = *(code **)(*plVar4 + 200);
  uVar3 = FUN_1003fac50();
  (*pcVar1)(plVar4,uVar3);
  local_40 = *(QArrayData **)(DAT_1011c3698 + 0x128);
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  if (*(int *)(local_40 + 4) == 0) goto LAB_1003fab88;
  pcVar1 = *(code **)(*plVar4 + 0x1b8);
  QString::toUtf8();
  iVar2 = (*pcVar1)(plVar4,&local_48);
  *param_3 = iVar2;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
LAB_1003fab3c:
      QArrayData::deallocate(local_48,1,8);
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003fab3c;
    }
    iVar2 = *param_3;
  }
  if (iVar2 < 0) {
    FUN_1008e3970("","HddUtils",0,"Set key failed! Destruct disk object.");
    (**(code **)(*plVar4 + 0x10))(plVar4);
    plVar4 = (long *)0x0;
  }
LAB_1003fab88:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return plVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return plVar4;
}

