
void FUN_100044f20(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  iVar1 = *param_2;
  if ((iVar1 == 0x72) || (iVar1 == 0x69)) {
    QMutex::lock();
    lVar3 = DAT_1011c3640;
    if (DAT_1011c3640 != 0) {
      DAT_1011c3648 = DAT_1011c3648 + 1;
    }
    QMutex::unlock();
    if (lVar3 == 0) {
      return;
    }
    QMutex::lock();
    lVar3 = DAT_1011c3640;
    if (DAT_1011c3640 != 0) {
      DAT_1011c3648 = DAT_1011c3648 + 1;
    }
    QMutex::unlock();
    FUN_100046460(&DAT_1011c3630);
    if (lVar3 == 0) {
      return;
    }
    FUN_10005e260(lVar3,param_2[5],*param_2 == 0x72);
    if (DAT_1011b55f8 < 3) {
      puVar4 = &DAT_1011c3630;
    }
    else {
      puVar4 = &DAT_1011c3630;
      FUN_1008e3970("SGAH","vm",3,"RemoveRun command: pid=%d",param_2[5]);
    }
    goto LAB_10004526b;
  }
  if (iVar1 != 0x68) {
    return;
  }
  local_40 = 0;
  uVar2 = param_2[8];
  if ((ulong)uVar2 != 0) {
    FUN_1000461e0(param_1,(ulong)uVar2 + (long)param_2,param_3 - uVar2,&local_40);
  }
  QString::fromUtf16((ushort *)&local_50,(int)param_2 + 0x28);
  QString::normalized(&local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004507f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10004507f:
  QMutex::lock();
  lVar3 = DAT_1011c3640;
  if (DAT_1011c3640 != 0) {
    DAT_1011c3648 = DAT_1011c3648 + 1;
  }
  QMutex::unlock();
  puVar4 = (undefined *)0x0;
  lVar5 = 0;
  if (lVar3 != 0) {
    QMutex::lock();
    lVar5 = DAT_1011c3640;
    if (DAT_1011c3640 != 0) {
      DAT_1011c3648 = DAT_1011c3648 + 1;
    }
    QMutex::unlock();
    FUN_100046460(&DAT_1011c3630);
    if (lVar5 == 0) {
      puVar4 = &DAT_1011c3630;
      lVar5 = 0;
    }
    else {
      FUN_10005d890(lVar5,param_2[5],&local_48,&local_40);
      if (DAT_1011b55f8 < 3) {
        puVar4 = &DAT_1011c3630;
      }
      else {
        iVar1 = param_2[5];
        QString::toUtf8();
        FUN_1008e3970("SGAH","vm",3,"AddRun command: pid=%d name=%s, ver={%d.%d.%d.%d}",iVar1,
                      local_58 + *(long *)(local_58 + 0x10),(uint)local_40 & 0xffff,
                      (uint)((ulong)local_40 >> 0x10) & 0xffff,
                      (uint)((ulong)local_40 >> 0x20) & 0xffff,(short)((ulong)local_40 >> 0x30));
        puVar4 = &DAT_1011c3630;
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100045236;
          }
          puVar4 = &DAT_1011c3630;
          QArrayData::deallocate(local_58,1,8);
        }
      }
    }
  }
LAB_100045236:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100045266;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100045266:
  if (lVar5 == 0) {
    return;
  }
LAB_10004526b:
  FUN_100046460(puVar4);
  return;
}

