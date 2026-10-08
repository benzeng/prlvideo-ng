
QString * FUN_1006b2540(QString *param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_10056ec80(&local_58,*(long *)(param_2 + 0x10) + 0x18);
  local_50 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 8) * 8);
  local_48 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 0xc) * 8);
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      pcVar1 = (char *)*local_50;
      local_70 = (QArrayData *)QString::fromAscii_helper("%1 - %2 \n",9);
      FUN_1007170a0(&local_78,pcVar1 + 8,2);
      QString::arg(&local_68,&local_70,&local_78,0,0x20);
      bVar2 = *pcVar1 == '\0';
      pcVar1 = "disabled";
      if (!bVar2) {
        pcVar1 = "enabled";
      }
      local_80 = (QArrayData *)QString::fromAscii_helper(pcVar1,bVar2 + 7);
      QString::arg(&local_60,&local_68,&local_80,0,0x20);
      QString::append(param_1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b266b;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1006b266b:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b269b;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1006b269b:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b26cb;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1006b26cb:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b26fb;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1006b26fb:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b272b;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1006b272b:
      local_50 = local_50 + 1;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  FUN_10056e3a0(&local_58);
  return param_1;
}

