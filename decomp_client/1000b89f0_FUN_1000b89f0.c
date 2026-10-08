
undefined1 FUN_1000b89f0(long *param_1,QString *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  QString local_78;
  QString local_70;
  QString local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  QArrayData *local_50;
  undefined4 local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_60 = PTR_shared_null_1021e15e8;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  bVar5 = *(short *)(param_2->field0_0x0 + *(long *)(param_2->field0_0x0 + 0x10)) != 0x22;
  if (bVar5) {
    iVar3 = QString::indexOf(param_2,0x20,0,1);
  }
  else {
    iVar3 = QString::indexOf(param_2,0x22,1,1);
  }
  if (iVar3 == -1) {
    QString::operator=(&local_38,param_2);
  }
  else {
    QString::mid((int)&local_70,(int)param_2);
    QString::operator=(&local_38,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1000b8acc;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1000b8acc:
    if ((int)(iVar3 + 1 + (uint)!bVar5) < *(int *)(param_2->field0_0x0 + 4)) {
      QString::mid((int)&local_78,(int)param_2);
      QString::operator=(&local_40,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000b8b36;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
  }
LAB_1000b8b36:
  QString::operator=(&local_68,&local_38);
  if (local_40.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
    FUN_1000341d0(&local_60,&local_40);
  }
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
  cVar1 = FUN_1000e8740(uVar4,&local_68);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b8c50;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000b8c50:
  FUN_100039a80(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b8c89;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000b8c89:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b8cb9;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1000b8cb9:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar2;
}

