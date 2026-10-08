
void FUN_1006b59a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  QMenu *this;
  undefined8 uVar1;
  
  this = operator_new(0x30);
  QMenu::QMenu(this,(QWidget *)0x0);
  uVar1 = FUN_1006e1350();
  uVar1 = FUN_1006e13b0(uVar1,param_3,this,param_4,4);
  FUN_1006e0c80(param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006b5a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->field0_0x0[4])(this);
  return;
}

