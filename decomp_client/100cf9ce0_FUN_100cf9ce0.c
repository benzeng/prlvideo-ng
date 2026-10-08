
undefined8 FUN_100cf9ce0(long param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  QTypedArrayData<unsigned_short> *pQStack_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString QStack_90;
  undefined *local_88;
  undefined1 local_7f;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  local_50 = (QArrayData *)QString::fromAscii_helper("shfolder%1",10);
  local_58 = (QArrayData *)QString::fromAscii_helper("",0);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf9d72;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100cf9d72:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf9da2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100cf9da2:
  local_70 = (QArrayData *)QString::fromAscii_helper("count",5);
  pcVar1 = *(code **)(*param_2 + 0x10);
  local_68 = local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_31 = *(int *)local_48 != 0;
    UNLOCK();
  }
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_31 = *(int *)local_70 != 0;
    UNLOCK();
  }
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  iVar3 = (*pcVar1)(param_2,&local_68,&local_70,10,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf9e38;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100cf9e38:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cf9e68;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100cf9e68:
  *(int *)(param_1 + 0x2c) = iVar3;
  puVar2 = PTR_shared_null_1021e1288;
  if (0 < iVar3) {
    lVar4 = 0;
    auVar5._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar5._0_8_ = PTR_shared_null_1021e1288;
    auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      pQStack_d0 = auVar5._8_8_;
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      QStack_90.field0_0x0 = pQStack_d0;
      local_88 = PTR_shared_null_1021e1288;
      local_a8 = (QArrayData *)QString::fromAscii_helper("shfolder%1",10);
      QString::arg(&local_a0,&local_a8,lVar4,0,10,0x20);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf9f3d;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100cf9f3d:
      QString::fromUtf8_helper((char *)&local_40,0x1ef6a88);
      QString::operator=(&local_60,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf9f8d;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100cf9f8d:
      pcVar1 = *(code **)*param_2;
      local_b8 = (QArrayData *)local_a0.field0_0x0;
      if (1 < *(int *)local_a0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
      }
      local_c0 = (QArrayData *)local_60.field0_0x0;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      local_c8 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar1)(&local_b0,param_2,&local_b8,&local_c0,&local_c8);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa03c;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100cfa03c:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa072;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cfa072:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa0a8;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cfa0a8:
      if (*(int *)(local_b0.field0_0x0 + 4) != 0) {
        QString::operator=(&QStack_90,&local_b0);
        local_7f = 1;
        QString::operator=(&local_98,&local_a0);
        FUN_100d057b0(param_1 + 0x30,&local_98);
      }
      if (*(int *)local_b0.field0_0x0 != -1) {
        if (*(int *)local_b0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
          local_31 = *(int *)local_b0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa120;
        }
        QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
      }
LAB_100cfa120:
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfa156;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100cfa156:
      FUN_100d05f40(&local_98);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100cfa19e;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100cfa19e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 0x8000000;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return 0x8000000;
}

