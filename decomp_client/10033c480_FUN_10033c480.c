
bool FUN_10033c480(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319bf0(uVar2);
  local_28 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.win",0x2b);
  lVar3 = FUN_10032d8b0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10033c501;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10033c501:
  if (lVar3 == 0) {
    return false;
  }
  iVar1 = FUN_10032c830(lVar3);
  if (iVar1 != 1) {
    return false;
  }
  local_30 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesUser.guest.win",0x28);
  lVar3 = FUN_10032d8b0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10033c567;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10033c567:
  if (lVar3 == 0) {
    return false;
  }
  iVar1 = FUN_10032c830(lVar3);
  return iVar1 == 1;
}

