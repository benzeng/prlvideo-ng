
undefined1
FUN_100545970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 in_stack_ffffffffffffff08;
  uint uVar3;
  undefined1 local_f0 [152];
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [6];
  undefined1 local_42;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = (uint)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  FUN_100761460(local_48);
  local_42 = 0;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::toUtf8();
  cVar1 = FUN_100546b20(local_48,local_50 + *(long *)(local_50 + 0x10),1,1,0,0,(ulong)uVar3 << 0x20)
  ;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100545a0e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100545a0e:
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","TransMem",0,"valid_compressed_image(%s) failed to open file",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100545ab4;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_100545ab4:
    uVar2 = 0;
  }
  else {
    FUN_10054be90(local_f0,local_48,param_2,param_3,param_4,0,0);
    uVar2 = FUN_10054c5a0(local_f0);
    FUN_100546d50(local_f0);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100545ae6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100545ae6:
  FUN_1007614a0(local_48);
  return uVar2;
}

