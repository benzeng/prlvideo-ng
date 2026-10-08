
/* WARNING: Removing unreachable block (ram,0x0001007b826f) */
/* WARNING: Removing unreachable block (ram,0x0001007b827d) */
/* WARNING: Removing unreachable block (ram,0x0001007b8289) */

void FUN_1007b7de0(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  QStringList *pQVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  QObject *pQVar11;
  int *piVar12;
  int *piVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint in_stack_fffffffffffffe0c;
  Data_conflict local_198;
  undefined4 local_190;
  undefined1 local_188;
  int *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  CSlotInfo local_138;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  int *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0 [24];
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  undefined1 local_80 [40];
  int *local_58;
  long lStack_50;
  QString local_40;
  undefined1 local_31;
  
  if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) || (param_3[1] == 0)) {
    pcVar14 = "(!)Error: CDeviceWrap is null.";
LAB_1007b8019:
    FUN_100df99c0("","prl_client_app",0,pcVar14);
    return;
  }
  lVar8 = ___dynamic_cast(param_2,&PTR_vtable_10222d910,&PTR_vtable_10222d9a0,0);
  if (lVar8 == 0) {
    pcVar14 = "(!)Error: wrong device action type";
    goto LAB_1007b8019;
  }
  uVar4 = FUN_1007b5b20(lVar8);
  FUN_1007b5af0(&local_40,lVar8);
  uVar9 = FUN_100152280();
  pQVar1 = (QStringList *)(param_1 + 0x10);
  lVar10 = FUN_1001547d0(uVar9,pQVar1);
  if (lVar10 == 0) goto LAB_1007b858a;
  uVar5 = FUN_1007b5b20(lVar8);
  piVar12 = (int *)*param_3;
  lStack_50 = param_3[1];
  if (piVar12 != (int *)0x0) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    local_31 = *piVar12 != 0;
    UNLOCK();
  }
  local_58 = piVar12;
  cVar6 = FUN_1007b65d0(param_1,uVar5,&local_58);
  if (piVar12 != (int *)0x0) {
    LOCK();
    *piVar12 = *piVar12 + -1;
    local_31 = *piVar12 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar12);
    }
  }
  if (cVar6 == '\0') goto LAB_1007b858a;
  uVar2 = *(uint *)(param_3[1] + 0x20);
  uVar3 = *(undefined4 *)(param_3[1] + 0x24);
  uVar9 = FUN_100152280();
  lVar8 = FUN_1001548f0(uVar9,pQVar1);
  if (lVar8 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get vmwrap instance.");
    goto LAB_1007b858a;
  }
  FUN_10018f2c0(&local_88,lVar8,uVar2,uVar3);
  FUN_100151850(local_80,uVar2,lVar10,uVar4,&local_88,0);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b7f81;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1007b7f81:
  if ((uVar2 == 3) || (uVar2 == 5)) {
    FUN_1001519f0(&local_90,local_80);
    QString::operator=(&local_40,&local_90);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b80e1;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
  }
  else if ((param_4 == 0) || (*(int *)(local_40.field0_0x0 + 4) == 0)) {
    FUN_10018f2c0(&local_98,lVar8,uVar2,uVar3);
    QString::operator=(&local_40,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b80e1;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
  }
LAB_1007b80e1:
  uVar15 = 8;
  if (uVar2 - 3 < 9) {
    uVar15 = *(undefined4 *)(&DAT_100e29e40 + (long)(int)(uVar2 - 3) * 4);
  }
  uVar9 = FUN_100370280();
  uVar9 = FUN_1003704b0(uVar9,pQVar1,DAT_100e152b8);
  FileUtils::browseForFile(local_b0 + 0x10,&local_40,uVar15,(uVar2 & 0xfffffffe) != 10,uVar9,1);
  if (*(int *)(local_b0._16_8_ + 4) != 0) {
    if (uVar2 == 5) {
      cVar6 = FUN_10010e760(local_b0 + 0x10);
      if (cVar6 == '\0') {
        iVar7 = CMessageManager::instance();
        local_138.field0_0x0.field0_0x0.field1_0x8 = (QObject *)PTR_shared_null_1021e15e8;
        local_138.field0_0x0.field0_0x0.field0_0x0 =
             (ExternalRefCountData *)PTR_shared_null_1021e15e8;
        local_178 = (int *)0x0;
        uStack_170 = 0;
        local_160 = 0;
        local_168 = 0;
        local_150 = 0x80000000;
        local_158.field7 = 0;
        local_148 = 1;
        local_190 = 0x80000000;
        local_198.field7 = 0;
        local_188 = 1;
        CMessageManager::showMessageBox
                  (iVar7,(QString *)0x80001001,pQVar1,
                   (QStringList *)&local_138.field0_0x0.field0_0x0.field1_0x8,&local_138,
                   SUB81(&local_178,0),(QWidget *)((ulong)in_stack_fffffffffffffe0c << 0x20),
                   (CSlotInfo *)0x0);
        QVariant::~QVariant((QVariant *)&local_198);
        QVariant::~QVariant((QVariant *)&local_158);
        if (local_178 != (int *)0x0) {
          LOCK();
          *local_178 = *local_178 + -1;
          local_31 = *local_178 != 0;
          UNLOCK();
          if ((!(bool)local_31) && (local_178 != (int *)0x0)) {
            operator_delete(local_178);
          }
        }
        FUN_100039a80(&local_138);
        FUN_100039a80(&local_138.field0_0x0.field0_0x0.field1_0x8);
      }
      else {
LAB_1007b82f7:
        if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) || (lVar10 = param_3[1], lVar10 == 0)
           ) {
          pQVar11 = (QObject *)FUN_10018f120(lVar8,uVar2,uVar3);
          piVar12 = (int *)0x0;
          if (pQVar11 != (QObject *)0x0) {
            piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
          }
          piVar13 = (int *)*param_3;
          if (piVar13 != piVar12) {
            if (piVar12 != (int *)0x0) {
              LOCK();
              *piVar12 = *piVar12 + 1;
              local_31 = *piVar12 != 0;
              UNLOCK();
              piVar13 = (int *)*param_3;
            }
            if (piVar13 != (int *)0x0) {
              LOCK();
              *piVar13 = *piVar13 + -1;
              local_31 = *piVar13 != 0;
              UNLOCK();
              if ((!(bool)local_31) && ((void *)*param_3 != (void *)0x0)) {
                operator_delete((void *)*param_3);
              }
            }
            *param_3 = (long)piVar12;
            param_3[1] = (long)pQVar11;
          }
          if (piVar12 != (int *)0x0) {
            LOCK();
            *piVar12 = *piVar12 + -1;
            local_31 = *piVar12 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar12);
            }
          }
          if (((*param_3 == 0) || (*(int *)(*param_3 + 4) == 0)) ||
             (lVar10 = param_3[1], lVar10 == 0)) goto LAB_1007b854b;
        }
        FUN_100148d00(lVar10,local_b0 + 0x10,uVar4);
        FUN_100109830(local_b0 + 0x10);
        FUN_100151c10(local_80,local_b0 + 0x10);
      }
    }
    else {
      if ((uVar2 != 3) || (cVar6 = FUN_10010e260(local_b0 + 0x10), cVar6 != '\0'))
      goto LAB_1007b82f7;
      iVar7 = CMessageManager::instance();
      local_b0._8_8_ = PTR_shared_null_1021e15e8;
      local_b0._0_8_ = PTR_shared_null_1021e15e8;
      local_e8 = (int *)0x0;
      uStack_e0 = 0;
      local_d0 = 0;
      local_d8 = 0;
      local_c0 = 0x80000000;
      local_c8.field7 = 0;
      local_b8 = 1;
      local_138.field1_0x10.field0_0x0 = (QMetaObject *)0x0;
      local_138._24_8_ = 0;
      local_138.field3_0x28 = 0;
      local_138.field2_0x1c.field0_0x0._4_8_ = 0;
      local_100 = 0x80000000;
      local_108.field7 = 0;
      local_f8 = 1;
      CMessageManager::showMessageBox
                (iVar7,(QString *)0x80000335,pQVar1,(QStringList *)(local_b0 + 8),
                 (CSlotInfo *)local_b0,SUB81(&local_e8,0),
                 (QWidget *)((ulong)in_stack_fffffffffffffe0c << 0x20),(CSlotInfo *)0x0);
      QVariant::~QVariant((QVariant *)&local_108);
      if (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0) {
        LOCK();
        *(int *)local_138.field1_0x10.field0_0x0 = *(int *)local_138.field1_0x10.field0_0x0 + -1;
        local_31 = *(int *)local_138.field1_0x10.field0_0x0 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_138.field1_0x10.field0_0x0 != (QMetaObject *)0x0)) {
          operator_delete(local_138.field1_0x10.field0_0x0);
        }
      }
      QVariant::~QVariant((QVariant *)&local_c8);
      if (local_e8 != (int *)0x0) {
        LOCK();
        *local_e8 = *local_e8 + -1;
        local_31 = *local_e8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && (local_e8 != (int *)0x0)) {
          operator_delete(local_e8);
        }
      }
      FUN_100039a80(local_b0);
      FUN_100039a80(local_b0 + 8);
    }
  }
LAB_1007b854b:
  if (*(int *)local_b0._16_8_ != -1) {
    if (*(int *)local_b0._16_8_ != 0) {
      LOCK();
      *(int *)local_b0._16_8_ = *(int *)local_b0._16_8_ + -1;
      local_31 = *(int *)local_b0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b8581;
    }
    QArrayData::deallocate((QArrayData *)local_b0._16_8_,2,8);
  }
LAB_1007b8581:
  FUN_1001519b0(local_80);
LAB_1007b858a:
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

