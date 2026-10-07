
undefined8 *
FUN_100069450(undefined8 *param_1,undefined4 param_2,char *param_3,uint param_4,long *param_5,
             char param_6)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long *local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  *param_1 = 0;
  if ((*param_5 == 0) || (*(long *)(*param_5 + 0x10) == 0)) {
    FUN_10078f4f0(&local_38,param_2,1,&DAT_1011ccb98,1);
    if (local_38 != (long *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    *param_1 = local_38;
    plVar4 = local_38;
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  else if (param_6 == '\0') {
    FUN_10078f4f0(&local_48,param_2,1,param_5,1);
    if (local_48 != (long *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    *param_1 = local_48;
    plVar4 = local_48;
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
  }
  else {
    FUN_100790f30(&local_40,param_5,1);
    if (local_40 != (long *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    *param_1 = local_40;
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    *(undefined4 *)(local_40[2] + 0x40) = param_2;
    plVar4 = local_40;
  }
  if (param_4 != 0) {
    pvVar2 = operator_new__((ulong)param_4);
    local_50 = operator_new(0x18);
    *(undefined4 *)(local_50 + 1) = 1;
    local_50[2] = (long)pvVar2;
    *local_50 = (long)&PTR_FUN_100bef320;
    QDataStream::readRawData(param_3,(int)pvVar2);
    lVar3 = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = plVar4[2];
    }
    FUN_10078f910(lVar3,0,0,&local_50,param_4);
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  return param_1;
}

