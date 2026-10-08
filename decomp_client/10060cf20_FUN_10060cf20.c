
void FUN_10060cf20(long param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  QDateTime local_108;
  QVariant local_100;
  Data_conflict local_f0;
  QString local_e8 [2];
  int *local_d8;
  long lStack_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Data_conflict local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_8c;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  uint local_68;
  undefined *local_60;
  _func_void_Node_ptr *local_58;
  QString local_50;
  QVariant local_48;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::sender();
  QObject::property((char *)&local_48);
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_38,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10060cfae;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_10060cfae:
  puVar4 = PTR_shared_null_1021e15d0;
  if (param_2 == 1) {
    local_60 = PTR_shared_null_1021e15d0;
    FUN_100612f60(&local_58,param_1 + 0x68,&local_38,&local_60);
    iVar2 = *(int *)(puVar4 + 0x10);
    if (iVar2 != -1) {
      if (iVar2 != 0) {
        LOCK();
        piVar7 = (int *)(puVar4 + 0x10);
        *piVar7 = *piVar7 + -1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10060d007;
      }
      QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
    }
LAB_10060d007:
    local_8c = 4;
    FUN_100613070(&local_88,&local_58,&local_8c);
    FUN_100614750(&local_80,&local_88);
    local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
    local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
    local_68 = 1;
    if (*(int *)local_88 == -1) {
LAB_10060d0a7:
      bVar8 = false;
      do {
        while( true ) {
          if (local_78 == local_70) goto LAB_10060d10b;
          if ((local_68 != 0) && (cVar5 = FUN_10019cd90(*(undefined8 *)local_78), cVar5 != '\0'))
          break;
          local_78 = local_78 + 8;
          local_68 = 1;
        }
        local_78 = local_78 + 8;
        uVar6 = local_68 ^ 1;
        bVar8 = true;
        bVar9 = local_68 != 1;
        local_68 = uVar6;
      } while (bVar9);
    }
    else {
      if (*(int *)local_88 == 0) {
LAB_10060d07d:
        FUN_100322470(&local_88,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                      local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10);
        QListData::dispose(local_88);
      }
      else {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_29 = *(int *)local_88 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_10060d07d;
      }
      if (local_68 != 0) goto LAB_10060d0a7;
      bVar8 = false;
    }
LAB_10060d10b:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10060d14f;
      }
      FUN_100322470(&local_80,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                    local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10);
      QListData::dispose(local_80);
    }
LAB_10060d14f:
    if (!bVar8) {
      lVar3 = *(long *)(param_1 + 0x10);
      local_c8 = (int *)0x0;
      uStack_c0 = 0;
      local_b0 = 0;
      local_b8 = 0;
      local_a0 = 0x80000000;
      local_a8.field7 = 0;
      local_98 = 1;
      FUN_10060a8b0(*(undefined8 *)(lVar3 + 0x10),0,&local_38,&local_c8);
      FUN_10060b4b0(*(undefined8 *)(lVar3 + 0x10),0,&local_38,0);
      QVariant::~QVariant((QVariant *)&local_a8);
      if (local_c8 != (int *)0x0) {
        LOCK();
        *local_c8 = *local_c8 + -1;
        local_29 = *local_c8 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (local_c8 != (int *)0x0)) {
          operator_delete(local_c8);
        }
      }
    }
    if (*(int *)(local_58 + 0x10) != -1) {
      if (*(int *)(local_58 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_58 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_29 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10060d225;
      }
      QHashData::free_helper(local_58);
    }
  }
LAB_10060d225:
  FUN_100613b20(&local_d8,param_1 + 0x30,&local_38);
  FUN_10060a040(param_1,4,&local_38,param_2);
  QSettings::QSettings((QSettings *)local_e8,(QObject *)0x0);
  local_f0.field7 = QString::fromAscii_helper("RenewLicenseLastShowTime/",0x19);
  QString::append((QString *)&local_f0);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_100,&local_108);
  QSettings::setValue(local_e8,(QVariant *)&local_f0);
  QVariant::~QVariant(&local_100);
  QDateTime::~QDateTime(&local_108);
  FUN_10060d6d0(param_1,&local_38);
  piVar7 = (int *)0x0;
  if (((local_d8 != (int *)0x0) && (piVar7 = local_d8, local_d8[1] != 0)) && (lStack_d0 != 0)) {
    QObject::deleteLater();
    LOCK();
    *local_d8 = *local_d8 + -1;
    local_29 = *local_d8 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(local_d8);
    }
    local_d8 = (int *)0x0;
    lStack_d0 = 0;
    piVar7 = (int *)0x0;
  }
  if (*(int *)local_f0.field15 != -1) {
    if (*(int *)local_f0.field15 != 0) {
      LOCK();
      *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
      local_29 = *(int *)local_f0.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060d36a;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
  }
LAB_10060d36a:
  QSettings::~QSettings((QSettings *)local_e8);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_29 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar7);
    }
  }
  QVariant::~QVariant(&local_48);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return;
}

