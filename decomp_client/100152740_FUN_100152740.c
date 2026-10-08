
long FUN_100152740(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  QString local_70;
  QString local_68;
  int *local_60;
  long *local_58;
  long *local_50;
  undefined4 local_48;
  QString local_40;
  undefined1 local_31;
  
  cVar2 = FUN_10010f120(param_2);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100062ec0(&local_60,param_1 + 0x10);
  local_58 = (long *)(local_60 + (long)local_60[2] * 2 + 4);
  local_50 = (long *)(local_60 + (long)local_60[3] * 2 + 4);
  if (local_60[2] != local_60[3]) {
    iVar4 = 1;
    do {
      local_48 = 1;
      lVar1 = *(long *)*local_58;
      param_1 = 0;
      if ((lVar1 != 0) && (param_1 = 0, *(int *)(lVar1 + 4) != 0)) {
        param_1 = ((long *)*local_58)[1];
      }
      if (cVar2 == '\0') {
        FUN_10015a060(&local_70,param_1);
        QString::operator=(&local_40,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100152880;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
      else {
        FUN_10015a1a0(&local_68,param_1);
        QString::operator=(&local_40,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100152880;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
LAB_100152880:
      iVar3 = QString::compare(param_2,&local_40,0);
      if (iVar3 == 0) goto LAB_1001528b4;
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar4 = 2;
LAB_1001528b4:
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001528de;
    }
    FUN_100063050(&local_60,local_60);
  }
LAB_1001528de:
  if (iVar4 == 2) {
    param_1 = 0;
  }
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
  return param_1;
}

