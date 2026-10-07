
void FUN_1002b6210(ulong param_1)

{
  long lVar1;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  undefined *local_20;
  
  param_1 = param_1 & 0xffffffff;
  lVar1 = param_1 * 0x30;
  *(undefined8 *)(&DAT_1011c4aa0 + param_1 * 0xc) = 0;
  (&DAT_1011c4aa8)[param_1 * 6] = 0;
  (&DAT_1011c4ab0)[param_1 * 0xc] = 0;
  if ((undefined *)(&DAT_1011c4ab8)[param_1 * 6] != PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(&DAT_1011c4ab8 + param_1 * 6),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b6294;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1002b6294:
  if (*(undefined **)(&DAT_1011c4ac0 + lVar1) != PTR_shared_null_100ba20d0) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(&DAT_1011c4ac0 + lVar1),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002b62eb;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1002b62eb:
  local_20 = PTR_shared_null_100ba2188;
  FUN_10051afa0(&DAT_1011c4ac8 + lVar1,&local_20);
  FUN_100013180(&local_20);
  return;
}

