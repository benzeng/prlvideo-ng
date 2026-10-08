
void FUN_1004094f0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  undefined4 local_14c;
  QVariant local_148;
  QArrayData *local_138;
  QArrayData *local_130;
  QVariant local_128;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QVariant local_f8;
  undefined4 local_e4;
  QVariant local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  Data_conflict local_90;
  undefined4 local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  undefined4 local_5c;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  int *local_28;
  undefined1 local_19;
  
  if (param_2 == 0) {
    return;
  }
  local_28 = (int *)PTR_shared_null_1021e15e8;
  EnumUtils::enumToString(&local_48,1,0xffffffff);
  local_5c = 1;
  QVariant::QVariant(&local_58,2,&local_5c,0);
  FUN_10041e0f0(&local_40,&local_48,&local_58);
  FUN_10041e170(&local_28,&local_40);
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040959a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10040959a:
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004095d3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004095d3:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Separator",9);
  local_88 = 0x80000000;
  local_90.field7 = 0;
  local_80 = pQVar2;
  FUN_10041e0f0(&local_78,&local_80,&local_90);
  FUN_10041e170(&local_28,&local_78);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100409657;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100409657:
  QVariant::~QVariant((QVariant *)&local_90);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040968e;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10040968e:
  QObject::property((char *)&local_a0);
  uVar1 = 0xffffffff;
  if ((local_a0.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QObject::property((char *)&local_b0);
    uVar1 = QVariant::toInt((bool *)&local_b0);
    QVariant::~QVariant(&local_b0);
  }
  QVariant::~QVariant(&local_a0);
  EnumUtils::enumToString(&local_d0,6,uVar1);
  local_e4 = 6;
  QVariant::QVariant(&local_e0,2,&local_e4,0);
  FUN_10041e0f0(&local_c8,&local_d0,&local_e0);
  FUN_10041e170(&local_28,&local_c8);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_19 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100409796;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100409796:
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004097d8;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004097d8:
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Separator",9);
  local_110 = 0x80000000;
  local_118.field7 = 0;
  local_108 = pQVar2;
  FUN_10041e0f0(&local_100,&local_108,&local_118);
  FUN_10041e170(&local_28,&local_100);
  QVariant::~QVariant(&local_f8);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_19 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100409874;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100409874:
  QVariant::~QVariant((QVariant *)&local_118);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_19 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004098ab;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004098ab:
  EnumUtils::enumToString(&local_138,0,0xffffffff);
  local_14c = 0;
  QVariant::QVariant(&local_148,2,&local_14c,0);
  FUN_10041e0f0(&local_130,&local_138,&local_148);
  FUN_10041e170(&local_28,&local_130);
  QVariant::~QVariant(&local_128);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10040994e;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_10040994e:
  QVariant::~QVariant(&local_148);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_19 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100409990;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100409990:
  FUN_1003fa820();
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
    FUN_10041b480(&local_28,local_28);
  }
  return;
}

