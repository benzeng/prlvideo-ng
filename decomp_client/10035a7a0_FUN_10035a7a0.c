
void FUN_10035a7a0(long param_1,QString *param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  QString local_40;
  undefined1 local_32;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_40,uVar2);
  bVar1 = operator==(&local_40,param_2);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) goto LAB_10035a81e;
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10035a81e:
  if ((param_4 == 3) && ((param_3 != 3 & bVar1) != 0)) {
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  return;
}

