
void FUN_1001a9c70(long param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [24];
  QVariant local_b0;
  QString local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  plVar1 = *(long **)(param_1 + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x90);
  local_80 = 0xffffffff;
  local_7c = 0xffffffff;
  local_70 = 0;
  local_78 = 0;
  (**(code **)(*plVar1 + 0x60))(local_68,plVar1,0,0,&local_80);
  (*pcVar2)(&local_50,plVar1,local_68,0x101);
  iVar3 = QVariant::toInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  iVar8 = 0;
  do {
    local_98 = 0xffffffff;
    local_94 = 0xffffffff;
    local_88 = 0;
    local_90 = 0;
    iVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x78))(*(long **)(param_1 + 0x28),&local_98);
    if (iVar4 <= iVar8) {
      if ((iVar3 == 2) && (*(int *)(local_40.field0_0x0 + 4) != 0)) {
        FUN_10038aad0(*(undefined8 *)(param_1 + 0x28),&local_40);
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
    plVar1 = *(long **)(param_1 + 0x28);
    pcVar2 = *(code **)(*plVar1 + 0x90);
    local_e0 = 0xffffffff;
    local_dc = 0xffffffff;
    local_d0 = 0;
    local_d8 = 0;
    (**(code **)(*plVar1 + 0x60))(local_c8,plVar1,iVar8,0,&local_e0);
    (*pcVar2)(&local_b0,plVar1,local_c8);
    QVariant::toString();
    QVariant::~QVariant(&local_b0);
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar6 = FUN_10015d330(uVar7,iVar8);
    if (lVar6 != 0) {
      iVar4 = QString::compare_helper
                        ((QArrayData *)(local_a0.field0_0x0 + *(long *)(local_a0.field0_0x0 + 0x10))
                         ,*(undefined4 *)(local_a0.field0_0x0 + 4),"host",0xffffffff,1);
      uVar5 = FUN_10018f860(lVar6);
      iVar4 = FUN_1001a9b60(param_1,iVar4 == 0,uVar5);
      if ((iVar3 == 2) && (iVar4 == 1)) {
        QString::operator=(&local_40,&local_a0);
      }
      FUN_10038a8f0(*(undefined8 *)(param_1 + 0x28),&local_a0,iVar4);
    }
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_31 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001a9d20;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
LAB_1001a9d20:
    iVar8 = iVar8 + 1;
  } while( true );
}

