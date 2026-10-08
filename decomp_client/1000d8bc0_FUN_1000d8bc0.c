
void FUN_1000d8bc0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined *local_78;
  QString local_70;
  undefined *local_68;
  undefined8 local_60;
  QArrayData *local_58;
  undefined4 local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e15e8;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_68 = PTR_shared_null_1021e15e8;
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1000341d0(&local_68,param_3);
  local_60 = *param_2;
  local_50 = 0;
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 2);
  if (lVar4 != 0) {
    iVar2 = FUN_10018f860(lVar4);
    if (iVar2 == 7) {
      QString::fromUtf8_helper((char *)&local_38,0x1dbe1e4);
      QString::operator=(&local_70,&local_38);
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000d8d46;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
    else if (iVar2 == 9) {
      QString::fromUtf8_helper((char *)&local_40,0x1dbe1db);
      QString::operator=(&local_70,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_29 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000d8d46;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
    else if (iVar2 == 8) {
      QString::fromUtf8_helper((char *)&local_48,0x1dbe1ce);
      QString::operator=(&local_70,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1000d8d46;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
    }
  }
LAB_1000d8d46:
  lVar4 = (**(code **)(*param_1 + 0x68))(param_1);
  if (*(char *)(lVar4 + 0xc) == '\0') {
    FUN_1000bdac0(param_1 + 0xd,&local_70);
  }
  else {
    local_78 = puVar1;
    FUN_1000bdac0(&local_78,&local_70);
    FUN_1000b9840(param_1,&local_78);
    if (DAT_102310a08 == (void *)0x0) {
      pvVar5 = operator_new(0x220);
      FUN_1007cc3f0(pvVar5);
      DAT_102273890 = 1;
      DAT_102310a08 = pvVar5;
    }
    FUN_1007d47f0(DAT_102310a08);
    FUN_1000b70d0(&local_78);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000d8df6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000d8df6:
  FUN_100039a80(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_70.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
  return;
}

