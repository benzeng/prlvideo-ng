
undefined8 FUN_1003ef400(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  QArrayData *local_30;
  undefined1 local_22;
  
  lVar2 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return 0;
  }
  uVar3 = FUN_100370280();
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  FUN_100188480(&local_30,uVar4);
  lVar2 = FUN_1003704b0(uVar3,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1003ef489;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003ef489:
  if ((lVar2 != 0) && (cVar1 = FUN_10036c790(lVar2), cVar1 != '\0')) {
    dVar5 = (double)QVariant::toDouble((bool *)(param_1 + 0x38));
    QWidget::setWindowOpacity(dVar5);
  }
  return 0;
}

