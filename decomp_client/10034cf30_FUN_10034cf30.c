
void FUN_10034cf30(long param_1,int param_2,QString *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  QString local_38;
  undefined1 local_2a;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_38,uVar2);
  bVar1 = operator==(param_3,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10034cfa9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10034cfa9:
  if ((bVar1 & -(param_2 - 0x3c97U < 4)) != 0) {
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar2 = FUN_100319390(uVar2);
    pvVar3 = operator_new(0x40);
    FUN_100227250(pvVar3,uVar2,0,0x1c,0);
    CAbstractTask::execute();
  }
  return;
}

