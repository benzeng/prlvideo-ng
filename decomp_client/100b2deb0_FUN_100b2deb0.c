
undefined8 FUN_100b2deb0(long *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  cVar1 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","dimg",0,
                  "Error: disk \"%s\" is not opened, can\'t retrieve disk parameters. [0x%llx]",
                  local_38 + *(long *)(local_38 + 0x10),
                  *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
    if (*(int *)local_38 == -1) {
      return 0x80021021;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0x80021021;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
    return 0x80021021;
  }
  param_2[1] = 0;
  *param_2 = 0;
  if ((undefined *)param_2[2] != PTR_shared_null_1021e1288) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_2 + 2),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b2df47;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100b2df47:
  param_2[3] = 0x200;
  *param_2 = *(undefined8 *)((long)param_1 + 0x18104);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)((long)param_1 + 0x1810c);
  uVar2 = 0x5d;
  if (*(long *)((long)param_1 + 0x1811c) != 0) {
    uVar2 = 0x5b;
  }
  *(undefined4 *)((long)param_2 + 0xc) = uVar2;
  QString::operator=((QString *)(param_2 + 2),
                     (QString *)(*(long *)(*param_1 + -0x18) + 0x10 + (long)param_1));
  return 0;
}

