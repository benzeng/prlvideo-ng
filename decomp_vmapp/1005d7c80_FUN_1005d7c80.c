
undefined8 FUN_1005d7c80(undefined8 param_1,QString *param_2)

{
  QArrayData *pQVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  long local_30 [2];
  undefined1 local_19;
  
  QFile::QFile((QFile *)local_30,param_2);
  cVar2 = QFile::open((QFile *)local_30,3);
  if (cVar2 != '\0') {
    QFile::setPermissions(local_30,0x6666);
    uVar3 = 0;
    (**(code **)(local_30[0] + 0x70))(local_30);
    goto LAB_1005d7d7e;
  }
  pQVar1 = (QArrayData *)param_2->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vdisk",0,"Lock file is missing and can\'t be created [%s]",
                local_38 + *(long *)(local_38 + 0x10));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d7d49;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_1005d7d49:
  uVar3 = 0x80021014;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005d7d7e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005d7d7e:
  QFile::~QFile((QFile *)local_30);
  return uVar3;
}

