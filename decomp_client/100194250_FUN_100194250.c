
long FUN_100194250(long param_1,QString *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  uVar2 = _PrlVm_DeleteSnapshot(uVar2,local_40 + *(long *)(local_40 + 0x10),param_3);
  QVariant::QVariant(&local_50,param_2);
  lVar3 = FUN_100191960(param_1,uVar2,0x40a,&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100194310;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100194310:
  if ((lVar3 != 0) && (cVar1 = FUN_10018f900(param_1), cVar1 == '\0')) {
    FUN_10018c880(param_1,0x3000000f);
  }
  return lVar3;
}

