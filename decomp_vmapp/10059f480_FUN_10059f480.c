
undefined4 FUN_10059f480(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QMutex::lock();
  iVar1 = QRegExp::indexIn(&DAT_1011bc6f0,param_1,0,0);
  if (iVar1 < 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Partition %s can\'t be decomposed by parts.",
                  local_20 + *(long *)(local_20 + 0x10));
    uVar2 = 0xffffffff;
    if (*(int *)local_20 == -1) goto LAB_10059f56b;
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10059f56b;
    }
    uVar3 = 1;
    local_28 = local_20;
  }
  else {
    QRegExp::cap((int)&local_28);
    uVar2 = QString::toUInt((bool *)&local_28,0);
    if (*(int *)local_28 == -1) goto LAB_10059f56b;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10059f56b;
    }
    uVar3 = 2;
  }
  QArrayData::deallocate(local_28,uVar3,8);
LAB_10059f56b:
  QMutex::unlock();
  return uVar2;
}

