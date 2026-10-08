
void FUN_100aa0fd0(QThread *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  QThread *this;
  long lVar1;
  int iVar2;
  uint uVar3;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  rlimit local_48;
  undefined1 local_31;
  
  QThread::QThread(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102239b50;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e1288;
  lVar1 = *param_2;
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  this = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined8 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_100dda060(param_1 + 0x34);
  FUN_100dda060(param_1 + 0x44);
  _memcpy(param_1 + 0x54,&DAT_101cd45a0,0x48);
  FUN_100a6c260(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 200) = 0;
  iVar2 = _getrlimit(8,&local_48);
  if ((iVar2 == 0) && (0x3ff < (uint)local_48.rlim_max)) {
    uVar3 = 0x10000;
    if ((uint)local_48.rlim_max < 0x10001) {
      uVar3 = (uint)local_48.rlim_max;
    }
  }
  else {
    uVar3 = 0x400;
  }
  *(uint *)(param_1 + 0xd8) = uVar3;
  FUN_100aa0b30(param_1 + 0xe0);
  FUN_100aa0b30(param_1 + 0xe8,*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0xffffffff00000009;
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x100));
  QWaitCondition::QWaitCondition((QWaitCondition *)(param_1 + 0x108));
  QMutex::QMutex((QMutex *)(param_1 + 0x110),0);
  QMutex::QMutex((QMutex *)(param_1 + 0x118),0);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = param_5;
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      if (iVar2 != 0) goto LAB_100aa13b2;
      local_58 = (QArrayData *)
                 QString::fromAscii_helper("IO client ctx [write thr] (sender %2): ",0x27);
      QString::arg(&local_50,&local_58,(long)*(int *)(param_1 + 0x20),0,10,0x20);
      QString::operator=((QString *)this,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa1382;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100aa1382:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100aa13b2;
        }
        QArrayData::deallocate(local_58,2,8);
      }
      goto LAB_100aa13b2;
    }
    local_68 = (QArrayData *)
               QString::fromAscii_helper("IO server ctx [write thr] (sender %2): ",0x27);
    QString::arg(&local_60,&local_68,(long)*(int *)(param_1 + 0x20),0,10,0x20);
    QString::operator=((QString *)this,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aa121e;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100aa121e:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100aa13b2;
      }
      QArrayData::deallocate(local_68,2,8);
    }
    goto LAB_100aa13b2;
  }
  local_78 = (QArrayData *)
             QString::fromAscii_helper("IO proxy management ctx [write thr] (sender %2): ",0x31);
  QString::arg(&local_70,&local_78,(long)*(int *)(param_1 + 0x20),0,10,0x20);
  QString::operator=((QString *)this,&local_70);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aa12cc;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100aa12cc:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100aa13b2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100aa13b2:
  QThread::setStackSize((uint)param_1);
  *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
  return;
}

