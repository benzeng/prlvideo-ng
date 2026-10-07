
void FUN_100561d50(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  if (param_1 == 0) {
    pcVar7 = "Error: cant update shutdown state inside disks, cause VM config is 0";
  }
  else {
    lVar3 = CVmConfiguration::getVmHardwareList();
    CVmConfiguration::getVmHardwareList();
    CVmHardware::getVmHibernateState();
    iVar2 = CVmHiberateState::getShutdownReason();
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x1b0);
      uVar6 = (ulong)*(uint *)(lVar4 + 8);
      if ((int)*(uint *)(lVar4 + 8) < *(int *)(lVar4 + 0xc)) {
        lVar8 = 0;
        do {
          if (*(long *)(lVar4 + 0x10 + ((int)uVar6 + lVar8) * 8) != 0) {
            local_38 = 0;
            CVmDevice::getSystemName();
            plVar5 = (long *)FUN_10059ac80(&local_40,0x23,&local_38);
            if (*(int *)local_40 != -1) {
              if (*(int *)local_40 != 0) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + -1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100561e31;
              }
              QArrayData::deallocate(local_40,2,8);
            }
LAB_100561e31:
            if (plVar5 == (long *)0x0) {
              CVmDevice::getSystemName();
              QString::toLocal8Bit();
              FUN_1008e3970("","StatesUtils",0,"Error: failed to open disk image %s with error %d",
                            local_48 + *(long *)(local_48 + 0x10),local_38);
              if (*(int *)local_48 != -1) {
                if (*(int *)local_48 != 0) {
                  LOCK();
                  *(int *)local_48 = *(int *)local_48 + -1;
                  local_31 = *(int *)local_48 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100561f6b;
                }
                QArrayData::deallocate(local_48,1,8);
              }
LAB_100561f6b:
              if (*(int *)local_50 != -1) {
                if (*(int *)local_50 != 0) {
                  LOCK();
                  *(int *)local_50 = *(int *)local_50 + -1;
                  local_31 = *(int *)local_50 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100561fa0;
                }
                QArrayData::deallocate(local_50,2,8);
              }
            }
            else {
              pcVar1 = *(code **)(*plVar5 + 0x138);
              local_58 = (QArrayData *)QString::fromAscii_helper("ShutdownState",0xd);
              QString::number((int)&local_60,iVar2);
              (*pcVar1)(plVar5,&local_58,&local_60);
              if (*(int *)local_60 != -1) {
                if (*(int *)local_60 != 0) {
                  LOCK();
                  *(int *)local_60 = *(int *)local_60 + -1;
                  local_31 = *(int *)local_60 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100561eaa;
                }
                QArrayData::deallocate(local_60,2,8);
              }
LAB_100561eaa:
              if (*(int *)local_58 != -1) {
                if (*(int *)local_58 != 0) {
                  LOCK();
                  *(int *)local_58 = *(int *)local_58 + -1;
                  local_31 = *(int *)local_58 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100561eda;
                }
                QArrayData::deallocate(local_58,2,8);
              }
LAB_100561eda:
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
LAB_100561fa0:
          lVar8 = lVar8 + 1;
          lVar4 = *(long *)(lVar3 + 0x1b0);
          uVar6 = (ulong)*(int *)(lVar4 + 8);
        } while (lVar8 < (long)((long)*(int *)(lVar4 + 0xc) - uVar6));
      }
      return;
    }
    pcVar7 = s_Error__ant_update_shutdown_state_100a42f39;
  }
  FUN_1008e3970("","StatesUtils",0,pcVar7);
  return;
}

