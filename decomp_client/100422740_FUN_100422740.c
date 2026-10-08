
void FUN_100422740(long param_1,byte param_2)

{
  long *plVar1;
  
  plVar1 = (long *)QDialogButtonBox::button(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xd8),0x400)
  ;
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2 ^ 1);
  QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8),0));
  QProgressBar::setValue((int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 200));
  plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 200);
                    /* WARNING: Could not recover jumptable at 0x0001004227ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return;
}

