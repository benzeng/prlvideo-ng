
undefined4 FUN_100571cf0(undefined8 *param_1,QString *param_2)

{
  long *plVar1;
  QArrayData *local_48;
  undefined8 local_40;
  undefined8 local_38;
  QString local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_19;
  
  local_40 = *param_1;
  local_38 = param_1[1];
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[2];
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  local_28 = param_1[3];
  QString::operator=(&local_30,param_2);
  plVar1 = (long *)FUN_1006848d0(&local_40,3,&DAT_1011bc560,&local_20,0);
  if (plVar1 == (long *)0x0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error creating %s with code 0x%x",
                  local_48 + *(long *)(local_48 + 0x10),local_20);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100571de8;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    local_20 = 0;
  }
LAB_100571de8:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return local_20;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return local_20;
}

