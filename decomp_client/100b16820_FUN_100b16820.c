
undefined8 FUN_100b16820(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  lVar1 = param_1[4];
  if (lVar1 == 0) {
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si","DiskImageComp.cpp",
                  0x540,"GetParameters");
  }
  else if (((*(byte *)(lVar1 + 0x80) & 1) != 0) ||
          (cVar2 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x150))
                             ((long)param_1 + *(long *)(*param_1 + -0x18)), cVar2 != '\0')) {
    param_2[1] = 0;
    *param_2 = 0;
    if ((undefined *)param_2[2] != PTR_shared_null_1021e1288) {
      local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=((QString *)(param_2 + 2),&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b168d1;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
LAB_100b168d1:
    param_2[3] = 0x200;
    *param_2 = *(undefined8 *)(lVar1 + 0x70);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(lVar1 + 0x5c);
    QString::operator=((QString *)(param_2 + 2),
                       (QString *)(*(long *)(*param_1 + -0x18) + 0x10 + (long)param_1));
    param_2[3] = *(undefined8 *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
    return 0;
  }
  QString::toUtf8();
  FUN_100df99c0("","dimg",0,"Disk \"%s\" is not opened, can\'t retrieve disk parameters. [0x%llx]",
                local_40 + *(long *)(local_40 + 0x10),
                *(undefined8 *)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1));
  if (*(int *)local_40 != -1) {
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
  }
  return 0x80021021;
}

