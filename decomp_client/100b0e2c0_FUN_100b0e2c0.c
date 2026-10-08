
undefined8 FUN_100b0e2c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  QArrayData *local_30;
  
  cVar1 = (**(code **)(*param_1 + 400))();
  if (cVar1 != '\0') {
    return 1;
  }
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,
                "Error: try to %s out of image \'%s\'. Direct offset %llu and data area is %llu:%llu"
                ,param_4,local_30 + *(long *)(local_30 + 0x10),param_2,param_1[10],param_1[0xb]);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_100b0e371;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100b0e371:
  FUN_100db96e0(0xe);
  (**(code **)(*param_1 + 0x1a0))(param_1);
  (**(code **)(*param_1 + 0x170))(param_1);
  return 0;
}

