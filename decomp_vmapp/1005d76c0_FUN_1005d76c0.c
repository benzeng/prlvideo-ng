
int FUN_1005d76c0(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  if (param_1[1] == 0) {
    FUN_1008e3970("","vdisk",0,"Null pointer specified as locker");
    return -0x7ffffffd;
  }
  (**(code **)(*param_1 + 0x20))(&local_28,param_1,param_2);
  cVar1 = QFile::exists(&local_28);
  if ((cVar1 == '\0') && (iVar2 = (**(code **)(*param_1 + 0x28))(param_1,&local_28), iVar2 < 0))
  goto LAB_1005d77dd;
  (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],&local_28,3,0,0,0);
  cVar1 = (**(code **)(*(long *)param_1[1] + 0x98))();
  iVar2 = 0;
  if (cVar1 != '\0') goto LAB_1005d77dd;
  iVar3 = (**(code **)(*(long *)param_1[1] + 0xb0))();
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error locking file %s [%u]",local_30 + *(long *)(local_30 + 0x10),
                iVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d77cb;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1005d77cb:
  iVar2 = -0x7ffdefec;
  if (iVar3 == 0x23) {
    iVar2 = -0x7ffdefc9;
  }
LAB_1005d77dd:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return iVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return iVar2;
}

