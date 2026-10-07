
void FUN_1002c3a00(long param_1,undefined8 param_2)

{
  QArrayData *local_28;
  
  if (0 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"Notify disconnect %s",local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) goto LAB_1002c3a7f;
      }
      QArrayData::deallocate(local_28,1,8);
    }
  }
LAB_1002c3a7f:
  FUN_10000c490(param_1 + 0x2a0,param_2);
  *(undefined4 *)(param_1 + 0x2ac) = 1;
  return;
}

