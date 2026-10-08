
undefined8 FUN_1001612d0(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  _PrlApi_CreateStringsList(&local_40);
  puVar1 = (uint *)*param_2;
  if ((int)puVar1[2] < (int)puVar1[3]) {
    lVar3 = 0;
    do {
      uVar2 = local_40;
      if (1 < *puVar1) {
        FUN_100036c40(param_2,puVar1[1]);
      }
      QString::toUtf8();
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      _PrlStrList_AddItem(uVar2,local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001613a1;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_1001613a1:
      lVar3 = lVar3 + 1;
      puVar1 = (uint *)*param_2;
    } while (lVar3 < (long)(int)puVar1[3] - (long)(int)puVar1[2]);
  }
  uVar2 = _PrlSrv_StartConvertHdd(*(undefined8 *)(param_1 + 0x80),local_40);
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar2 = FUN_10015c580(param_1,uVar2,0x828,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar2;
}

