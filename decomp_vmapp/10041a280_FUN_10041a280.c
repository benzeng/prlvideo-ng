
undefined8 FUN_10041a280(long param_1,bool *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  char local_1a;
  undefined1 local_19;
  
  uVar1 = QByteArray::toUInt(param_2,(int)&local_1a);
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (local_1a == '\0') {
    QByteArray::operator=((QByteArray *)&local_28,"E0");
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    iVar3 = *(int *)(param_1 + 0x18 + (ulong)uVar2 * 4);
    *(int *)(param_1 + 0x98) = iVar3;
    if (iVar3 == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
      iVar3 = *(int *)(param_1 + 0x18 + (ulong)uVar2 * 4);
    }
    if (iVar3 == 3) {
      if (uVar1 < 0x4a) {
        FUN_100414c70(&local_38,&PTR_s_rax_10111ad50 + (ulong)uVar1 * 10);
        QByteArray::operator=((QByteArray *)&local_28,(QByteArray *)&local_38);
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_19 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10041a3fb;
          }
          QArrayData::deallocate(local_38,1,8);
        }
      }
      else {
        QByteArray::operator=((QByteArray *)&local_28,"E45");
      }
    }
    else if (uVar1 < 0x32) {
      FUN_100414c70(&local_30,&PTR_s_eax_101119db0 + (ulong)uVar1 * 10);
      QByteArray::operator=((QByteArray *)&local_28,(QByteArray *)&local_30);
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_19 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10041a3fb;
        }
        QArrayData::deallocate(local_30,1,8);
      }
    }
    else {
      QByteArray::operator=((QByteArray *)&local_28,"E45");
    }
  }
LAB_10041a3fb:
  FUN_100419170(param_1,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 1;
}

