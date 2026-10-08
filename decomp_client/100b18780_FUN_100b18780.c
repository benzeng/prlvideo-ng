
int FUN_100b18780(long *param_1,long param_2,int param_3,long *param_4,long *param_5,long *param_6,
                 long *param_7,long *param_8,long *param_9,undefined8 param_10)

{
  char cVar1;
  int iVar2;
  long *local_58;
  long local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if ((param_2 != 0) && (*(int *)(param_1[4] + 0x10) != param_3)) {
    FUN_100df99c0("Reclaim","dimg",0,"Incoming block size %u is not equal to current block size %u",
                  param_3);
    return -0x7ffffffd;
  }
  cVar1 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("Reclaim","dimg",0,"Disk \"%s\" is not opened, bitmap compacting failed. [%p]",
                  local_40 + *(long *)(local_40 + 0x10),
                  *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
    if (*(int *)local_40 == -1) {
      return -0x7ffdefdf;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return -0x7ffdefdf;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return -0x7ffdefdf;
  }
  FUN_100b1c160(param_4,param_4[1]);
  param_4[2] = 0;
  *param_4 = (long)(param_4 + 1);
  param_4[1] = 0;
  FUN_100b1c160(param_5,param_5[1]);
  param_5[2] = 0;
  *param_5 = (long)(param_5 + 1);
  param_5[1] = 0;
  FUN_100b1c160(param_6,param_6[1]);
  param_6[2] = 0;
  *param_6 = (long)(param_6 + 1);
  param_6[1] = 0;
  FUN_100b1c1a0(param_7,param_7[1]);
  param_7[2] = 0;
  *param_7 = (long)(param_7 + 1);
  param_7[1] = 0;
  FUN_100b1c160(param_8,param_8[1]);
  param_8[2] = 0;
  *param_8 = (long)(param_8 + 1);
  param_8[1] = 0;
  FUN_100b1c160(param_9,param_9[1]);
  param_9[2] = 0;
  *param_9 = (long)(param_9 + 1);
  param_9[1] = 0;
  QString::toUtf8();
  FUN_100df99c0("Reclaim","dimg",0,"Processing image: %s",local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b18932;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100b18932:
  FUN_100df99c0("Reclaim","dimg",0,"Creating map of all referenced blocks and duplicated blocks");
  (**(code **)(*param_1 + 0x70))(param_1,1);
  local_50 = param_1[4];
  local_58 = param_4;
  iVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,FUN_100b194b0,&local_58);
  if (iVar2 < 0) {
    FUN_100df99c0("Reclaim","dimg",0,"Create whole referenced blocks mao failed with code 0x%x",
                  iVar2);
  }
  else {
    FUN_100df99c0("Reclaim","dimg",0,"Search for unreferenced blocks");
    iVar2 = (**(code **)(*param_1 + 0x1e8))
                      (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return iVar2;
}

