
void FUN_10060adf0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  int *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  Data_conflict local_98;
  undefined4 local_90;
  undefined1 local_88;
  QDateTime local_78;
  QVariant local_70;
  Data_conflict local_60;
  QString local_58 [2];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if ((*(uint *)(param_4 + 8) & 0x3fffffff) != 0) {
    QVariant::toString();
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10060ae6a;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10060ae6a:
  QSettings::QSettings((QSettings *)local_58,(QObject *)0x0);
  QString::fromUtf8_helper(&local_60.field0,0x1e0721e);
  QString::append((QString *)&local_60);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_70,&local_78);
  QSettings::setValue(local_58,(QVariant *)&local_60);
  QVariant::~QVariant(&local_70);
  QDateTime::~QDateTime(&local_78);
  if (*(int *)local_60.field15 != -1) {
    if (*(int *)local_60.field15 != 0) {
      LOCK();
      *(int *)local_60.field15 = *(int *)local_60.field15 + -1;
      local_31 = *(int *)local_60.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10060af00;
    }
    QArrayData::deallocate((QArrayData *)local_60.field15,2,8);
  }
LAB_10060af00:
  QSettings::~QSettings((QSettings *)local_58);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_40), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_10060af6a;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_10060af6a:
      cVar2 = operator<(&local_40,(QString *)(lVar4 + 0x18));
      if (cVar2 == '\0') {
        FUN_1006134a0(param_1 + 0x40,&local_40);
        FUN_100609af0(param_1,&local_40,1);
        if (param_3 == 1) {
          if (DAT_102310958 == (void *)0x0) {
            pvVar3 = operator_new(0x18);
            FUN_100612690(pvVar3);
            DAT_102271170 = 1;
            DAT_102310958 = pvVar3;
          }
          pvVar3 = DAT_102310958;
          local_b8 = (int *)0x0;
          uStack_b0 = 0;
          local_a0 = 0;
          local_a8 = 0;
          local_90 = 0x80000000;
          local_98.field7 = 0;
          local_88 = 1;
          FUN_10060a8b0(*(undefined8 *)((long)DAT_102310958 + 0x10),0,&local_40,&local_b8);
          FUN_10060b4b0(*(undefined8 *)((long)pvVar3 + 0x10),0,&local_40,0);
          QVariant::~QVariant((QVariant *)&local_98);
          if (local_b8 != (int *)0x0) {
            LOCK();
            *local_b8 = *local_b8 + -1;
            local_31 = *local_b8 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (local_b8 != (int *)0x0)) {
              operator_delete(local_b8);
            }
          }
        }
        FUN_10060a040(param_1,5,&local_40,param_3 == 1);
      }
    }
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

