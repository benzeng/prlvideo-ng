
undefined8 FUN_1005a95d0(long *param_1)

{
  int iVar1;
  long *plVar2;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((int)param_1[8] == 7) {
    *(undefined4 *)(param_1 + 8) = 8;
    plVar2 = (long *)param_1[3];
    if (plVar2 != param_1 + 3) {
      do {
        *(undefined4 *)(plVar2 + -1) = 8;
        iVar1 = (**(code **)(*param_1 + 0x78))(param_1,plVar2[-2]);
        if (iVar1 < 0) {
          (**(code **)(*param_1 + 0xa0))(&local_58,param_1,plVar2[-2]);
          QString::toLocal8Bit();
          FUN_1008e3970("","vdisk",0,"Error finalizing entry %s with code 0x%x",
                        local_50 + *(long *)(local_50 + 0x10),iVar1);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a96bb;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_1005a96bb:
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005a96f0;
            }
            QArrayData::deallocate(local_58,2,8);
          }
        }
        else {
          *(undefined4 *)(plVar2 + -1) = 9;
        }
LAB_1005a96f0:
        plVar2 = (long *)*plVar2;
      } while (plVar2 != param_1 + 3);
    }
    (**(code **)(*param_1 + 0xa8))(param_1,0);
    (**(code **)(*param_1 + 0xd8))(param_1);
    *(undefined4 *)(param_1 + 8) = 9;
    (**(code **)(*param_1 + 0xf0))(param_1);
    return 0;
  }
  FUN_1005a9cd0(&local_48);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Invalid class state at finalize call %s",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005a979f;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1005a979f:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0x80000516;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0x80000516;
}

