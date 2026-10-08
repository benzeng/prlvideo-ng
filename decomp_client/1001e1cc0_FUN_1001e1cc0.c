
void FUN_1001e1cc0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  QLocale local_78 [8];
  QArrayData *local_70;
  QLocale local_68 [8];
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  Data_conflict local_40;
  QString local_38 [2];
  undefined1 local_28 [8];
  _func_void_Node_ptr *local_20;
  undefined1 local_11;
  
  FUN_10061c2c0(local_28);
  cVar2 = FUN_1001de400(local_28);
  if (*(int *)(local_20 + 0x10) != -1) {
    if (*(int *)(local_20 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_20 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001e1d0e;
    }
    QHashData::free_helper(local_20);
  }
LAB_1001e1d0e:
  if (cVar2 == '\0') {
    return;
  }
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  QString::number((int)&local_48,0xc);
  QString::fromUtf8_helper(&local_40.field0,0x1dd9771);
  QString::append((QString *)&local_40);
  QVariant::QVariant(&local_58,0xb);
  QSettings::setValue(local_38,(QVariant *)&local_40);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_40.field15 != -1) {
    if (*(int *)local_40.field15 != 0) {
      LOCK();
      *(int *)local_40.field15 = *(int *)local_40.field15 + -1;
      local_11 = *(int *)local_40.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001e1dae;
    }
    QArrayData::deallocate((QArrayData *)local_40.field15,2,8);
  }
LAB_1001e1dae:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001e1dde;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001e1dde:
  QSettings::~QSettings((QSettings *)local_38);
  QLocale::QLocale(local_68);
  QLocale::name();
  iVar3 = QString::compare_helper
                    (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),"zh_CN",
                     0xffffffff,1);
  if (iVar3 == 0) {
    bVar5 = false;
  }
  else {
    QLocale::QLocale(local_78);
    QLocale::name();
    iVar3 = QString::compare_helper
                      (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),"zh_TW",
                       0xffffffff,1);
    bVar5 = iVar3 != 0;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_11 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001e1e9c;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1001e1e9c:
    QLocale::~QLocale(local_78);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1001e1ee1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001e1ee1:
  QLocale::~QLocale(local_68);
  if (bVar5) {
    FUN_1001de550();
  }
  uVar4 = FUN_1001d50a0();
  uVar4 = FUN_1001d50d0(uVar4);
  FUN_1001df380(uVar4);
  return;
}

