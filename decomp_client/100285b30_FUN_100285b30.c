
void FUN_100285b30(long *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int *piVar10;
  int *local_138;
  int *local_130;
  QString local_128;
  QString local_120;
  long local_118;
  long local_110 [24];
  int *local_50;
  int *local_48;
  int *local_40;
  undefined1 local_31;
  
  QFutureInterfaceBase::waitForResult((int)param_1 + 0xc0);
  lVar6 = QFutureInterfaceBase::mutex();
  if (lVar6 != 0) {
    QMutex::lock();
  }
  iVar4 = QFutureInterfaceBase::resultStoreBase();
  QtPrivate::ResultStoreBase::resultAt(iVar4);
  if (lVar6 != 0) {
    QMutex::unlock();
  }
  FUN_100287280(&local_50);
  uVar1 = local_50[2];
  uVar9 = (ulong)uVar1;
  if (local_50[3] == uVar1) {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  else {
    if ((int)uVar1 < local_50[3]) {
      lVar6 = 0;
      do {
        lVar7 = *(long *)(local_50 + ((int)uVar9 + lVar6) * 2 + 4);
        FUN_100036740(&local_118,lVar7);
        CHwUsbDevice::CHwUsbDevice((CHwUsbDevice *)local_110,(CHwUsbDevice *)(lVar7 + 8));
        (**(code **)(local_110[0] + 0xb8))(&local_120,(CHwUsbDevice *)local_110);
        QString::operator=((QString *)(param_1 + 0x10),&local_120);
        if (*(int *)local_120.field0_0x0 != -1) {
          if (*(int *)local_120.field0_0x0 != 0) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100285cbf;
          }
          QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
        }
LAB_100285cbf:
        *(undefined4 *)(param_1 + 0x11) = 3;
        uVar5 = QVariant::toUInt(*(bool **)(local_118 + 0x10 + (long)*(int *)(local_118 + 8) * 8));
        *(undefined4 *)(param_1 + 3) = uVar5;
        QVariant::toString();
        QString::operator=((QString *)(param_1 + 5),&local_128);
        if (*(int *)local_128.field0_0x0 != -1) {
          if (*(int *)local_128.field0_0x0 != 0) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
            local_31 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100285d47;
          }
          QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
        }
LAB_100285d47:
        uVar5 = QVariant::toUInt(*(bool **)(local_118 + 0x20 + (long)*(int *)(local_118 + 8) * 8));
        *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
        uVar3 = QVariant::toBool();
        *(undefined1 *)(param_1 + 9) = uVar3;
        QVariant::toStringList();
        if ((int *)param_1[7] != local_130) {
          local_48 = local_130;
          if (*local_130 != -1) {
            if (*local_130 == 0) {
              QListData::detach((int)&local_48);
              iVar4 = local_48[2];
              if (iVar4 != local_48[3]) {
                piVar8 = local_130 + (long)local_130[2] * 2 + 4;
                piVar10 = local_48 + (long)iVar4 * 2 + 4;
                lVar7 = (long)local_48[3] * 8 + (long)iVar4 * -8;
                do {
                  piVar2 = *(int **)piVar8;
                  *(int **)piVar10 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  piVar10 = piVar10 + 2;
                  piVar8 = piVar8 + 2;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
            }
            else {
              LOCK();
              *local_130 = *local_130 + 1;
              local_31 = *local_130 != 0;
              UNLOCK();
            }
          }
          piVar8 = (int *)param_1[7];
          param_1[7] = (long)local_48;
          local_48 = piVar8;
          FUN_100039a80(&local_48);
        }
        FUN_100039a80(&local_130);
        QVariant::toStringList();
        if ((int *)param_1[8] != local_138) {
          local_40 = local_138;
          if (*local_138 != -1) {
            if (*local_138 == 0) {
              QListData::detach((int)&local_40);
              iVar4 = local_40[2];
              if (iVar4 != local_40[3]) {
                piVar8 = local_138 + (long)local_138[2] * 2 + 4;
                piVar10 = local_40 + (long)iVar4 * 2 + 4;
                lVar7 = (long)local_40[3] * 8 + (long)iVar4 * -8;
                do {
                  piVar2 = *(int **)piVar8;
                  *(int **)piVar10 = piVar2;
                  if (1 < *piVar2 + 1U) {
                    LOCK();
                    *piVar2 = *piVar2 + 1;
                    local_31 = *piVar2 != 0;
                    UNLOCK();
                  }
                  piVar10 = piVar10 + 2;
                  piVar8 = piVar8 + 2;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
            }
            else {
              LOCK();
              *local_138 = *local_138 + 1;
              local_31 = *local_138 != 0;
              UNLOCK();
            }
          }
          piVar8 = (int *)param_1[8];
          param_1[8] = (long)local_40;
          local_40 = piVar8;
          FUN_100039a80(&local_40);
        }
        FUN_100039a80(&local_138);
        uVar3 = QVariant::toBool();
        *(undefined1 *)((long)param_1 + 0x5d) = uVar3;
        FUN_100286180(param_1 + 0x53,(QString *)(param_1 + 0x10),param_1 + 3);
        CHwUsbDevice::~CHwUsbDevice((CHwUsbDevice *)local_110);
        FUN_100035ea0(&local_118);
        lVar6 = lVar6 + 1;
        uVar9 = (ulong)local_50[2];
      } while (lVar6 < (long)((long)local_50[3] - uVar9));
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100286360(&local_50,local_50);
  }
  return;
}

