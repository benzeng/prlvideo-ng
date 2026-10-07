
int FUN_1005fae80(long *param_1)

{
  int iVar1;
  long *plVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((int)param_1[8] == 1) {
    *(undefined4 *)(param_1 + 8) = 2;
    plVar2 = (long *)param_1[3];
    while( true ) {
      if (plVar2 == param_1 + 3) {
        *(undefined4 *)(param_1 + 8) = 3;
        return 0;
      }
      (**(code **)(*param_1 + 0xc0))(param_1,1);
      if (*(char *)((long)param_1 + 0x44) != '\0') break;
      *(undefined4 *)(plVar2 + -1) = 2;
      iVar1 = (**(code **)(*param_1 + 0x60))(param_1,plVar2[-2]);
      if (iVar1 < 0) {
        FUN_1008e3970("","vdisk",0,"Caught error at execution 0x%x",iVar1);
        goto LAB_1005fb011;
      }
      *(undefined4 *)(plVar2 + -1) = 3;
      *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
      plVar2 = (long *)*plVar2;
    }
    FUN_1008e3970("","vdisk",0,"Termination request found.");
    iVar1 = -0x7ffdefc8;
LAB_1005fb011:
    (**(code **)(*param_1 + 0xc0))(param_1,iVar1);
    return iVar1;
  }
  FUN_1005fcd30(&local_40);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Execute called in incorrect state (%s)",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005fafa7;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005fafa7:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return -0x7ffffaea;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return -0x7ffffaea;
}

