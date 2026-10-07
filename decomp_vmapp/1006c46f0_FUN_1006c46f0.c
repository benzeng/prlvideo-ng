
bool FUN_1006c46f0(undefined8 *param_1,undefined4 param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_3 != '\0') {
    FUN_1006c8f60(param_2);
    return true;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0xae6f23);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006c4780;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006c4780:
  iVar1 = FUN_1006c99f0(&local_38,param_2,param_4,0);
  if (iVar1 < 0) {
    FUN_1008e3970("","prl_net",0,"[configurePrlAdapter]  configure adapter %d failed with code %d.",
                  param_2,iVar1);
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return -1 < iVar1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return -1 < iVar1;
}

