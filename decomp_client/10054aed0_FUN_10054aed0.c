
void FUN_10054aed0(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  QString local_28;
  undefined1 local_19;
  
  local_40 = -1;
  local_30 = 0;
  local_38 = 0;
  if (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 < 0) {
      local_b8 = 0xffffffff;
      local_b4 = 0xffffffff;
      local_a8 = 0;
      local_b0 = 0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x60))
                (&local_a0,*(long **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3c),0,&local_b8);
      if ((((int)local_a0 < 0) || (local_a0 < 0)) || (local_90 == 0)) {
        local_e8 = 0xffffffff;
        local_e4 = 0xffffffff;
        local_d8 = 0;
        local_e0 = 0;
        (**(code **)(**(long **)(param_1 + 0x28) + 0x60))
                  (&local_d0,*(long **)(param_1 + 0x28),0,0,&local_e8);
        local_30 = local_c0;
        local_40 = local_d0;
        local_38 = local_c8;
      }
      else {
        local_30 = local_90;
        local_40 = local_a0;
        local_38 = local_98;
      }
    }
    else {
      iVar3 = iVar1 + -1;
      if (iVar1 < 1) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x38) = iVar3;
      local_88 = 0xffffffff;
      local_84 = 0xffffffff;
      local_78 = 0;
      local_80 = 0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0x60))
                (&local_70,*(long **)(param_1 + 0x28),iVar3,0,&local_88);
      local_30 = local_60;
      local_38 = local_68;
      local_40 = local_70;
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    }
  }
  else {
    FUN_100549c20(&local_58,*(undefined8 *)(param_1 + 0x28),(QString *)(param_1 + 0x30));
    local_30 = local_48;
    local_38 = local_50;
    local_40 = local_58;
    if (*(undefined **)(param_1 + 0x30) != PTR_shared_null_1021e1288) {
      local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=((QString *)(param_1 + 0x30),&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10054b0fb;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
    }
  }
LAB_10054b0fb:
  if ((-1 < (int)((uint)((ulong)local_40 >> 0x20) | (uint)local_40)) && (local_30 != 0)) {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),0));
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),0));
    plVar2 = (long *)QAbstractItemView::selectionModel();
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_40,0x32);
  }
  return;
}

