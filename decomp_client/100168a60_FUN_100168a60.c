
void FUN_100168a60(undefined8 param_1,QString param_2,long param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  CSdkRequest *pCVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int local_b8;
  undefined8 local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  lVar5 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100168ad4;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100168ad4:
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: null event parameter occurred.");
    return;
  }
  plVar1 = *(long **)(param_2.field0_0x0 + 0xf8);
  local_60 = (Data *)*plVar1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar8 = (long)*(int *)(local_60 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_60 + lVar8 * 8) &&
         (lVar9 = *(int *)(local_60 + 0xc) - lVar8, lVar9 != 0 && lVar8 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar8 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  iVar3 = 0;
  uVar4 = 0;
  local_b0 = 0;
  local_b8 = 0;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    iVar3 = 0;
    uVar4 = 0;
    local_b0 = 0;
    local_b8 = 0;
    do {
      local_48 = 1;
      CVmEventParameter::getParamName();
      iVar2 = QString::compare_helper
                        (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                         "device_type",0xffffffff,1,param_6,param_2.field0_0x0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100168c57;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100168c57:
      if (iVar2 == 0) {
        CVmEventParameter::getParamValue();
        iVar3 = QString::toUInt((bool *)&local_70,0);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100168f50;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
      else {
        CVmEventParameter::getParamName();
        iVar2 = QString::compare_helper
                          (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),
                           "device_index",0xffffffff,1);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100168cc3;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_100168cc3:
        if (iVar2 == 0) {
          CVmEventParameter::getParamValue();
          uVar4 = QString::toUInt((bool *)&local_80,0);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100168f50;
            }
            QArrayData::deallocate(local_80,2,8);
          }
        }
        else {
          CVmEventParameter::getParamName();
          iVar2 = QString::compare_helper
                            (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),
                             "progress_changed",0xffffffff,1);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100168d2e;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_100168d2e:
          if (iVar2 == 0) {
            CVmEventParameter::getParamValue();
            local_b0 = QString::toUInt((bool *)&local_90,0);
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100168f50;
              }
              QArrayData::deallocate(local_90,2,8);
            }
          }
          else {
            CVmEventParameter::getParamName();
            iVar2 = QString::compare_helper
                              (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                               "command_id",0xffffffff,1);
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100168da5;
              }
              QArrayData::deallocate(local_98,2,8);
            }
LAB_100168da5:
            if (iVar2 == 0) {
              CVmEventParameter::getParamValue();
              local_b8 = QString::toUInt((bool *)&local_a0,0);
              if (*(int *)local_a0 != -1) {
                if (*(int *)local_a0 != 0) {
                  LOCK();
                  *(int *)local_a0 = *(int *)local_a0 + -1;
                  local_31 = *(int *)local_a0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100168f50;
                }
                QArrayData::deallocate(local_a0,2,8);
              }
            }
          }
        }
      }
LAB_100168f50:
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100168fa8;
    }
    QListData::dispose(local_60);
  }
LAB_100168fa8:
  CVmEventBase::getEventIssuerId();
  if (param_3 == 0) {
LAB_100169039:
    if (param_4 != 0x186d4) goto LAB_100169058;
  }
  else {
    pCVar6 = (CSdkRequest *)CSdkCommunicator::requestStorage();
    CRequestStorage::setRequestProgress(pCVar6,(uint)param_3);
    if ((param_4 == 0x186d3) && (local_b8 == 0x41f)) {
      FUN_100801000(param_1,local_b0);
    }
    if ((iVar3 != 6) && (iVar3 != 0x13)) goto LAB_100169039;
    if (param_4 != 0x186d4) {
      if (param_4 == 0x1889e) {
        FUN_100800ed0(param_1,local_b0,uVar4,iVar3);
      }
      else if (param_4 == 0x1889d) {
        FUN_100800e70(param_1,local_b0);
      }
      goto LAB_100169058;
    }
  }
  FUN_100801460(param_1,local_b0,&local_a8);
LAB_100169058:
  uVar7 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar7,&local_a8);
  if (lVar5 != 0) {
    if (param_4 < 0x1889f) {
      if (param_4 == 0x186c1) {
        FUN_1008011f0(param_1,local_b0,&local_a8);
      }
      else if (param_4 == 0x186d2) {
        FUN_1008014c0(param_1,local_b0,&local_a8);
      }
    }
    else {
      switch(param_4) {
      case 0x1889f:
        FUN_10018d420(lVar5,local_b0);
        break;
      case 0x188a0:
        FUN_10018d410(lVar5,local_b0);
        break;
      case 0x188a3:
        FUN_10018d3e0(lVar5,local_b0);
        break;
      case 0x188a4:
        FUN_10018d3f0(lVar5,local_b0);
        break;
      case 0x188a5:
        FUN_10018d400(lVar5,local_b0);
      }
    }
  }
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
  return;
}

