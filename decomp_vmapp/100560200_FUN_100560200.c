
void FUN_100560200(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (param_1 != 0) {
    lVar2 = CVmConfiguration::getVmHardwareList();
    *param_2 = 0;
    if (*(int *)(*(long *)(lVar2 + 0x1b0) + 8) < *(int *)(*(long *)(lVar2 + 0x1b0) + 0xc)) {
      plVar4 = (long *)(lVar2 + 0x1b0);
      iVar3 = 0;
      do {
        FUN_100082610(plVar4,iVar3);
        iVar1 = CVmDevice::getEnabled();
        if (iVar1 == 0) {
LAB_1005602be:
          if (*param_2 == 1) {
            return;
          }
        }
        else {
          FUN_100082610(plVar4,iVar3);
          CVmDevice::getSystemName();
          iVar1 = FUN_10055f630(&local_40,param_2);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_32 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1005602b9;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1005602b9:
          if (-1 < iVar1) goto LAB_1005602be;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(*plVar4 + 0xc) - *(int *)(*plVar4 + 8));
    }
  }
  return;
}

