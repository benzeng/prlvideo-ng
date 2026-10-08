
/* WARNING: Removing unreachable block (ram,0x000100213478) */
/* WARNING: Removing unreachable block (ram,0x000100213486) */
/* WARNING: Removing unreachable block (ram,0x000100213492) */

void FUN_100213010(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  uint in_stack_fffffffffffffefc;
  Data_conflict local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  Data_conflict local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  int *local_98 [4];
  QVariant local_78 [2];
  undefined1 local_60 [24];
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar5 = (**(code **)(*param_1 + 0x90))();
  if ((((iVar5 < 0) || (param_1[3] == 0)) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0))
  {
LAB_10021319f:
                    /* WARNING: Could not recover jumptable at 0x0001002131c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  lVar7 = QObject::sender();
  if ((lVar7 == 0) ||
     (lVar7 = ___dynamic_cast(lVar7,PTR_typeinfo_1021e1720,PTR_typeinfo_1021e1640,0), lVar7 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get request object to obtain hdd info.");
    goto LAB_10021319f;
  }
  CSdkRequest::getResultAsString((int)&local_38);
  if ((param_2 < 0) || (*(int *)(local_38 + 4) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get hard disk image info.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_100213287;
  }
  cVar4 = FUN_100126890(param_1 + 9,&local_38);
  if (cVar4 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to load device XML.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_100213287;
  }
  iVar5 = CVmDevice::getIndex();
  iVar6 = CVmDevice::getIndex();
  if (iVar5 != iVar6) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong hard disk info index.");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    goto LAB_100213287;
  }
  iVar5 = CVmDevice::getEmulatedType();
  if (iVar5 == 1) {
    iVar5 = CVmHardDisk::getVersion();
    if ((iVar5 == 1) && ((char)param_1[0x34] == '\0')) {
      CAbstractTask::clearSubTaskList();
      CAbstractTask::appendSubTask((int)param_1);
    }
    else {
      iVar5 = CVmHardDisk::getVersion();
      if (iVar5 == 3) {
        lVar7 = 0;
        if ((param_1[5] != 0) && (lVar7 = 0, *(int *)(param_1[5] + 4) != 0)) {
          lVar7 = param_1[6];
        }
        iVar5 = FUN_10018a9d0(lVar7);
        puVar1 = PTR_shared_null_1021e15e8;
        if ((iVar5 == 0x30000009) && ((char)param_1[0x34] == '\0')) {
          local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
          CVmDevice::getSystemName();
          FUN_1000341d0(&local_40,&local_48);
          iVar5 = CVmDevice::getIndex();
          QString::number((int)local_60 + 0x10,iVar5);
          FUN_1000341d0(&local_40,local_60 + 0x10);
          if (*(int *)local_60._16_8_ != -1) {
            if (*(int *)local_60._16_8_ != 0) {
              LOCK();
              *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
              local_29 = *(int *)local_60._16_8_ != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100213340;
            }
            QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
          }
LAB_100213340:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_29 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100213370;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_100213370:
          iVar5 = CMessageManager::instance();
          lVar7 = 0;
          if ((param_1[5] != 0) && (lVar7 = 0, *(int *)(param_1[5] + 4) != 0)) {
            lVar7 = param_1[6];
          }
          FUN_100188480(local_60 + 8,lVar7);
          local_60._0_8_ = puVar1;
          local_a0 = (QArrayData *)
                     QString::fromAscii_helper
                               ("1onGuestSuspendedMessageAnswered(PRL_RESULT, Messaging::ButtonID)",
                                0x41);
          local_a8 = 0x80000000;
          local_b0.field7 = 0;
          FUN_100a1c600(local_98,param_1,&local_a0,&local_b0);
          local_c0 = 0x80000000;
          local_c8.field7 = 0;
          local_b8 = 1;
          CMessageManager::showMessageBox
                    (iVar5,(QString *)0x3ad2,(QStringList *)(local_60 + 8),
                     (QStringList *)&local_40.field0,(CSlotInfo *)local_60,SUB81(local_98,0),
                     (QWidget *)((ulong)in_stack_fffffffffffffefc << 0x20),(CSlotInfo *)0x0);
          QVariant::~QVariant((QVariant *)&local_c8);
          QVariant::~QVariant(local_78);
          if (local_98[0] != (int *)0x0) {
            LOCK();
            *local_98[0] = *local_98[0] + -1;
            local_29 = *local_98[0] != 0;
            UNLOCK();
            if ((!(bool)local_29) && (local_98[0] != (int *)0x0)) {
              operator_delete(local_98[0]);
            }
          }
          QVariant::~QVariant((QVariant *)&local_b0);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_29 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_10021350d;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_10021350d:
          uVar2 = local_60._0_8_;
          if (*(int *)local_60._0_8_ != -1) {
            if (*(int *)local_60._0_8_ != 0) {
              LOCK();
              *(int *)local_60._0_8_ = *(int *)local_60._0_8_ + -1;
              local_29 = *(int *)local_60._0_8_ != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100213591;
            }
            iVar5 = *(int *)(local_60._0_8_ + 0xc);
            if (iVar5 != *(int *)(local_60._0_8_ + 8)) {
              lVar7 = (long)*(int *)(local_60._0_8_ + 8) * 8 + (long)iVar5 * -8;
              pDVar8 = (Data *)(local_60._0_8_ + (long)iVar5 * 8 + 8);
              do {
                pQVar9 = *(QArrayData **)pDVar8;
                if (*(int *)pQVar9 == 0) {
LAB_100213570:
                  QArrayData::deallocate(pQVar9,2,8);
                }
                else if (*(int *)pQVar9 != -1) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_29 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if (!(bool)local_29) {
                    pQVar9 = *(QArrayData **)pDVar8;
                    goto LAB_100213570;
                  }
                }
                pDVar8 = pDVar8 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose((Data *)uVar2);
          }
LAB_100213591:
          if (*(int *)local_60._8_8_ != -1) {
            if (*(int *)local_60._8_8_ != 0) {
              LOCK();
              *(int *)local_60._8_8_ = *(int *)local_60._8_8_ + -1;
              local_29 = *(int *)local_60._8_8_ != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1002135c1;
            }
            QArrayData::deallocate((QArrayData *)local_60._8_8_,2,8);
          }
LAB_1002135c1:
          AVar3 = local_40;
          if (*(int *)local_40.field1 != -1) {
            if (*(int *)local_40.field1 != 0) {
              LOCK();
              *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
              local_29 = *(int *)local_40.field1 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100213287;
            }
            iVar5 = *(int *)(local_40.field1 + 0xc);
            if (iVar5 != *(int *)(local_40.field1 + 8)) {
              lVar7 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar5 * -8;
              pDVar8 = (Data *)(local_40.field1 + (long)iVar5 * 8 + 8);
              do {
                pQVar9 = *(QArrayData **)pDVar8;
                if (*(int *)pQVar9 == 0) {
LAB_10021362c:
                  QArrayData::deallocate(pQVar9,2,8);
                }
                else if (*(int *)pQVar9 != -1) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_29 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if (!(bool)local_29) {
                    pQVar9 = *(QArrayData **)pDVar8;
                    goto LAB_10021362c;
                  }
                }
                pDVar8 = pDVar8 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose((Data *)AVar3.field1);
          }
          goto LAB_100213287;
        }
      }
      FUN_100212f40(param_1);
    }
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
LAB_100213287:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

