
undefined8 * FUN_10079a6d0(undefined8 *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  QArrayData *local_30;
  undefined1 local_22;
  
  puVar1 = PTR_shared_null_100ba20d0;
  *param_1 = PTR_shared_null_100ba20d0;
  auVar2._8_4_ = (int)puVar1;
  auVar2._0_8_ = puVar1;
  auVar2._12_4_ = (int)((ulong)puVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 1) = auVar2;
  param_1[3] = PTR_shared_null_100ba2188;
  if ((param_2 != (char *)0x0) && (param_3 != (char *)0x0)) {
    QByteArray::operator=((QByteArray *)(param_1 + 2),param_2);
    QByteArray::QByteArray((QByteArray *)&local_30,param_3,-1);
    FUN_1007cec20(&local_30,param_1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return param_1;
}

