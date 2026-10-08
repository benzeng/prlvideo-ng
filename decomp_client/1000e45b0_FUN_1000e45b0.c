
void FUN_1000e45b0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar3 = FUN_100152280();
  uVar3 = FUN_1001548f0(uVar3,param_1 + 0x10);
  uVar3 = FUN_10018c280(uVar3);
  uVar3 = FUN_100319bf0(uVar3);
  local_28 = (QArrayData *)
             QString::fromAscii_helper("parallels.SharedGuestApps.guest.win.plugin.jumplists",0x34);
  lVar4 = FUN_10032d8b0(uVar3,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1000e4636;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000e4636:
  if ((lVar4 != 0) &&
     (iVar2 = FUN_10032c830(lVar4), (bool)*(char *)(param_1 + 0x103) != (iVar2 == 1))) {
    *(bool *)(param_1 + 0x103) = iVar2 == 1;
    cVar1 = FUN_1000bd150(param_1);
    if (cVar1 != '\0') {
      FUN_1000debc0(param_1,iVar2 == 1);
    }
  }
  return;
}

