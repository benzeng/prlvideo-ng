
void FUN_10046b930(undefined8 param_1,QString *param_2,undefined4 param_3)

{
  char cVar1;
  QString local_38;
  undefined1 local_2a;
  
  FUN_10044e880();
  FUN_100459010(&local_38,param_1);
  cVar1 = operator==(&local_38,param_2);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10046b99a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10046b99a:
  if (cVar1 != '\0') {
    FUN_10046b3f0(param_1,param_3);
  }
  return;
}

