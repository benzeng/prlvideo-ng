
bool FUN_10034c560(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  QArrayData *local_20;
  undefined1 local_12;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319bf0(uVar2);
  local_20 = (QArrayData *)
             QString::fromAscii_helper("parallels.DesktopUtilitiesService.guest.win",0x2b);
  lVar3 = FUN_10032d8b0(uVar2,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_12 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_12) goto LAB_10034c5df;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10034c5df:
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    iVar1 = FUN_10032c830(lVar3);
    bVar4 = iVar1 == 1;
  }
  return bVar4;
}

