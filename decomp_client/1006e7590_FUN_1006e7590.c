
CIfaceMenu * FUN_1006e7590(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  QMenu *this;
  long lVar2;
  CIfaceMenu *this_00;
  QString QVar3;
  QArrayData *local_38;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  lVar2 = FUN_1006e13b0(param_1,param_2,this,param_3,4);
  this_00 = (CIfaceMenu *)0x0;
  if (lVar2 == 0) goto LAB_1006e766c;
  this_00 = operator_new(0xa8);
  CIfaceMenu::CIfaceMenu(this_00);
  iVar1 = CIfaceMenu::getAction();
  CIfaceAction::setActionType(iVar1);
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)CIfaceMenu::getAction();
  QMenu::title();
  CIfaceAction::setName(QVar3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1006e7661;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e7661:
  FUN_1006e0420(lVar2,this_00);
LAB_1006e766c:
  (*(code *)this->field0_0x0[4])(this);
  return this_00;
}

