
void FUN_10033e900(long param_1,QString *param_2,int param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  QString local_40;
  undefined1 local_32;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  " Failed to switch VM desktop view mode. VM object does not exist!");
    return;
  }
  FUN_100188480(&local_40,lVar2);
  cVar1 = operator==(param_2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10033e98f;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10033e98f:
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((param_3 != 1) && (cVar1 = FUN_10018c1f0(lVar2,2), cVar1 != '\0')) {
    FUN_10018c220(lVar2,2,0);
  }
  return;
}

