
undefined8 FUN_100659db0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  QString *pQVar6;
  undefined8 uVar7;
  QString local_218;
  QString local_210;
  QArrayData *local_208;
  QString local_200;
  QString local_1f8;
  QString local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QString local_1d0;
  QString local_1c8;
  QString local_1c0;
  QString local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QString local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  QString local_d8;
  undefined1 local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
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
  undefined1 local_31;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
  QLineEdit::text();
  QString::simplified();
  cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_40 + 4) == 0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659e35;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100659e35:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659e65;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100659e65:
  if (cVar3 != '\0') {
    return 0;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x48);
  QLineEdit::text();
  QString::simplified();
  cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_50 + 4) == 0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659edb;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100659edb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659f0b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100659f0b:
  if (cVar3 != '\0') {
    return 0;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
  FUN_100659330(&local_60,uVar7);
  cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_60 + 4) == 0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100659f72;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100659f72:
  if (cVar3 != '\0') {
    return 0;
  }
  FUN_100659330(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x48) + 200));
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 200);
  if (*(int *)(local_68 + 4) == 0) {
    bVar4 = *(byte *)(*(long *)(lVar1 + 0x28) + 9) >> 7;
  }
  else {
    bVar4 = 0;
  }
  cVar3 = FUN_100659600(param_1,lVar1,bVar4);
  if (cVar3 != '\0') goto LAB_10065ad7d;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90);
  FUN_100659330(&local_70,uVar7);
  cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_70 + 4) == 0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a026;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10065a026:
  if (cVar3 != '\0') goto LAB_10065ad7d;
  FUN_100659330(&local_78,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98));
  iVar5 = QString::compare_helper
                    (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),"At work",
                     0xffffffff,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a099;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10065a099:
  if (iVar5 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    QLineEdit::text();
    QString::simplified();
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_80 + 4) == 0);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a32f;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10065a32f:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a35f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_10065a35f:
    if (cVar3 != '\0') goto LAB_10065ad7d;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    FUN_100659330(&local_90,uVar7);
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_90 + 4) == 0);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a3cf;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10065a3cf:
    if (cVar3 != '\0') goto LAB_10065ad7d;
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    FUN_100659330(&local_98,uVar7);
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_98 + 4) == 0);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a441;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_10065a441:
    if (cVar3 != '\0') goto LAB_10065ad7d;
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    FUN_100659330(&local_a0,uVar7);
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_a0 + 4) == 0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a4b3;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
    goto LAB_10065a4b3;
  }
  FUN_100659330(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98));
  iVar5 = QString::compare_helper
                    (local_a8 + *(long *)(local_a8 + 0x10),*(undefined4 *)(local_a8 + 4),"At school"
                     ,0xffffffff,1);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a118;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10065a118:
  if (iVar5 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    QLineEdit::text();
    QString::simplified();
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_b0 + 4) == 0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a19e;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_10065a19e:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a1d4;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10065a1d4:
    if (cVar3 != '\0') goto LAB_10065ad7d;
    uVar7 = *(undefined8 *)(param_1 + 0xd0);
    FUN_100659330(&local_c0,uVar7);
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_c0 + 4) == 0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a247;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_10065a247:
    if (cVar3 != '\0') goto LAB_10065ad7d;
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    FUN_100659330(&local_c8,uVar7);
    cVar3 = FUN_100659600(param_1,uVar7,*(int *)(local_c8 + 4) == 0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065a4b3;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10065a4b3:
    if (cVar3 != '\0') goto LAB_10065ad7d;
  }
  puVar2 = PTR_shared_null_1021e1288;
  local_168._8_4_ = (int)PTR_shared_null_1021e1288;
  local_168._0_8_ = PTR_shared_null_1021e1288;
  local_168._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_d0 = 1;
  local_158 = local_168;
  local_148 = local_168;
  local_138 = local_168;
  local_128 = local_168;
  local_118 = local_168;
  local_108 = local_168;
  local_f8 = local_168;
  local_e8 = local_168;
  QLineEdit::text();
  QString::simplified();
  QString::operator=((QString *)(local_138 + 8),&local_170);
  if (*(int *)local_170.field0_0x0 != -1) {
    if (*(int *)local_170.field0_0x0 != 0) {
      LOCK();
      *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
      local_31 = *(int *)local_170.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a592;
    }
    QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
  }
LAB_10065a592:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a5c8;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10065a5c8:
  QLineEdit::text();
  QString::simplified();
  QString::operator=((QString *)local_128,&local_180);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_31 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a638;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_10065a638:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a66e;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10065a66e:
  QLineEdit::text();
  QString::simplified();
  QString::operator=((QString *)(local_128 + 8),&local_190);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a6de;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_10065a6de:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a714;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10065a714:
  QLineEdit::text();
  QString::simplified();
  QString::operator=((QString *)(local_118 + 8),&local_1a0);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_31 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a784;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_10065a784:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a7ba;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_10065a7ba:
  FUN_100659330(&local_1b0,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70));
  QString::operator=((QString *)local_138,&local_1b0);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_31 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a817;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_10065a817:
  FUN_100659330(&local_1b8,*(undefined8 *)(*(long *)(param_1 + 0x48) + 200));
  QString::operator=((QString *)local_118,&local_1b8);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_31 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a877;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_10065a877:
  FUN_100659330(&local_1c0,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x90));
  QString::operator=((QString *)(local_148 + 8),&local_1c0);
  if (*(int *)local_1c0.field0_0x0 != -1) {
    if (*(int *)local_1c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
      local_31 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a8d7;
    }
    QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
  }
LAB_10065a8d7:
  FUN_100659330(&local_1c8,*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x98));
  QString::operator=((QString *)local_148,&local_1c8);
  if (*(int *)local_1c8.field0_0x0 != -1) {
    if (*(int *)local_1c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c8.field0_0x0 = *(int *)local_1c8.field0_0x0 + -1;
      local_31 = *(int *)local_1c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a937;
    }
    QArrayData::deallocate((QArrayData *)local_1c8.field0_0x0,2,8);
  }
LAB_10065a937:
  local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  pQVar6 = (QString *)QString::operator=(&local_d8,&local_1d0);
  pQVar6 = (QString *)QString::operator=((QString *)(local_e8 + 8),pQVar6);
  pQVar6 = (QString *)QString::operator=((QString *)local_e8,pQVar6);
  pQVar6 = (QString *)QString::operator=((QString *)(local_f8 + 8),pQVar6);
  pQVar6 = (QString *)QString::operator=((QString *)local_f8,pQVar6);
  pQVar6 = (QString *)QString::operator=((QString *)(local_108 + 8),pQVar6);
  QString::operator=((QString *)local_108,pQVar6);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10065a9ed;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_10065a9ed:
  iVar5 = QString::compare_helper
                    ((QTypedArrayData<unsigned_short> *)
                     (local_148._0_8_ + *(long *)(local_148._0_8_ + 0x10)),
                     *(undefined4 *)(local_148._0_8_ + 4),"At work",0xffffffff,1);
  if (iVar5 == 0) {
    QLineEdit::text();
    QString::simplified();
    QString::operator=((QString *)local_108,&local_1d8);
    if (*(int *)local_1d8.field0_0x0 != -1) {
      if (*(int *)local_1d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
        local_31 = *(int *)local_1d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065ac1b;
      }
      QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
    }
LAB_10065ac1b:
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065ac51;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
LAB_10065ac51:
    FUN_100659330(&local_1e8,*(undefined8 *)(param_1 + 0x70));
    QString::operator=((QString *)(local_108 + 8),&local_1e8);
    if (*(int *)local_1e8.field0_0x0 != -1) {
      if (*(int *)local_1e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
        local_31 = *(int *)local_1e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065aca6;
      }
      QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
    }
LAB_10065aca6:
    FUN_100659330(&local_1f0,*(undefined8 *)(param_1 + 0x88));
    QString::operator=((QString *)local_f8,&local_1f0);
    if (*(int *)local_1f0.field0_0x0 != -1) {
      if (*(int *)local_1f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
        local_31 = *(int *)local_1f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065acfe;
      }
      QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
    }
LAB_10065acfe:
    FUN_100659330(&local_1f8,*(undefined8 *)(param_1 + 0xa0));
    QString::operator=((QString *)(local_f8 + 8),&local_1f8);
    if (*(int *)local_1f8.field0_0x0 != -1) {
      if (*(int *)local_1f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
        local_31 = *(int *)local_1f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10065ad5a;
      }
      QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,2,8);
    }
  }
  else {
    iVar5 = QString::compare_helper
                      ((QTypedArrayData<unsigned_short> *)
                       (local_148._0_8_ + *(long *)(local_148._0_8_ + 0x10)),
                       *(undefined4 *)(local_148._0_8_ + 4),"At school",0xffffffff,1);
    if (iVar5 == 0) {
      QLineEdit::text();
      QString::simplified();
      QString::operator=((QString *)local_e8,&local_200);
      if (*(int *)local_200.field0_0x0 != -1) {
        if (*(int *)local_200.field0_0x0 != 0) {
          LOCK();
          *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
          local_31 = *(int *)local_200.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10065aab8;
        }
        QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
      }
LAB_10065aab8:
      if (*(int *)local_208 != -1) {
        if (*(int *)local_208 != 0) {
          LOCK();
          *(int *)local_208 = *(int *)local_208 + -1;
          local_31 = *(int *)local_208 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10065aaee;
        }
        QArrayData::deallocate(local_208,2,8);
      }
LAB_10065aaee:
      FUN_100659330(&local_210,*(undefined8 *)(param_1 + 0xd0));
      QString::operator=((QString *)(local_e8 + 8),&local_210);
      if (*(int *)local_210.field0_0x0 != -1) {
        if (*(int *)local_210.field0_0x0 != 0) {
          LOCK();
          *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
          local_31 = *(int *)local_210.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10065ab4a;
        }
        QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
      }
LAB_10065ab4a:
      FUN_100659330(&local_218,*(undefined8 *)(param_1 + 0xe8));
      QString::operator=(&local_d8,&local_218);
      if (*(int *)local_218.field0_0x0 != -1) {
        if (*(int *)local_218.field0_0x0 != 0) {
          LOCK();
          *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
          local_31 = *(int *)local_218.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10065ad5a;
        }
        QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
      }
    }
  }
LAB_10065ad5a:
  uVar7 = FUN_10063f730(param_1);
  FUN_10067c7d0(uVar7,local_168);
  FUN_10065ec20(local_168);
LAB_10065ad7d:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return 0;
}

