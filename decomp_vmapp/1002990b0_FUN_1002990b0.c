
undefined8 FUN_1002990b0(long *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_60;
  int local_58;
  undefined4 uStack_54;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (1 < DAT_1011b55f8) {
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    (**(code **)(*param_1 + 0xe0))(&local_40,param_1);
    QString::toLocal8Bit();
    pQVar4 = local_38 + *(long *)(local_38 + 0x10);
    (**(code **)(*param_1 + 0xd8))(&local_50,param_1);
    QString::toLocal8Bit();
    FUN_1008e3970("AudioAS","LocalDevices",2,"[CSoundDevice] [%s] Connect (device: \"%s\" (%s))",
                  uVar3,pQVar4,local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029918b;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10029918b:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002991bb;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002991bb:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002991eb;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_1002991eb:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10029921b;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_10029921b:
  QMutex::lock();
  FUN_100299430(param_1,0);
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0xd8))(&local_60,param_1);
  FUN_10064e1e0(uVar1,&local_60,&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100299298;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100299298:
  if (local_58 != 0) {
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_10029c2c0(CONCAT44(uStack_54,local_58),param_1 + 0xd);
      FUN_100299430(param_1,uVar3);
    }
    else {
      uVar3 = FUN_10029c2e0();
      FUN_100299430(param_1,uVar3);
    }
  }
  QMutex::unlock();
  return 0;
}

