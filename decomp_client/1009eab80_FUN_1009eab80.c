
QString * FUN_1009eab80(QString *param_1,long param_2,long param_3,long *param_4)

{
  char cVar1;
  QArrayData *pQVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QString local_40;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  if ((param_3 == 0) || (*(int *)(*param_4 + 4) == 0)) goto LAB_1009eacfb;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x268);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  local_38.field0_0x0 = local_40.field0_0x0;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_21 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  QFileInfo::QFileInfo(local_30,&local_38);
  QFileInfo::absoluteFilePath();
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009eac61;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1009eac61:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009eac91;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009eac91:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_21 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009eacc1;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1009eacc1:
  cVar1 = QFile::exists(param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
  pQVar3 = param_1->field0_0x0;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1009eacfb;
      pQVar3 = param_1->field0_0x0;
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)pQVar3,2,8);
  }
LAB_1009eacfb:
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  return param_1;
}

