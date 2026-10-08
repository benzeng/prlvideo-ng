
void FUN_10039dbd0(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar3 = FUN_1003b0a30(param_1 + 0x20);
  if (lVar3 == 0) {
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  uVar4 = FUN_100370280();
  uVar5 = FUN_1003b0a30(param_1 + 0x20);
  FUN_100188480(&local_28,uVar5);
  lVar3 = FUN_1003704b0(uVar4,&local_28,DAT_100e152b8);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10039dc59;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10039dc59:
  if ((lVar3 != 0) && (cVar1 = FUN_10036c790(lVar3), cVar1 != '\0')) {
    uVar4 = FUN_1001d50a0();
    uVar2 = FUN_1001d50e0(uVar4);
    FUN_10036d200(lVar3,uVar2);
  }
  return;
}

