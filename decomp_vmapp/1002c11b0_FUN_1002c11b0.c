
void FUN_1002c11b0(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  void *local_168;
  void *pvStack_160;
  undefined8 local_158;
  undefined1 local_150 [24];
  QArrayData *local_138;
  QArrayData *local_130;
  undefined1 local_128 [247];
  undefined1 local_31;
  
  lVar1 = param_1[7];
  lVar3 = QThread::currentThreadId();
  if (lVar1 != lVar3) {
    *(undefined1 *)((long)param_1 + 0x2c4) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001002c11f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
  puVar4 = &DAT_1011c4ac0;
  uVar5 = 0;
  do {
    if (*(int *)(puVar4 + -0x20) != 0) {
      CVmUsbDevice::CVmUsbDevice((CVmUsbDevice *)local_128);
      local_130 = *(QArrayData **)(puVar4 + -8);
      if (1 < *(int *)local_130 + 1U) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + 1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
      }
      CVmDevice::setSystemName((QTypedArrayData<unsigned_short> *)local_128);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c1283;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1002c1283:
      local_138 = *(QArrayData **)(puVar4 + -8);
      if (1 < *(int *)local_138 + 1U) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + 1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
      }
      CVmDevice::setUserFriendlyName((QTypedArrayData<unsigned_short> *)local_128);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002c12e4;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1002c12e4:
      CVmUsbDevice::setConnectReason((QTypedArrayData<unsigned_short> *)local_128,0);
      CVmUsbDevice::setUsbType((QTypedArrayData<unsigned_short> *)local_128,0);
      cVar2 = FUN_1002c2c70();
      if (cVar2 == '\0') {
        FUN_10006a060(local_150);
        FUN_10006a120(local_150,puVar4,0);
        local_168 = (void *)0x0;
        pvStack_160 = (void *)0x0;
        local_158 = 0;
        FUN_1000648b0(DAT_1011c3650,0x80000587,&local_168,local_150);
        if (local_168 != (void *)0x0) {
          if (pvStack_160 != local_168) {
            pvStack_160 = (void *)((~((long)pvStack_160 + (-4 - (long)local_168)) &
                                   0xfffffffffffffffcU) + (long)pvStack_160);
          }
          operator_delete(local_168);
        }
        FUN_1002ba620(param_1,(QTypedArrayData<unsigned_short> *)local_128);
        FUN_10006a680(local_150);
      }
      CVmUsbDevice::~CVmUsbDevice((CVmUsbDevice *)local_128);
    }
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 0x30;
    if (0x3c < uVar5) {
      *(undefined1 *)((long)param_1 + 0x2c4) = 0;
      return;
    }
  } while( true );
}

