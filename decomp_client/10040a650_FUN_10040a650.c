
void FUN_10040a650(void)

{
  code *pcVar1;
  QVariant *pQVar2;
  QArrayData *local_168;
  QArrayData *local_160;
  _func_void_Node_ptr *local_158;
  undefined1 local_149;
  QVariant local_148;
  undefined1 local_131;
  QVariant local_130;
  undefined4 local_11c;
  QVariant local_118;
  undefined4 local_104;
  QArrayData *local_100;
  QArrayData *local_f8;
  _func_void_Node_ptr *local_f0;
  undefined1 local_e1;
  QVariant local_e0;
  undefined1 local_c9;
  QVariant local_c8;
  undefined4 local_b4;
  QVariant local_b0;
  undefined4 local_9c;
  QArrayData *local_98;
  QArrayData *local_90;
  _func_void_Node_ptr *local_88;
  undefined1 local_79;
  QVariant local_78;
  undefined1 local_61;
  QVariant local_60;
  undefined4 local_4c;
  QVariant local_48;
  undefined4 local_34;
  _func_void_Node_ptr *local_30;
  int *local_28;
  undefined1 local_19;
  
  local_28 = (int *)PTR_shared_null_1021e15e8;
  local_30 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_34 = 0x100;
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&local_34);
  local_4c = 2;
  QVariant::QVariant(&local_48,2,&local_4c,0);
  QVariant::operator=(pQVar2,&local_48);
  QVariant::~QVariant(&local_48);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b168);
  local_61 = 1;
  QVariant::QVariant(&local_60,1,&local_61,0);
  QVariant::operator=(pQVar2,&local_60);
  QVariant::~QVariant(&local_60);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b16c);
  local_79 = 1;
  QVariant::QVariant(&local_78,1,&local_79,0);
  QVariant::operator=(pQVar2,&local_78);
  QVariant::~QVariant(&local_78);
  QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1df34cf);
  FUN_10041e510(&local_90,&local_98,&local_30);
  FUN_10041e590(&local_28,&local_90);
  if (*(int *)(local_88 + 0x10) != -1) {
    if (*(int *)(local_88 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a7b2;
    }
    QHashData::free_helper(local_88);
  }
LAB_10040a7b2:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a7e1;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10040a7e1:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a817;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10040a817:
  local_9c = 0x100;
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&local_9c);
  local_b4 = 0;
  QVariant::QVariant(&local_b0,2,&local_b4,0);
  QVariant::operator=(pQVar2,&local_b0);
  QVariant::~QVariant(&local_b0);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b168);
  local_c9 = 0;
  QVariant::QVariant(&local_c8,1,&local_c9,0);
  QVariant::operator=(pQVar2,&local_c8);
  QVariant::~QVariant(&local_c8);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b16c);
  local_e1 = 0;
  QVariant::QVariant(&local_e0,1,&local_e1,0);
  QVariant::operator=(pQVar2,&local_e0);
  QVariant::~QVariant(&local_e0);
  QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,0x1df34e5);
  FUN_10041e510(&local_f8,&local_100,&local_30);
  FUN_10041e590(&local_28,&local_f8);
  if (*(int *)(local_f0 + 0x10) != -1) {
    if (*(int *)(local_f0 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_f0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a988;
    }
    QHashData::free_helper(local_f0);
  }
LAB_10040a988:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_19 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a9b7;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10040a9b7:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040a9ed;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10040a9ed:
  local_104 = 0x100;
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&local_104);
  local_11c = 1;
  QVariant::QVariant(&local_118,2,&local_11c,0);
  QVariant::operator=(pQVar2,&local_118);
  QVariant::~QVariant(&local_118);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b168);
  local_131 = 1;
  QVariant::QVariant(&local_130,1,&local_131,0);
  QVariant::operator=(pQVar2,&local_130);
  QVariant::~QVariant(&local_130);
  pQVar2 = (QVariant *)FUN_100419e30(&local_30,&DAT_100e1b16c);
  local_149 = 0;
  QVariant::QVariant(&local_148,1,&local_149,0);
  QVariant::operator=(pQVar2,&local_148);
  QVariant::~QVariant(&local_148);
  QMetaObject::tr((char *)&local_168,PTR_staticMetaObject_1021e1520,0x1df34f8);
  FUN_10041e510(&local_160,&local_168,&local_30);
  FUN_10041e590(&local_28,&local_160);
  if (*(int *)(local_158 + 0x10) != -1) {
    if (*(int *)(local_158 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_158 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040ab5e;
    }
    QHashData::free_helper(local_158);
  }
LAB_10040ab5e:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_19 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040ab8d;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_10040ab8d:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_19 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040abc3;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10040abc3:
  FUN_1003fab60();
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040abfa;
    }
    QHashData::free_helper(local_30);
  }
LAB_10040abfa:
  if (*local_28 != -1) {
    if (*local_28 != 0) {
      LOCK();
      *local_28 = *local_28 + -1;
      UNLOCK();
      if (*local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    FUN_10041c910(&local_28,local_28);
  }
  return;
}

