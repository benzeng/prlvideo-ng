
undefined4 FUN_100585a10(long param_1,long param_2,QString *param_3)

{
  QString *this;
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  this = (QString *)(param_2 + 8);
  FUN_100585d90(&local_40,param_1,this);
  FUN_100585d90(&local_48,param_1,param_3);
  cVar2 = QFile::rename(&local_40,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100585a8c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100585a8c:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100585abc;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100585abc:
  if (cVar2 != '\0') {
    QString::operator=(this,param_3);
    plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x10);
    uVar3 = (**(code **)(*plVar1 + 0x120))(plVar1,param_2);
    return uVar3;
  }
  FUN_100585d90(&local_58,param_1,this);
  QString::toUtf8();
  pQVar4 = local_50 + *(long *)(local_50 + 0x10);
  FUN_100585d90(&local_68,param_1,param_3);
  QString::toUtf8();
  FUN_1008e3970("","vdisk",0,"Error: can\'t rename %s to %s",pQVar4,
                local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100585b89;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100585b89:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100585bb9;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100585bb9:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100585be9;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100585be9:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return 0x80019008;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
  return 0x80019008;
}

