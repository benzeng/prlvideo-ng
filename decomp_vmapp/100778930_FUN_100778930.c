
undefined8 * FUN_100778930(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  QString local_30;
  undefined1 local_22;
  undefined1 local_21;
  
  if ((param_2 == 0) || (uVar1 = _CFStringGetLength(param_2), uVar1 == 0)) {
    *param_1 = PTR_shared_null_100ba20d0;
    return param_1;
  }
  QString::QString(&local_30,uVar1 & 0xffffffff,0);
  _CFStringGetCharacters
            (param_2,0,uVar1,
             (QArrayData *)(local_30.field0_0x0 + *(long *)(local_30.field0_0x0 + 0x10)));
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_30.field0_0x0 == -1) {
    return param_1;
  }
  if (*(int *)local_30.field0_0x0 != 0) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_30.field0_0x0 != 0) {
      return param_1;
    }
    local_22 = 0;
  }
  QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  return param_1;
}

