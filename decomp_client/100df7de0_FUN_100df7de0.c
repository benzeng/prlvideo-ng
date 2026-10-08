
undefined8 FUN_100df7de0(uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *local_148;
  undefined4 local_13c;
  undefined8 *local_138;
  undefined4 local_12c;
  undefined8 *local_128;
  undefined4 local_11c;
  undefined8 *local_118;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  undefined4 local_bc;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if ((DAT_1023197a0 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1023197a0), iVar1 != 0)) {
    DAT_102319798 = (undefined8 *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_100df8ac0,&DAT_102319798,0x100000000);
    ___cxa_guard_release(&DAT_1023197a0);
  }
  if (*(int *)((long)DAT_102319798 + 0x14) != 0) goto LAB_100df87b9;
  local_bc = 0x2b;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_a0,"void",-1);
  QByteArray::QByteArray((QByteArray *)&local_a8,"v",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 0x2b;
  puVar2[2] = local_a0;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_21 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  puVar2[3] = local_a8;
  if (1 < *(int *)local_a8 + 1U) {
    LOCK();
    *(int *)local_a8 = *(int *)local_a8 + 1;
    local_21 = *(int *)local_a8 != 0;
    UNLOCK();
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df7f18;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100df7f18:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df7f4e;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100df7f4e:
  *puVar2 = &PTR_FUN_10225c560;
  local_c8 = puVar2;
  FUN_100df8b00(&local_bc,&local_c8);
  local_cc = 1;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_90,"BOOL",-1);
  QByteArray::QByteArray((QByteArray *)&local_98,"c",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 1;
  puVar2[2] = local_90;
  if (1 < *(int *)local_90 + 1U) {
    LOCK();
    *(int *)local_90 = *(int *)local_90 + 1;
    local_21 = *(int *)local_90 != 0;
    UNLOCK();
  }
  puVar2[3] = local_98;
  if (1 < *(int *)local_98 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_21 = *(int *)local_98 != 0;
    UNLOCK();
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_21 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8031;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_100df8031:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_21 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8067;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_100df8067:
  *puVar2 = &PTR_FUN_10225c5c8;
  local_d8 = puVar2;
  FUN_100df8b00(&local_cc,&local_d8);
  local_dc = 2;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_80,"int",-1);
  QByteArray::QByteArray((QByteArray *)&local_88,"i",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 2;
  puVar2[2] = local_80;
  if (1 < *(int *)local_80 + 1U) {
    LOCK();
    *(int *)local_80 = *(int *)local_80 + 1;
    local_21 = *(int *)local_80 != 0;
    UNLOCK();
  }
  puVar2[3] = local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_21 = *(int *)local_88 != 0;
    UNLOCK();
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8138;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100df8138:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8168;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100df8168:
  *puVar2 = &PTR_FUN_10225c608;
  local_e8 = puVar2;
  FUN_100df8b00(&local_dc,&local_e8);
  local_ec = 0x20;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_70,"long",-1);
  QByteArray::QByteArray((QByteArray *)&local_78,"q",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 0x20;
  puVar2[2] = local_70;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  puVar2[3] = local_78;
  if (1 < *(int *)local_78 + 1U) {
    LOCK();
    *(int *)local_78 = *(int *)local_78 + 1;
    local_21 = *(int *)local_78 != 0;
    UNLOCK();
  }
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8239;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100df8239:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8269;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100df8269:
  *puVar2 = &PTR_FUN_10225c648;
  local_f8 = puVar2;
  FUN_100df8b00(&local_ec,&local_f8);
  local_fc = 0x26;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_60,"float",-1);
  QByteArray::QByteArray((QByteArray *)&local_68,"f",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 0x26;
  puVar2[2] = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_21 = *(int *)local_60 != 0;
    UNLOCK();
  }
  puVar2[3] = local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_21 = *(int *)local_68 != 0;
    UNLOCK();
  }
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df833a;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100df833a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df836a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100df836a:
  *puVar2 = &PTR_FUN_10225c688;
  local_108 = puVar2;
  FUN_100df8b00(&local_fc,&local_108);
  local_10c = 6;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_50,"double",-1);
  QByteArray::QByteArray((QByteArray *)&local_58,"d",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 6;
  puVar2[2] = local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_21 = *(int *)local_50 != 0;
    UNLOCK();
  }
  puVar2[3] = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df843b;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100df843b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df846b;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100df846b:
  *puVar2 = &PTR_FUN_10225c6c8;
  local_118 = puVar2;
  FUN_100df8b00(&local_10c,&local_118);
  local_11c = 10;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_40,"NSString *",-1);
  QByteArray::QByteArray((QByteArray *)&local_48,"@",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 10;
  puVar2[2] = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  puVar2[3] = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df853c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100df853c:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df856c;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100df856c:
  *puVar2 = &PTR_FUN_10225c708;
  local_128 = puVar2;
  FUN_100df8b00(&local_11c,&local_128);
  local_12c = 0xc;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_30,"NSData *",-1);
  QByteArray::QByteArray((QByteArray *)&local_38,"@",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 0xc;
  puVar2[2] = local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_21 = *(int *)local_30 != 0;
    UNLOCK();
  }
  puVar2[3] = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df863d;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100df863d:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df866d;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100df866d:
  *puVar2 = &PTR_FUN_10225c748;
  local_138 = puVar2;
  FUN_100df8b00(&local_12c,&local_138);
  local_13c = 0x10;
  puVar2 = operator_new(0x20);
  QByteArray::QByteArray((QByteArray *)&local_b0,"NSDate *",-1);
  QByteArray::QByteArray((QByteArray *)&local_b8,"@",-1);
  *puVar2 = &PTR____cxa_pure_virtual_10225c5a8;
  *(undefined4 *)(puVar2 + 1) = 0x10;
  puVar2[2] = local_b0;
  if (1 < *(int *)local_b0 + 1U) {
    LOCK();
    *(int *)local_b0 = *(int *)local_b0 + 1;
    local_21 = *(int *)local_b0 != 0;
    UNLOCK();
  }
  puVar2[3] = local_b8;
  if (1 < *(int *)local_b8 + 1U) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_21 = *(int *)local_b8 != 0;
    UNLOCK();
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8750;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100df8750:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100df8786;
    }
    QArrayData::deallocate(local_b0,1,8);
  }
LAB_100df8786:
  *puVar2 = &PTR_FUN_10225c788;
  local_148 = puVar2;
  FUN_100df8b00(&local_13c,&local_148);
  if (*(int *)((long)DAT_102319798 + 0x14) == 0) {
    return 0;
  }
LAB_100df87b9:
  if (*(uint *)(DAT_102319798 + 4) != 0) {
    uVar3 = *(uint *)((long)DAT_102319798 + 0x24) ^ param_1;
    for (puVar2 = *(undefined8 **)
                   (DAT_102319798[1] + ((ulong)uVar3 % (ulong)*(uint *)(DAT_102319798 + 4)) * 8);
        puVar2 != DAT_102319798; puVar2 = (undefined8 *)*puVar2) {
      if ((*(uint *)(puVar2 + 1) == uVar3) && (*(uint *)((long)puVar2 + 0xc) == param_1)) {
        if (puVar2 == DAT_102319798) {
          return 0;
        }
        return puVar2[2];
      }
    }
  }
  return 0;
}

