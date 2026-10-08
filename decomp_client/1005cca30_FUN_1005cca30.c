
undefined8 FUN_1005cca30(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_100370280();
  FUN_100188480(&local_28,param_1);
  uVar3 = FUN_10018c280(param_1);
  uVar1 = FUN_100319b00(uVar3);
  uVar2 = FUN_1003739f0(uVar2,&local_28,uVar1,1,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005ccab7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1005ccab7:
  uVar3 = FUN_10018c280(param_1);
  lVar4 = FUN_10031a440(uVar3,0);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t open vm desktop");
  }
  QWidget::setWindowOpacity(0.0);
  QWidget::hide();
  return uVar2;
}

