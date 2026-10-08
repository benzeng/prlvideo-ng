
void FUN_100338800(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  QArrayData *local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  pcVar1 = *(code **)(*param_2 + 0x80);
  local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.EnableHiResDrawing",0x21);
  (*pcVar1)(&local_40,param_2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100338878;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100338878:
  pcVar1 = *(code **)(*param_3 + 0x80);
  local_60 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.EnableHiResDrawing",0x21);
  (*pcVar1)(&local_58,param_3,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003388d4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003388d4:
  if (((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) ||
     ((local_58.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0)) {
LAB_1003388fc:
    bVar2 = false;
  }
  else {
    cVar3 = QVariant::cmp(&local_40);
    bVar2 = true;
    if (cVar3 != '\0') goto LAB_1003388fc;
  }
  QVariant::~QVariant(&local_58);
  QVariant::~QVariant(&local_40);
  if (!bVar2) {
    pcVar1 = *(code **)(*param_2 + 0x80);
    local_78 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.NativeScalingInGuest",0x23);
    (*pcVar1)(&local_70,param_2,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_29 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100338975;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100338975:
    pcVar1 = *(code **)(*param_3 + 0x80);
    local_90 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.NativeScalingInGuest",0x23);
    (*pcVar1)(&local_88,param_3,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003389dd;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1003389dd:
    if (((local_70.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) ||
       ((local_88.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0)) {
LAB_100338a05:
      bVar2 = false;
    }
    else {
      cVar3 = QVariant::cmp(&local_70);
      bVar2 = true;
      if (cVar3 != '\0') goto LAB_100338a05;
    }
    QVariant::~QVariant(&local_88);
    QVariant::~QVariant(&local_70);
    if (!bVar2) {
      pcVar1 = *(code **)(*param_2 + 0x80);
      local_a8 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
      (*pcVar1)(&local_a0,param_2,&local_a8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100338a8d;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100338a8d:
      pcVar1 = *(code **)(*param_3 + 0x80);
      local_c0 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
      (*pcVar1)(&local_b8,param_3,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_29 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100338af8;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100338af8:
      if (((local_a0.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) ||
         ((local_b8.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0)) {
LAB_100338b2c:
        bVar2 = false;
      }
      else {
        cVar3 = QVariant::cmp(&local_a0);
        bVar2 = true;
        if (cVar3 != '\0') goto LAB_100338b2c;
      }
      QVariant::~QVariant(&local_b8);
      QVariant::~QVariant(&local_a0);
      if (!bVar2) {
        return;
      }
    }
  }
  pcVar1 = *(code **)(*param_2 + 0x80);
  local_d8 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
  (*pcVar1)(&local_d0,param_2,&local_d8);
  bVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_29 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100338bd5;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100338bd5:
  pcVar1 = *(code **)(*param_3 + 0x80);
  local_f0 = (QArrayData *)QString::fromAscii_helper("Hardware.Video.UseHiResInGuest",0x1e);
  (*pcVar1)(&local_e8,param_3,&local_f0);
  bVar5 = QVariant::toBool();
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100338c5a;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100338c5a:
  lVar7 = 0;
  if ((param_1[2] != 0) && (lVar7 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar7 = param_1[3];
  }
  uVar6 = FUN_100319390(lVar7);
  cVar3 = FUN_1001223d0(uVar6,bVar4 ^ bVar5);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x60))(param_1,1);
  }
  return;
}

