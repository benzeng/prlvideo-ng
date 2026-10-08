
void FUN_1004227c0(QStringList *param_1,uint param_2,undefined8 param_3)

{
  ExternalRefCountData *pEVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  Data *pDVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  int iVar10;
  long lVar11;
  AnonymousUnion0 AVar12;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  CSlotInfo local_98;
  Data_conflict local_68;
  undefined4 local_60;
  undefined1 local_58;
  Data *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  if (((param_1[0xd].field0_0x0.field1 == (Data *)0x0) ||
      (*(int *)((long)param_1[0xd].field0_0x0.field1 + 4) == 0)) ||
     (param_1[0xe].field0_0x0.field1 == (Data *)0x0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
    return;
  }
  iVar6 = param_2 + 1;
  if (2 < param_2) {
    iVar6 = 0;
  }
  iVar10 = (uint)param_3 + 1;
  if (2 < (uint)param_3) {
    iVar10 = 0;
  }
  if (iVar6 != 3) {
LAB_1004228a1:
    FUN_100422230(param_1,iVar6);
    FUN_100424970(param_1,iVar6,iVar10);
    FUN_100421800(param_1);
    if (iVar6 != iVar10) {
      if (iVar6 == 3) {
        FUN_100423860(param_1,iVar10);
        return;
      }
      if (iVar6 == 2) {
        FUN_1004236a0(param_1);
        return;
      }
      if (iVar6 == 1) {
        FUN_100422590(param_1);
        return;
      }
    }
    return;
  }
  iVar2 = FUN_10011d6b0(param_1[0x11].field0_0x0.field1);
  uVar5 = CVmConfiguration::getVmHardwareList();
  iVar3 = FUN_100117d40(uVar5,iVar2,6);
  iVar4 = CVmClusteredDevice::getInterfaceType();
  if ((iVar3 != -1) || (iVar4 == iVar2)) goto LAB_1004228a1;
  if (iVar2 == 0) {
    iVar6 = CMessageManager::instance();
    local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_48 = (Data *)PTR_shared_null_1021e15e8;
    local_98.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
    local_98._24_8_ = 0;
    local_98.field3_0x28 = 0;
    local_98.field2_0x1c.field0_0x0._4_8_ = 0;
    local_60 = 0x80000000;
    local_68.field7 = 0;
    local_58 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)0x80015164,param_1,(QStringList *)&local_40.field0,
               (CSlotInfo *)&local_48,(bool)((char)&local_98 + '\x10'));
    QVariant::~QVariant((QVariant *)&local_68);
    if (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
      LOCK();
      *(int *)local_98.field1_0x10.field0_0x0 = *(int *)local_98.field1_0x10.field0_0x0 + -1;
      local_31 = *(int *)local_98.field1_0x10.field0_0x0 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_98.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
        operator_delete(local_98.field1_0x10.field0_0x0);
      }
    }
    pDVar8 = local_48;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100422a6e;
      }
      iVar6 = *(int *)(local_48 + 0xc);
      if (iVar6 != *(int *)(local_48 + 8)) {
        lVar11 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar6 * -8;
        pDVar7 = local_48 + (long)iVar6 * 8 + 8;
        do {
          pQVar9 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar9 == 0) {
LAB_100422a4d:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar7;
              goto LAB_100422a4d;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose(pDVar8);
    }
LAB_100422a6e:
    AVar12 = local_40;
    if (*(int *)local_40.field1 == -1) goto LAB_100422cca;
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      local_31 = *(int *)local_40.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100422cca;
    }
    iVar6 = *(int *)(local_40.field1 + 0xc);
    if (iVar6 != *(int *)(local_40.field1 + 8)) {
      lVar11 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar6 * -8;
      pDVar8 = (Data *)(local_40.field1 + (long)iVar6 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100422add:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100422add;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
  }
  else {
    uVar5 = CVmConfiguration::getVmHardwareList();
    iVar2 = FUN_100117d40(uVar5,0,6);
    if (iVar2 != -1) goto LAB_1004228a1;
    iVar6 = CMessageManager::instance();
    local_98.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
    local_98.field0_0x0.field0_0x0.field0_0x0 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar6,(QWidget *)0x80015163,param_1,
               (QStringList *)&local_98.field0_0x0.field0_0x0.field1_0x8,&local_98,
               SUB81(&local_d8,0));
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_31 = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    pEVar1 = local_98.field0_0x0.field0_0x0.field0_0x0;
    if (*(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 =
             *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0.field0_0x0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100422c40;
      }
      iVar6 = *(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 0xc);
      if (iVar6 != *(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 8)) {
        lVar11 = (long)*(int *)(local_98.field0_0x0.field0_0x0.field0_0x0 + 8) * 8 +
                 (long)iVar6 * -8;
        pDVar8 = (Data *)(local_98.field0_0x0.field0_0x0.field0_0x0 + (long)iVar6 * 8 + 8);
        do {
          pQVar9 = *(QArrayData **)pDVar8;
          if (*(int *)pQVar9 == 0) {
LAB_100422c1f:
            QArrayData::deallocate(pQVar9,2,8);
          }
          else if (*(int *)pQVar9 != -1) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar9 = *(QArrayData **)pDVar8;
              goto LAB_100422c1f;
            }
          }
          pDVar8 = pDVar8 + -8;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)pEVar1);
    }
LAB_100422c40:
    AVar12 = (AnonymousUnion0)local_98.field0_0x0.field0_0x0.field1_0x8;
    if (*(int *)local_98.field0_0x0.field0_0x0.field1_0x8 == -1) goto LAB_100422cca;
    if (*(int *)local_98.field0_0x0.field0_0x0.field1_0x8 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0.field0_0x0.field1_0x8 =
           *(int *)local_98.field0_0x0.field0_0x0.field1_0x8 + -1;
      local_31 = *(int *)local_98.field0_0x0.field0_0x0.field1_0x8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100422cca;
    }
    iVar6 = *(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 0xc);
    if (iVar6 != *(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 8)) {
      lVar11 = (long)*(int *)(local_98.field0_0x0.field0_0x0.field1_0x8 + 8) * 8 + (long)iVar6 * -8;
      pDVar8 = (Data *)(local_98.field0_0x0.field0_0x0.field1_0x8 + (long)iVar6 * 8 + 8);
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_100422ca9:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_100422ca9;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
  }
  QListData::dispose((Data *)AVar12.field1);
LAB_100422cca:
  FUN_1001326a0(*(undefined8 *)((long)param_1[0xc].field0_0x0.field1 + 0x28),param_3);
  return;
}

