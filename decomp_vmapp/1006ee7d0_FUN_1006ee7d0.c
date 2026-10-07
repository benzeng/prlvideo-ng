
char FUN_1006ee7d0(QString *param_1,undefined8 param_2)

{
  QString *this;
  QArrayData *pQVar1;
  char cVar2;
  char cVar3;
  QString local_40;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_33;
  undefined1 local_32;
  
  this = param_1 + 1;
  if (*(int *)(param_1[1].field0_0x0 + 4) == 0) {
    cVar3 = FUN_1007034b0(param_1[3].field0_0x0,param_1,param_2,param_1 + 2);
    cVar2 = '\x01';
    if ((cVar3 == '\0') &&
       ((cVar3 = operator==(param_1 + 2,(QString *)&DAT_1011ccb00), cVar3 != '\0' ||
        (cVar3 = FUN_1007034b0(param_1[3].field0_0x0,param_1,param_2,&DAT_1011ccb00), cVar3 == '\0')
        ))) {
      cVar2 = '\0';
    }
  }
  else {
    cVar2 = FUN_1007034b0(param_1[3].field0_0x0,param_1,param_2,this);
  }
  local_40.field0_0x0 = param_1->field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_36 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  pQVar1 = (QArrayData *)this->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_35 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (cVar2 != '\0') {
    QString::operator=(param_1,&local_40);
    QString::operator=(this,(QString *)&DAT_1011ccb00);
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_33 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_33) goto LAB_1006ee8d4;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006ee8d4:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return cVar2;
      }
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return cVar2;
}

