
QVariant * FUN_1005939b0(QVariant *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  QKeySequence *this;
  long *in_R8;
  undefined4 local_44;
  Data *local_40 [2];
  undefined1 local_29;
  
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221bae0);
  if (lVar3 != 0) {
    lVar1 = *in_R8;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_ShowHideAppShortcut_1022744d0,0xffffffff,1);
    if (iVar2 == 0) {
      FUN_10055f450(local_40,lVar3);
      if (DAT_102274448 == 0) {
        DAT_102274448 = FUN_100597d90("CShortcutInfo",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_102274448,local_40,0);
      if (*(int *)local_40[0] == -1) {
        return param_1;
      }
      if (*(int *)local_40[0] != 0) {
        LOCK();
        *(int *)local_40[0] = *(int *)local_40[0] + -1;
        UNLOCK();
        if (*(int *)local_40[0] != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar2 = *(int *)(local_40[0] + 0xc);
      if (iVar2 != *(int *)(local_40[0] + 8)) {
        lVar3 = (long)*(int *)(local_40[0] + 8) * 8 + (long)iVar2 * -8;
        this = (QKeySequence *)(local_40[0] + (long)iVar2 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(this);
          this = this + -8;
          lVar3 = lVar3 + 8;
        } while (lVar3 != 0);
      }
      QListData::dispose(local_40[0]);
      return param_1;
    }
    lVar1 = *in_R8;
    iVar2 = QString::compare_helper
                      (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                       PTR_s_GrabHostShortcutsType_1022744c8,0xffffffff,1);
    if (iVar2 == 0) {
      local_44 = FUN_10055f420(lVar3);
      if (DAT_1022743d8 == 0) {
        DAT_1022743d8 = FUN_100598070("Shortcuts::GrabHostShortcutsType",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_1022743d8,&local_44,0);
      return param_1;
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

