
undefined8 FUN_100582470(long *param_1,long param_2,long param_3)

{
  char cVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1);
    if ((char)param_1[10] != '\0') {
      FUN_1008e3970("","vdisk",0,
                    "Previous rollback operation failed! Any further work with this manager is impossible!"
                   );
      (**(code **)(*param_1 + 0xf0))(param_1);
      return 0x80000516;
    }
    param_1[6] = param_2;
    param_1[7] = param_3;
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  FUN_100583d60(&local_38,(int)param_1[8]);
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Init called in incorrect state (%s)",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100582505;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100582505:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x80000516;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0x80000516;
}

