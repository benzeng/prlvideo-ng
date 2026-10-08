
void FUN_10061d990(long param_1,byte param_2,char param_3,undefined8 param_4,int param_5)

{
  FUN_10061d400(param_1,0,param_5);
  FUN_10061d510(param_1,param_2 ^ 1,param_5,param_4);
  if (((param_5 == 0) && (param_2 == 1)) && (param_3 == '\x01')) {
    QWidget::show();
    FUN_10061d400(param_1,0,1);
    QWidget::setFocus(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x68),7);
    return;
  }
  return;
}

