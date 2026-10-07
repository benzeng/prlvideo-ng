
void FUN_1004e1cb0(long param_1,QString *param_2)

{
  undefined4 uVar1;
  
  QString::operator=((QString *)(param_1 + 0x30),param_2);
  uVar1 = qHash((QString *)(param_1 + 0x30),0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  return;
}

