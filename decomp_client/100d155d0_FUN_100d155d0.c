
void FUN_100d155d0(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  time_t tVar4;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  *param_1 = 0;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0x400000000;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("300",3);
  QString::operator=((QString *)(param_1 + 0x10),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d15654;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d15654:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("3",1);
  QString::operator=((QString *)(param_1 + 0x18),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d156a9;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d156a9:
  if (*(undefined **)(param_1 + 0x28) != PTR_shared_null_1021e1288) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x28),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_21 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d156fe;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_100d156fe:
  if (*(undefined **)(param_1 + 0x30) != PTR_shared_null_1021e1288) {
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x30),&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d15753;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_100d15753:
  tVar4 = _time((time_t *)0x0);
  _srand((uint)tVar4);
  uVar1 = _rand();
  uVar2 = _rand();
  uVar3 = _rand();
  QString::sprintf(param_1 + 0x20,"%02X%02X%02X%02X%02X%02X",0,0x1c,0x42,(ulong)(uVar1 & 0xff),
                   uVar2 & 0xff,uVar3 & 0xff);
  return;
}

