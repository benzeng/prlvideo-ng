
void FUN_10037f230(long param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  QKeySequence *this;
  long lVar6;
  QArrayData *local_70;
  QString local_68;
  Data *local_60 [2];
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_100188480(&local_38);
  cVar2 = operator==(&local_38,param_2);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037f2b2;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10037f2b2:
  puVar1 = PTR_shared_null_1021e1288;
  if (cVar2 == '\0') {
    return;
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c280(uVar4);
  uVar4 = FUN_100319d40(uVar4);
  cVar2 = FUN_10035c0e0(uVar4,0,0);
  if (cVar2 == '\0') goto LAB_10037f53a;
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c280(uVar4);
  uVar4 = FUN_100319d40(uVar4);
  iVar3 = FUN_10035b400(uVar4);
  if (iVar3 == 1) goto LAB_10037f53a;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (DAT_102310998 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1006faf60(pvVar5);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar5;
  }
  cVar2 = FUN_1006faa10(DAT_102310998,0x5a);
  if (cVar2 != '\0') {
    if (DAT_102310998 == (void *)0x0) {
      pvVar5 = operator_new(0x18);
      FUN_1006faf60(pvVar5);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar5;
    }
    FUN_1006faa30(local_60,DAT_102310998,0x5a);
    FUN_100708910(&local_50,local_60,1);
    QString::operator=(&local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10037f404;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10037f404:
    if (*(int *)local_60[0] != -1) {
      if (*(int *)local_60[0] != 0) {
        LOCK();
        *(int *)local_60[0] = *(int *)local_60[0] + -1;
        local_29 = *(int *)local_60[0] != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10037f462;
      }
      iVar3 = *(int *)(local_60[0] + 0xc);
      if (iVar3 != *(int *)(local_60[0] + 8)) {
        lVar6 = (long)*(int *)(local_60[0] + 8) * 8 + (long)iVar3 * -8;
        this = (QKeySequence *)(local_60[0] + (long)iVar3 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(local_60[0]);
    }
  }
LAB_10037f462:
  QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s__1_to_free_cursor_10226ff80);
  QString::arg(&local_68,&local_70,&local_48,0,0x20);
  QString::operator=(&local_40,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037f4da;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10037f4da:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037f50a;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10037f50a:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037f53a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10037f53a:
  FUN_10037efc0(param_1,1,&local_40,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

