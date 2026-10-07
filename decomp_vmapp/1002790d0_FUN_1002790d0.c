
void FUN_1002790d0(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 in_RAX;
  long lVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)in_RAX >> 0x20);
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x80);
  if (plVar2 == (long *)0x0) {
    QMutex::unlock();
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    QMutex::unlock();
    if (plVar2[2] != 0) {
      ___dynamic_cast(plVar2[2],PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    }
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    lVar5 = CVmGenericNetworkAdapter::getPktFilter();
    iVar4 = FUN_100060640();
    if (iVar4 == 0) {
      if (lVar5 != 0) {
        cVar3 = CNetPktFilter::isPreventPromisc();
        if (cVar3 == '\0') goto LAB_1002791c1;
      }
      plVar1 = (long *)(*(long *)(param_1 + 0x160) + 0x104);
      *plVar1 = *plVar1 + 1;
      iVar4 = FUN_1008e38f0(&DAT_101115c7c);
      param_2 = 0;
      if (iVar4 != 0) {
        param_2 = 0;
        FUN_1008e3970("","LocalDevices",0,
                      "net_device [%d] : promiscuous mode is prohibited by security settings",
                      *(undefined4 *)(param_1 + 0x150));
      }
    }
  }
LAB_1002791c1:
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",4,"CNetDevice::SetPromisc %u",param_2);
  }
  iVar4 = (**(code **)(**(long **)(param_1 + 0x170) + 0x48))(*(long **)(param_1 + 0x170),param_2);
  if (iVar4 != 0) {
    FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to set promisc(%d): error %x",
                  *(undefined4 *)(param_1 + 0x150),param_2,CONCAT44(uVar6,iVar4));
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010027925f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}

