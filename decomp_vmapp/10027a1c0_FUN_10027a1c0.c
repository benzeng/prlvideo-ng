
void FUN_10027a1c0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
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
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",1,
                  "attempt to change MAC-address to %02x:%02x:%02x:%02x:%02x:%02x",
                  *(undefined1 *)param_2,*(undefined1 *)((long)param_2 + 1),
                  *(undefined1 *)((long)param_2 + 2),*(undefined1 *)((long)param_2 + 3),
                  *(undefined1 *)(param_2 + 1),*(undefined1 *)((long)param_2 + 5));
  }
  lVar5 = CVmGenericNetworkAdapter::getPktFilter();
  iVar4 = FUN_100060640();
  if (iVar4 == 0) {
    if (lVar5 != 0) {
      cVar3 = CNetPktFilter::isPreventMacSpoof();
      if (cVar3 == '\0') goto LAB_10027a2e1;
    }
    FUN_1008e3970("","LocalDevices",0,
                  "NetDevice[%d]: MAC-address change is prohibited by security policy:\noption PreventMacSpoofing is turned on in configuration"
                  ,*(undefined4 *)(param_1 + 0x150));
  }
  else {
LAB_10027a2e1:
    *(undefined2 *)(param_1 + 0x1c0) = *(undefined2 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x1bc) = *param_2;
    iVar4 = (**(code **)(**(long **)(param_1 + 0x170) + 0x40))
                      (*(long **)(param_1 + 0x170),param_1 + 0x1bc);
    if (iVar4 != 0) {
      FUN_1008e3970("","LocalDevices",0,"net_adapter %d:Failed to change mac address: error %x",
                    *(undefined4 *)(param_1 + 0x150),iVar4);
    }
  }
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010027a36a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}

