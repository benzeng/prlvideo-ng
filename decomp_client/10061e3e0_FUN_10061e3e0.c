
void FUN_10061e3e0(long param_1,int param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = *(undefined8 *)(param_4 + 8);
      FUN_10061d400(param_1,0,1);
      FUN_100845cb0(*(undefined8 *)(param_1 + 0x10),uVar1);
      return;
    }
    if (param_3 == 0) {
      uVar1 = *(undefined8 *)(param_4 + 8);
      FUN_10061da90(*(undefined8 *)(param_1 + 0x10),0);
      FUN_10061d400(param_1,0,0);
      FUN_10061d400(param_1,0,1);
      QLineEdit::clear();
      QWidget::hide();
      FUN_100845c40(*(undefined8 *)(param_1 + 0x10),uVar1);
      return;
    }
  }
  return;
}

