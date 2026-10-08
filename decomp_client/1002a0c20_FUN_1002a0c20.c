
undefined8 * FUN_1002a0c20(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
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
  undefined1 local_29;
  
  uVar2 = FUN_100748240();
  local_58 = (QArrayData *)QString::fromAscii_helper("is",2);
  lVar3 = FUN_100748290(uVar2,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0c94;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002a0c94:
  puVar1 = PTR_shared_null_1021e1288;
  if (lVar3 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    iVar4 = *(int *)puVar1;
    if (1 < iVar4 + 1U) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + 1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      iVar4 = *(int *)puVar1;
    }
    auVar5._8_4_ = (int)puVar1;
    auVar5._0_8_ = puVar1;
    auVar5._12_4_ = (int)((ulong)puVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 1) = auVar5;
    *(undefined1 (*) [16])(param_1 + 3) = auVar5;
    *(undefined1 (*) [16])(param_1 + 5) = auVar5;
    *(undefined1 (*) [16])(param_1 + 7) = auVar5;
    param_1[9] = puVar1;
    param_1[10] = PTR_shared_null_1021e15d0;
    if (iVar4 == -1) {
      return param_1;
    }
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    if (iVar4 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_29 = *(int *)puVar1 != 0;
      UNLOCK();
      local_60 = (QArrayData *)PTR_shared_null_1021e1288;
      if ((bool)local_29) {
        return param_1;
      }
    }
    goto LAB_1002a123f;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3",8);
  CAntivirusInfo::enumToString(&local_88,*(undefined4 *)(param_2 + 0x20));
  QString::toLower();
  QString::arg(&local_70,&local_78,&local_80,0,0x20);
  CAntivirusInfo::enumToString(&local_98,*(undefined4 *)(param_2 + 0x24));
  QString::toLower();
  QString::arg(&local_68,&local_70,&local_90,0,0x20);
  local_a0 = (QArrayData *)QString::fromAscii_helper("7_8",3);
  QString::arg(&local_60,&local_68,&local_a0,0,0x20);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0d90;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002a0d90:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0dc0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1002a0dc0:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0df6;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002a0df6:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0e2c;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1002a0e2c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0e5c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1002a0e5c:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0e8c;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1002a0e8c:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0ebc;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002a0ebc:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0eec;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1002a0eec:
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e41970);
  QString::append(&local_c0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0f5d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1002a0f5d:
  local_b8.field0_0x0 = local_c0.field0_0x0;
  if (1 < *(int *)local_c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
    local_29 = *(int *)local_c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1dc08d9);
  QString::append(&local_b8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a0fd1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002a0fd1:
  local_b0.field0_0x0 = local_b8.field0_0x0;
  if (1 < *(int *)local_b8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
    local_29 = *(int *)local_b8.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e41970);
  QString::append(&local_b0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a1045;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1002a1045:
  local_a8.field0_0x0 = local_b0.field0_0x0;
  if (1 < *(int *)local_b0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + 1;
    local_29 = *(int *)local_b0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1de3658);
  QString::append(&local_a8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a10b9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002a10b9:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_29 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a10ef;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002a10ef:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_29 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a1125;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1002a1125:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a115b;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002a115b:
  FUN_100746cb0(param_1,lVar3,&local_a8);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_29 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002a11a3;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_1002a11a3:
  if (*(int *)local_60 == -1) {
    return param_1;
  }
  if (*(int *)local_60 != 0) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + -1;
    UNLOCK();
    if (*(int *)local_60 != 0) {
      return param_1;
    }
    local_29 = 0;
  }
LAB_1002a123f:
  QArrayData::deallocate(local_60,2,8);
  return param_1;
}

