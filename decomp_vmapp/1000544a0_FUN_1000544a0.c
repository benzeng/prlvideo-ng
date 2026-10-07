
undefined8 FUN_1000544a0(long param_1,QString *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  cVar1 = QFileInfo::exists(param_2);
  if (cVar1 != '\0') {
    return 1;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QDir::QDir((QDir *)&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100054510;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100054510:
  cVar1 = QDir::mkpath(&local_30);
  uVar3 = 2;
  if (cVar1 != '\0') {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x20;
    uVar2 = *(int *)(param_1 + 0x3c) + 1;
    *(uint *)(param_1 + 0x3c) = uVar2;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x28) < uVar2) {
      *(uint *)(param_1 + 0x28) = uVar2;
    }
  }
  QDir::~QDir((QDir *)&local_30);
  return uVar3;
}

