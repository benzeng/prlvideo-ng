
undefined1 FUN_100043b60(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  CVmEventParameter *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  CVmEventParameter *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  CVmEventParameter *local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_78;
  QString local_68;
  QString local_60;
  QString local_58;
  QDataStream local_50 [32];
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar4 = *(long *)(*param_2 + 0x10);
  if (*(int *)(lVar4 + 0x18) != 3) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",1,"AddFakeStubToParentalControl: Invalid data count %d");
      return 0;
    }
    return 0;
  }
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  QByteArray::fromRawData((char *)&local_30,(int)lVar4);
  QDataStream::QDataStream(local_50,(QByteArray *)&local_30);
  QDataStream::skipRawData((int)local_50);
  puVar1 = PTR_shared_null_100ba20d0;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  operator>>(local_50,&local_58);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  operator>>(local_50,&local_60);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  operator>>(local_50,&local_68);
  local_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_90 = operator_new(0xd0);
  local_98 = (QArrayData *)local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_21 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("coherence_fake_stub_id",0x16);
  CVmEventParameter::CVmEventParameter(local_90,1,&local_98,&local_a0);
  if (puStack_80 == local_78) {
    FUN_10002da50(&local_88,&local_90);
  }
  else {
    *puStack_80 = local_90;
    puStack_80 = puStack_80 + 1;
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043cff;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100043cff:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043d35;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100043d35:
  local_a8 = operator_new(0xd0);
  local_b0 = (QArrayData *)local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_21 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper("coherence_fake_stub_name",0x18);
  CVmEventParameter::CVmEventParameter(local_a8,1,&local_b0,&local_b8);
  if (puStack_80 == local_78) {
    FUN_10002da50(&local_88,&local_a8);
  }
  else {
    *puStack_80 = local_a8;
    puStack_80 = puStack_80 + 1;
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043dfe;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100043dfe:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043e34;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100043e34:
  local_c0 = operator_new(0xd0);
  local_c8 = (QArrayData *)local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_21 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper("coherence_fake_stub_path",0x18);
  CVmEventParameter::CVmEventParameter(local_c0,1,&local_c8);
  if (puStack_80 == local_78) {
    FUN_10002da50(&local_88,&local_c0);
  }
  else {
    *puStack_80 = local_c0;
    puStack_80 = puStack_80 + 1;
  }
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043efd;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100043efd:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100043f33;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100043f33:
  uVar2 = DAT_1011c3650;
  plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_d8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    *(undefined4 *)(plVar3 + 1) = 1;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_100bef0d0;
    local_d8 = plVar3;
  }
  FUN_100063770(uVar2,0x18c19,0,&local_88,0xbbb,&local_d8);
  if (local_d8 != (long *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  if (local_88 != (undefined8 *)0x0) {
    if (puStack_80 != local_88) {
      puStack_80 = (undefined8 *)
                   ((~((long)puStack_80 + (-8 - (long)local_88)) & 0xfffffffffffffff8U) +
                   (long)puStack_80);
    }
    operator_delete(local_88);
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100044018;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100044018:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100044048;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100044048:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100044078;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100044078:
  QDataStream::~QDataStream(local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return 1;
}

