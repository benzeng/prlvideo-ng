
int FUN_10055fd10(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  QArrayData *local_50;
  QArrayData *local_48;
  int local_3c;
  int local_38;
  undefined1 local_31;
  
  iVar2 = -0x7ffffffd;
  if (param_1 != 0) {
    local_38 = param_2;
    lVar3 = CVmConfiguration::getVmHardwareList();
    local_3c = 0;
    iVar2 = 0;
    if (*(int *)(*(long *)(lVar3 + 0x1b0) + 8) < *(int *)(*(long *)(lVar3 + 0x1b0) + 0xc)) {
      plVar5 = (long *)(lVar3 + 0x1b0);
      iVar4 = 0;
      iVar2 = 0;
      do {
        FUN_100082610(plVar5,iVar4);
        iVar1 = CVmDevice::getEnabled();
        if (iVar1 != 0) {
          FUN_100082610(plVar5,iVar4);
          CVmDevice::getSystemName();
          iVar2 = FUN_10055f630(&local_48,&local_3c);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10055fdde;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10055fdde:
          if ((iVar2 < 0) || (local_3c != param_2)) {
            FUN_100082610(plVar5,iVar4);
            CVmDevice::getSystemName();
            iVar2 = FUN_10055f7b0(&local_50,&local_38);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10055fe3f;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_10055fe3f:
            if (iVar2 < 0) {
              return iVar2;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(*plVar5 + 0xc) - *(int *)(*plVar5 + 8));
    }
  }
  return iVar2;
}

