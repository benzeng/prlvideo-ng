
void FUN_10034b560(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  cVar1 = FUN_10034c810();
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_10230ffd0 < 3) goto LAB_10034b643;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100319410(&local_30,uVar2);
  QString::toUtf8();
  FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",3,
                "Continuing maintenance time updates for \'%s\'",
                local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034b613;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10034b613:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034b643;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10034b643:
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar2 = FUN_100319c60(uVar2);
  FUN_10033c620(uVar2,0x22,0,0);
  return;
}

