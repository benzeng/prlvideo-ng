
void FUN_1005f6f00(long param_1,undefined8 *param_2,QString *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x6a) = param_2[1];
  *(undefined8 *)(param_1 + 0x62) = uVar1;
  QString::operator=((QString *)(param_1 + 0x78),param_3);
  FUN_1005f6710(param_1,param_4,param_5);
  return;
}

