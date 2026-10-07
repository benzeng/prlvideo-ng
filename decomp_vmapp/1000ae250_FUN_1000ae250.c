
void FUN_1000ae250(long param_1)

{
  QString local_30;
  undefined1 local_22;
  
  QString::fromUtf8_helper((char *)&local_30,0xa320a0);
  QString::operator=((QString *)(param_1 + 0x1170),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) goto LAB_1000ae2b7;
      local_22 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1000ae2b7:
  *(undefined4 *)(param_1 + 0x1178) = *(undefined4 *)(param_1 + 0x117c);
  return;
}

