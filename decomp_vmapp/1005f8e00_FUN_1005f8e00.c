
undefined8
FUN_1005f8e00(long param_1,QByteArray *param_2,QByteArray *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  
  if (*(int *)(*(long *)param_3 + 4) == 0) {
    pcVar2 = "New key not specified";
  }
  else {
    QByteArray::operator=((QByteArray *)(param_1 + 0x70),param_3);
    if (*(int *)(*(long *)param_2 + 4) != 0) {
      QByteArray::operator=((QByteArray *)(param_1 + 0x68),param_2);
      uVar1 = FUN_1005f6710(param_1,param_4,param_5);
      return uVar1;
    }
    pcVar2 = "Current key not specified";
  }
  FUN_1008e3970("","vdisk",0,pcVar2);
  return 0x80000003;
}

