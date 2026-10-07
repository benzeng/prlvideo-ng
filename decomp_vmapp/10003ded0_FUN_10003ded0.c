
void FUN_10003ded0(long param_1,char *param_2,undefined1 param_3)

{
  QArrayData *local_30;
  undefined1 local_22;
  
  *(undefined1 *)(param_1 + 0xa8) = param_3;
  if (param_2 == (char *)0x0) {
    return;
  }
  QByteArray::QByteArray((QByteArray *)&local_30,param_2,0x15);
  FUN_10051c510(param_1,(QByteArray *)&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10003df3d;
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10003df3d:
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xf] = param_2[0xf] | 0x40;
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  return;
}

