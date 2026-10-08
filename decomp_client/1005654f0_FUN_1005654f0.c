
void FUN_1005654f0(long param_1,int param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  QKeySequence *this;
  long lVar8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  Data *local_88 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  ulong local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  QObject::sender();
  lVar5 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221cc70);
  if (param_2 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x20);
  uVar3 = FUN_1005873f0(lVar5);
  FUN_1005871a0(local_88,lVar5);
  FUN_100561d90(plVar1,uVar3,local_88);
  if (*(int *)local_88[0] != -1) {
    if (*(int *)local_88[0] != 0) {
      LOCK();
      *(int *)local_88[0] = *(int *)local_88[0] + -1;
      UNLOCK();
      local_48 = CONCAT31(local_48._1_3_,*(int *)local_88[0] != 0);
      if (*(int *)local_88[0] != 0) goto LAB_1005655ca;
    }
    iVar7 = *(int *)(local_88[0] + 0xc);
    if (iVar7 != *(int *)(local_88[0] + 8)) {
      lVar8 = (long)*(int *)(local_88[0] + 8) * 8 + (long)iVar7 * -8;
      this = (QKeySequence *)(local_88[0] + (long)iVar7 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(local_88[0]);
  }
LAB_1005655ca:
  plVar6 = (long *)QAbstractItemView::selectionModel();
  pcVar2 = *(code **)(*plVar6 + 0x60);
  uVar4 = FUN_1005873f0(lVar5);
  if (0 < *(int *)(*(long *)(param_1 + 0x30) + 0x14)) {
    iVar7 = 0;
    do {
      local_48 = 0xffffffff;
      local_44 = 0xffffffff;
      local_38 = 0;
      local_40 = 0;
      (**(code **)(*plVar1 + 0x60))(local_60,plVar1,iVar7,0,&local_48);
      if (local_58 == uVar4) {
        local_78 = 0xffffffff;
        local_74 = 0xffffffff;
        local_68 = 0;
        local_70 = 0;
        (**(code **)(*plVar1 + 0x60))(&local_a0,plVar1,iVar7,0,&local_78);
        goto LAB_1005656be;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  local_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_90 = 0;
  local_98 = 0;
LAB_1005656be:
  (*pcVar2)(plVar6,&local_a0,0x22);
  FUN_10083d6e0(*(undefined8 *)(param_1 + 0x10));
  return;
}

