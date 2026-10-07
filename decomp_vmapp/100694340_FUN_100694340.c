
undefined8 FUN_100694340(long *param_1,ulong *param_2)

{
  long lVar1;
  char cVar2;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  cVar2 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,
                  "VHD Disk \"%s\" is not opened, can\'t retrieve disk parameters. [0x%llx]",
                  local_40 + *(long *)(local_40 + 0x10),
                  *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
    if (*(int *)local_40 == -1) {
      return 0x80021021;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0x80021021;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
    return 0x80021021;
  }
  param_2[1] = 0;
  *param_2 = 0;
  if ((undefined *)param_2[2] != PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_2 + 2),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006943d9;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1006943d9:
  param_2[3] = 0x200;
  lVar1 = *param_1;
  *param_2 = (ulong)param_1[6] / *(ulong *)(*(long *)(lVar1 + -0x18) + 0x38 + (long)param_1);
  QString::operator=((QString *)(param_2 + 2),
                     (QString *)(*(long *)(lVar1 + -0x18) + 0x10 + (long)param_1));
  return 0;
}

