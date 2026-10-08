
void FUN_1000d58a0(long *param_1,int *param_2,undefined4 param_3,QString *param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  uint in_stack_fffffffffffffe9c;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QArrayData *local_118;
  undefined1 local_110 [32];
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  int *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  ExternalRefCountData *local_58;
  AnonymousUnion0 local_50;
  QArrayData *local_48;
  QArrayData *local_40 [2];
  
  QString::operator=((QString *)(param_1 + 0x14),param_4);
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,(QStringList *)(param_1 + 2));
  if (lVar5 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_40[1]._7_1_ = 0;
      }
      uVar9 = 1;
      local_e0 = local_48;
LAB_1000d5a3e:
      QArrayData::deallocate(local_e0,uVar9,8);
    }
  }
  else {
    lVar5 = FUN_10018f120(lVar5,5,0);
    if (lVar5 != 0) {
      QMutex::lock();
      lVar6 = param_1[0xe];
      iVar3 = *(int *)(lVar6 + 8);
      if (iVar3 != *(int *)(lVar6 + 0xc)) {
        puVar8 = (undefined8 *)(lVar6 + 0x10 + (long)iVar3 * 8);
        lVar6 = (long)*(int *)(lVar6 + 0xc) * 8 + (long)iVar3 * -8;
        do {
          piVar10 = (int *)0x0;
          if (*(long *)*puVar8 != 0) {
            piVar10 = *(int **)(*(long *)*puVar8 + 0x10);
          }
          if ((param_2[1] == piVar10[1]) && (*param_2 == *piVar10)) {
            QMutex::unlock();
            if ((char)param_1[9] == '\0') {
              if (DAT_10230ffd0 < 3) goto LAB_1000d59c2;
              iVar3 = *param_2;
              iVar11 = param_2[1];
              uVar12 = 0x1676;
              goto LAB_1000d59a1;
            }
            iVar3 = FUN_1000dfea0(param_1);
            if (iVar3 != 0) {
              if (iVar3 == -2) {
                FUN_100df99c0("SGAC","prl_client_app",0,
                              "Error: helper psn={%u, %u} failed to start Vm",*param_2,param_2[1]);
                if (DAT_10230ffd0 < 3) goto LAB_1000d59c2;
                iVar3 = *param_2;
                iVar11 = param_2[1];
                uVar12 = 0x1684;
                goto LAB_1000d59a1;
              }
              QMutex::lock();
              puVar7 = (uint *)param_1[0xb];
              lVar5 = 0;
              if ((int)puVar7[3] <= (int)puVar7[2]) goto LAB_1000d611c;
              goto LAB_1000d5f31;
            }
            FUN_1000ae530(&local_e0,param_2);
            local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
            if (1 < *(int *)local_e0 + 1U) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + 1;
              local_40[1]._7_1_ = *(int *)local_e0 != 0;
              UNLOCK();
            }
            QString::fromUtf8_helper((char *)local_40,0x1db6890);
            QString::append(&local_e8);
            if (*(int *)local_40[0] != -1) {
              if (*(int *)local_40[0] != 0) {
                LOCK();
                *(int *)local_40[0] = *(int *)local_40[0] + -1;
                local_40[1]._7_1_ = *(int *)local_40[0] != 0;
                UNLOCK();
                if ((bool)local_40[1]._7_1_) goto LAB_1000d5c3f;
              }
              QArrayData::deallocate(local_40[0],2,8);
            }
LAB_1000d5c3f:
            cVar2 = QFile::exists(&local_e8);
            if (cVar2 == '\0') {
              QString::toUtf8();
              FUN_100df99c0("SGAC","prl_client_app",0,
                            "Error: pva file \"%s\" doesn\'t exists (required by running helper with psn={%u, %u})"
                            ,local_f0 + *(long *)(local_f0 + 0x10),*param_2,param_2[1]);
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_40[1]._7_1_ = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d60a9;
                }
                QArrayData::deallocate(local_f0,1,8);
              }
            }
            else {
              local_118 = (QArrayData *)local_e8.field0_0x0;
              if (1 < *(int *)local_e8.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
                local_40[1]._7_1_ = *(int *)local_e8.field0_0x0 != 0;
                UNLOCK();
              }
              FUN_100b56ca0(local_110,&local_118);
              if (*(int *)local_118 != -1) {
                if (*(int *)local_118 != 0) {
                  LOCK();
                  *(int *)local_118 = *(int *)local_118 + -1;
                  local_40[1]._7_1_ = *(int *)local_118 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d5cbb;
                }
                QArrayData::deallocate(local_118,2,8);
              }
LAB_1000d5cbb:
              local_128 = (QArrayData *)QString::fromAscii_helper("System",6);
              local_130 = (QArrayData *)QString::fromAscii_helper("APP Path",8);
              puVar1 = PTR_shared_null_1021e1288;
              local_138 = (QArrayData *)PTR_shared_null_1021e1288;
              FUN_100b57250(&local_120,local_110,&local_128,&local_130,&local_138);
              if (*(int *)local_138 != -1) {
                if (*(int *)local_138 != 0) {
                  LOCK();
                  *(int *)local_138 = *(int *)local_138 + -1;
                  local_40[1]._7_1_ = *(int *)local_138 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d5d57;
                }
                QArrayData::deallocate(local_138,2,8);
              }
LAB_1000d5d57:
              if (*(int *)local_130 != -1) {
                if (*(int *)local_130 != 0) {
                  LOCK();
                  *(int *)local_130 = *(int *)local_130 + -1;
                  local_40[1]._7_1_ = *(int *)local_130 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d5d8d;
                }
                QArrayData::deallocate(local_130,2,8);
              }
LAB_1000d5d8d:
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_40[1]._7_1_ = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d5dc3;
                }
                QArrayData::deallocate(local_128,2,8);
              }
LAB_1000d5dc3:
              FUN_1001476d0(lVar5);
              lVar5 = (**(code **)(*param_1 + 0x68))(param_1);
              if (*(char *)(lVar5 + 0xc) == '\0') {
                QString::operator=((QString *)(param_1 + 0x12),&local_120);
                *(undefined4 *)(param_1 + 0x13) = param_3;
                if (2 < DAT_10230ffd0) {
                  FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                                *param_2,param_2[1],0x16c2);
                }
                FUN_1000c6a60(param_1,param_2);
              }
              else {
                local_140 = (QArrayData *)puVar1;
                FUN_1000fce80(param_1 + 0x23,param_2,&local_140);
                FUN_1000c4970(param_2,0x8d,local_140 + *(long *)(local_140 + 0x10),
                              *(undefined4 *)(local_140 + 4));
                FUN_1000d0ea0(param_1,&local_120,param_2);
                uVar4 = (**(code **)(*param_1 + 0x68))(param_1);
                FUN_1000e9560(uVar4,&local_120,param_3);
                if (*(int *)local_140 != -1) {
                  if (*(int *)local_140 != 0) {
                    LOCK();
                    *(int *)local_140 = *(int *)local_140 + -1;
                    local_40[1]._7_1_ = *(int *)local_140 != 0;
                    UNLOCK();
                    if ((bool)local_40[1]._7_1_) goto LAB_1000d6067;
                  }
                  QArrayData::deallocate(local_140,1,8);
                }
              }
LAB_1000d6067:
              if (*(int *)local_120.field0_0x0 != -1) {
                if (*(int *)local_120.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
                  local_40[1]._7_1_ = *(int *)local_120.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_40[1]._7_1_) goto LAB_1000d609d;
                }
                QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
              }
LAB_1000d609d:
              FUN_100b57060(local_110);
            }
LAB_1000d60a9:
            if (*(int *)local_e8.field0_0x0 != -1) {
              if (*(int *)local_e8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                local_40[1]._7_1_ = *(int *)local_e8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_40[1]._7_1_) goto LAB_1000d60df;
              }
              QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
            }
LAB_1000d60df:
            if (*(int *)local_e0 == -1) {
              return;
            }
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              UNLOCK();
              if (*(int *)local_e0 != 0) {
                return;
              }
              local_40[1]._7_1_ = 0;
            }
            uVar9 = 2;
            goto LAB_1000d5a3e;
          }
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      QMutex::unlock();
      if (2 < DAT_10230ffd0) {
        iVar3 = *param_2;
        iVar11 = param_2[1];
        uVar12 = 0x166e;
LAB_1000d59a1:
        FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",iVar3,iVar11
                      ,uVar12);
      }
LAB_1000d59c2:
      FUN_1000c6a60(param_1,param_2);
      return;
    }
    iVar3 = CMessageManager::instance();
    local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
    local_58 = (ExternalRefCountData *)PTR_shared_null_1021e15e8;
    local_98 = (int *)0x0;
    uStack_90 = 0;
    local_80 = 0;
    local_88 = 0;
    local_70 = 0x80000000;
    local_78.field7 = 0;
    local_68 = 1;
    local_d8 = (int *)0x0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_b0 = 0x80000000;
    local_b8.field7 = 0;
    local_a8 = 1;
    CMessageManager::showMessageBox
              (iVar3,(QString *)0x3b31,(QStringList *)(param_1 + 2),(QStringList *)&local_50.field0,
               (CSlotInfo *)&local_58,SUB81(&local_98,0),
               (QWidget *)((ulong)in_stack_fffffffffffffe9c << 0x20),(CSlotInfo *)0x0);
    QVariant::~QVariant((QVariant *)&local_b8);
    if (local_d8 != (int *)0x0) {
      LOCK();
      *local_d8 = *local_d8 + -1;
      local_40[1]._7_1_ = *local_d8 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_d8 != (int *)0x0)) {
        operator_delete(local_d8);
      }
    }
    QVariant::~QVariant((QVariant *)&local_78);
    if (local_98 != (int *)0x0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_40[1]._7_1_ = *local_98 != 0;
      UNLOCK();
      if ((!(bool)local_40[1]._7_1_) && (local_98 != (int *)0x0)) {
        operator_delete(local_98);
      }
    }
    FUN_100039a80(&local_58);
    FUN_100039a80(&local_50);
  }
  return;
LAB_1000d5f31:
  if (1 < *puVar7) {
    FUN_1000e6e10(param_1 + 0xb,puVar7[1]);
    puVar7 = (uint *)param_1[0xb];
  }
  if ((*(int *)(*(long *)(puVar7 + (lVar5 + (int)puVar7[2]) * 2 + 4) + 0x30) == *param_2) &&
     (*(int *)(*(long *)(puVar7 + (lVar5 + (int)puVar7[2]) * 2 + 4) + 0x34) == param_2[1])) {
    if (-1 < (int)lVar5) goto LAB_1000d6162;
    goto LAB_1000d611c;
  }
  lVar5 = lVar5 + 1;
  if ((long)(int)puVar7[3] - (long)(int)puVar7[2] <= lVar5) {
LAB_1000d611c:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                    param_2[1],0x168b);
    }
    FUN_1000c6a60(param_1,param_2);
LAB_1000d6162:
    QMutex::unlock();
    return;
  }
  goto LAB_1000d5f31;
}

