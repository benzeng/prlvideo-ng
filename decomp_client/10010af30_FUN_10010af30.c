
undefined8 *
FUN_10010af30(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if (((*(int *)(*param_3 + 4) == 0) || (*(int *)(*param_4 + 4) == 0)) ||
     (*(int *)(*param_5 + 4) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    FUN_10010b100(&local_40,param_3,param_4,param_5,0);
    iVar2 = 1;
    while (cVar1 = QFile::exists(&local_40), cVar1 != '\0') {
      FUN_10010b100(&local_48,param_3,param_4,param_5,iVar2);
      QString::operator=(&local_40,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10010afb0;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_10010afb0:
      iVar2 = iVar2 + 1;
    }
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
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
  }
  return param_1;
}

