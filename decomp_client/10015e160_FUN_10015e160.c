
undefined8
FUN_10015e160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  QArrayData *local_38;
  
  uVar1 = *param_4;
  QString::toUtf8();
  uVar1 = _PrlVm_RegEx(uVar1,local_38 + *(long *)(local_38 + 0x10),param_5);
  uVar1 = FUN_10015c580(param_1,uVar1,0x7e7,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar1;
      }
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return uVar1;
}

