
bool FUN_1000a21d0(long param_1)

{
  int iVar1;
  QArrayData *local_38;
  int *local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("parallels.DragDropTool.guest.win",0x20);
  FUN_100473b30(&local_30,param_1 + 0x10840,&local_38);
  iVar1 = local_30[0x16];
  if (local_30 != (int *)0x0) {
    LOCK();
    *local_30 = *local_30 + -1;
    local_21 = *local_30 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_30 != (int *)0x0)) {
      FUN_100031ed0(local_30);
      operator_delete(local_30);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1000a226c;
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000a226c:
  return iVar1 == 1;
}

