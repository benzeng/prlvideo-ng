
QString * FUN_1006e72d0(QString *param_1)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QString local_30;
  char local_28;
  undefined7 uStack_27;
  undefined1 local_19;
  
  cVar2 = FUN_1006d80e0();
  if ((cVar2 == '\0') && (uVar3 = FUN_1006d65b0(), (uVar3 & 2) == 0)) {
    pQVar4 = (QTypedArrayData<unsigned_short> *)
             QString::fromAscii_helper("/var/db/Parallels/Stats",0x17);
    param_1->field0_0x0 = pQVar4;
    return param_1;
  }
  FUN_1006da0c0(&local_30);
  param_1->field0_0x0 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper(&local_28,0xae96cc);
  QString::append(param_1);
  piVar1 = (int *)CONCAT71(uStack_27,local_28);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_19 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e737b;
    }
    QArrayData::deallocate((QArrayData *)CONCAT71(uStack_27,local_28),2,8);
  }
LAB_1006e737b:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_28 = '\0';
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

