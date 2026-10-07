
QString * FUN_1006e0c20(QString *param_1,undefined8 param_2,int param_3)

{
  QArrayData *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  QString local_28;
  undefined1 local_19;
  
  if (param_3 != 0xb) {
    pQVar2 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    param_1->field0_0x0 = pQVar2;
    return param_1;
  }
  FUN_1006e01a0(&local_28);
  pQVar1 = (QArrayData *)QString::fromAscii_helper("prl-tools-os2.fdd",0x11);
  param_1->field0_0x0 = local_28.field0_0x0;
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_19 = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e0ca9;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006e0ca9:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

