
undefined1 FUN_1003f5f90(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  QStringList *pQVar7;
  undefined1 uVar8;
  undefined1 local_e8 [24];
  QVariant local_d0;
  QArrayData *local_c0;
  int *local_b8 [4];
  QVariant local_98 [2];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  int local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  QVariant::toString();
  uVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  plVar5 = (long *)FUN_1003f8370(&local_38,uVar4);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f5ffa;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003f5ffa:
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (plVar5 == (long *)0x0) {
LAB_1003f637b:
    FUN_1003f7e20(param_1,plVar5);
  }
  else {
    (**(code **)(*plVar5 + 0xb8))(&local_50,plVar5);
    (**(code **)(*plVar5 + 0xa8))(&local_58,plVar5);
    cVar2 = FUN_1001b0280(&local_50,&local_58,&local_3c,&local_48);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f608a;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1003f608a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f60ba;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1003f60ba:
    if (cVar2 == '\0' || local_3c != 2) goto LAB_1003f637b;
    uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    FUN_100188480(&local_60,uVar4);
    cVar2 = operator==(&local_60,&local_48);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f6118;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1003f6118:
    if (cVar2 == '\0') {
      uVar4 = FUN_100152280();
      lVar6 = FUN_1001548f0(uVar4,&local_48);
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0xb8))(&local_68,plVar5);
        (**(code **)(*plVar5 + 0xa8))(&local_70,plVar5);
        FUN_1001af310(&local_68,&local_70,&local_48);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_29 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003f6427;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1003f6427:
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_29 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003f6457;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1003f6457:
        FUN_1003f7e20(param_1,plVar5);
      }
      else {
        (**(code **)(*plVar5 + 0xb8))(&local_78,plVar5);
        FUN_10018c2b0(lVar6);
        CVmConfiguration::getVmSettings();
        CVmSettings::getVmStartupOptions();
        CVmStartupOptionsBase::getExternalDeviceSystemName();
        cVar2 = FUN_1001aee90(&local_78,&local_80);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003f61b4;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1003f61b4:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_29 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1003f61e4;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1003f61e4:
        if (cVar2 != '\0') {
          local_c0 = (QArrayData *)
                     QString::fromAscii_helper
                               ("1onSameExternalDeviceUseQuestionClosed(PRL_RESULT,Messaging::ButtonID)"
                                ,0x46);
          local_d0.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
          local_d0.field0_0x0.field0_0x0.field7 = 0;
          FUN_100a1c600(local_b8,param_1,&local_c0,&local_d0);
          QVariant::~QVariant(&local_d0);
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_29 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003f6278;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1003f6278:
          iVar3 = CMessageManager::instance();
          pQVar7 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
          puVar1 = PTR_shared_null_1021e15e8;
          local_e8._16_8_ = PTR_shared_null_1021e15e8;
          FUN_10018d830(local_e8 + 8,lVar6);
          FUN_1000341d0(local_e8 + 0x10,local_e8 + 8);
          local_e8._0_8_ = puVar1;
          CMessageManager::showMessageBox
                    (iVar3,(QWidget *)0x36d7,pQVar7,(QStringList *)(local_e8 + 0x10),
                     (CSlotInfo *)local_e8,SUB81(local_b8,0));
          FUN_100039a80(local_e8);
          if (*(int *)local_e8._8_8_ != -1) {
            if (*(int *)local_e8._8_8_ != 0) {
              LOCK();
              *(int *)local_e8._8_8_ = *(int *)local_e8._8_8_ + -1;
              local_29 = *(int *)local_e8._8_8_ != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1003f6334;
            }
            QArrayData::deallocate((QArrayData *)local_e8._8_8_,2,8);
          }
LAB_1003f6334:
          FUN_100039a80(local_e8 + 0x10);
          QVariant::~QVariant(local_98);
          if (local_b8[0] != (int *)0x0) {
            LOCK();
            *local_b8[0] = *local_b8[0] + -1;
            local_29 = *local_b8[0] != 0;
            UNLOCK();
            if ((!(bool)local_29) && (local_b8[0] != (int *)0x0)) {
              operator_delete(local_b8[0]);
            }
          }
          uVar8 = 1;
          goto LAB_1003f6388;
        }
      }
    }
  }
  uVar8 = 0;
LAB_1003f6388:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar8;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar8;
}

