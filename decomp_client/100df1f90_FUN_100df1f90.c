
QString * FUN_100df1f90(QString *param_1,long *param_2,QString *param_3)

{
  QString *pQVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar3 = *param_2;
  iVar2 = *(int *)(lVar3 + 8);
  if (*(int *)(lVar3 + 0xc) <= iVar2) {
    return param_1;
  }
  lVar7 = (long)(*(int *)(lVar3 + 0xc) - iVar2) << 3;
  do {
    if (lVar7 == 0) {
      return param_1;
    }
    pQVar1 = (QString *)(lVar3 + (long)iVar2 * 8 + 8 + lVar7);
    cVar4 = operator==(pQVar1,param_3);
    lVar7 = lVar7 + -8;
  } while (cVar4 == '\0');
  uVar6 = (long)pQVar1 - (lVar3 + 0x10 + (long)iVar2 * 8);
  iVar2 = (int)(uVar6 >> 3);
  if (iVar2 + 1U < 2) {
    return param_1;
  }
  lVar3 = *param_2;
  if (iVar2 == (*(int *)(lVar3 + 0xc) + -1) - *(int *)(lVar3 + 8)) {
    return param_1;
  }
  QString::operator=(param_1,(QString *)
                             (lVar3 + 0x10 +
                             ((long)*(int *)(lVar3 + 8) +
                             ((long)(uVar6 * 0x20000000 + 0x100000000) >> 0x20)) * 8));
  local_48 = (QArrayData *)QString::fromAscii_helper("-",1);
  cVar4 = QString::startsWith(param_1,&local_48,1);
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper("--",2);
    cVar5 = QString::startsWith(param_1,&local_50,1);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df20dd;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100df20dd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df210d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100df210d:
  if ((cVar5 != '\0') &&
     (param_1->field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288)) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return param_1;
}

