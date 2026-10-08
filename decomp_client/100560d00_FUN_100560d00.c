
undefined8 *
FUN_100560d00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  if ((param_4 == 1) && (param_5 != 0)) {
    QAbstractItemModel::headerData(param_1,param_2,param_3,1);
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0x80000000;
    *param_1 = 0;
  }
  return param_1;
}

