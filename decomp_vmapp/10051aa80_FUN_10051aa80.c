
void FUN_10051aa80(long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  QString *local_58;
  QString *local_50;
  int local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_60 = (int *)*param_2;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_60);
      iVar1 = local_60[2];
      if (iVar1 != local_60[3]) {
        puVar5 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar6 = local_60 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_60[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar5;
          *(int **)piVar6 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = (QString *)(local_60 + (long)local_60[2] * 2 + 4);
  local_50 = (QString *)(local_60 + (long)local_60[3] * 2 + 4);
  if (local_60[2] != local_60[3]) {
    do {
      local_48 = 1;
      QString::operator=(&local_40,local_58);
      if (local_48 != 0) {
        local_68 = 0;
        local_70 = 0x100000001;
        local_78 = (int *)PTR_shared_null_100ba2188;
        local_64 = param_3;
        uVar3 = FUN_1004303b0(*(undefined8 *)(*param_1 + 0xf0),&local_40,&local_70,0x10,&local_78,0,
                              1);
        if (*local_78 != -1) {
          if (*local_78 != 0) {
            LOCK();
            *local_78 = *local_78 + -1;
            local_31 = *local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10051abf2;
          }
          FUN_10051b850(&local_78,local_78);
        }
LAB_10051abf2:
        if ((uVar3 & 0xfffffffd) != 0) {
          FUN_1008e3970("","VmClientTGHost",0,
                        "failed to send \"connected\" notification, ReturnCode = %d",uVar3);
        }
      }
      local_58 = local_58 + 1;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  FUN_100037320(&local_60);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

