
int * FUN_100568440(int *param_1,undefined8 param_2,int param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = QAbstractItemModel::hasIndex((int)param_2,param_3,(QModelIndex *)(ulong)param_4);
  if (cVar1 == '\0') {
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_4 = 0xffffffff;
  }
  else {
    *param_1 = param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 4) = param_2;
  }
  param_1[1] = param_4;
  return param_1;
}

