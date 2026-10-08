
void FUN_1002e4c60(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  QStringList *pQVar4;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  ExternalRefCountData *local_48;
  AnonymousUnion0 local_40;
  QMetaObject *local_38 [3];
  
  if (param_2 < 0) {
    iVar2 = CMessageManager::instance();
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
    pQVar4 = (QStringList *)0x0;
    if ((lVar1 != 0) && (pQVar4 = (QStringList *)0x0, *(int *)(lVar1 + 4) != 0)) {
      pQVar4 = *(QStringList **)(*(long *)(param_1 + 0x18) + 0x58);
    }
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_88 = (int *)0x0;
    uStack_80 = 0;
    local_70 = 0;
    local_78 = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015271,pQVar4,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,SUB81(&local_88,0));
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_88 != (int *)0x0) {
      LOCK();
      *local_88 = *local_88 + -1;
      local_38[2]._7_1_ = *local_88 != 0;
      UNLOCK();
      if ((!(bool)local_38[2]._7_1_) && (local_88 != (int *)0x0)) {
        operator_delete(local_88);
      }
    }
    FUN_100039a80(&local_48);
    FUN_100039a80(&local_40);
  }
  else {
    local_38[0] = (QMetaObject *)0x0;
    local_38[1] = *(QMetaObject **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0)) {
      local_38[0] = (QMetaObject *)QWidget::pos();
    }
    if (DAT_102310990 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_1006ea620(pvVar3);
      DAT_102273501 = 1;
      DAT_102310990 = pvVar3;
    }
    FUN_1006ea710(DAT_102310990,local_38);
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x50);
    if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0)) {
      QWidget::close();
    }
  }
  return;
}

