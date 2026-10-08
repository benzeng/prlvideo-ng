
void FUN_100796920(undefined8 param_1,undefined8 param_2,QString param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  CVmEventBase::getEventIssuerId();
  lVar2 = FUN_100795470(param_1,param_2,&local_38);
  if (lVar2 != 0) {
    uVar1 = CVmEventBase::getEventType();
    switch(uVar1) {
    case 0x18bb4:
      if (*(int *)(lVar2 + 0x160) != 3) {
        FUN_10079d650(lVar2,3);
      }
      local_68[0] = 0;
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      local_70 = (QArrayData *)QString::fromAscii_helper("download_percent",0x10);
      lVar3 = CVmEvent::getEventParameter(param_3);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100796a14;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100796a14:
      if (lVar3 != 0) {
        CVmEventParameter::getParamValue();
        local_68[0] = QString::toUInt((bool *)&local_78,0);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_29 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100796a68;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_100796a68:
      local_80 = (QArrayData *)QString::fromAscii_helper("download_estimated_time",0x17);
      lVar3 = CVmEvent::getEventParameter(param_3);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100796abc;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100796abc:
      if (lVar3 != 0) {
        CVmEventParameter::getParamValue();
        uVar1 = QString::toUInt((bool *)&local_88,0);
        local_50 = CONCAT44(uVar1,(undefined4)local_50);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100796b10;
          }
          QArrayData::deallocate(local_88,2,8);
        }
      }
LAB_100796b10:
      local_90 = (QArrayData *)QString::fromAscii_helper("downloaded_bytes",0x10);
      lVar3 = CVmEvent::getEventParameter(param_3);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100796b70;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100796b70:
      if (lVar3 != 0) {
        CVmEventParameter::getParamValue();
        local_60 = QString::toLongLong((bool *)&local_98,0);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_29 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100796bd1;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
LAB_100796bd1:
      local_a0 = (QArrayData *)QString::fromAscii_helper("download_file_size",0x12);
      lVar3 = CVmEvent::getEventParameter(param_3);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_29 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100796c31;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100796c31:
      if (lVar3 != 0) {
        CVmEventParameter::getParamValue();
        local_58 = QString::toLongLong((bool *)&local_a8,0);
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_29 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100796c92;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_100796c92:
      local_b0 = (QArrayData *)QString::fromAscii_helper("download_rate",0xd);
      lVar3 = CVmEvent::getEventParameter(param_3);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_29 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100796cf2;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100796cf2:
      if (lVar3 != 0) {
        CVmEventParameter::getParamValue();
        uVar1 = QString::toInt((bool *)&local_b8,0);
        local_50 = CONCAT44(local_50._4_4_,uVar1);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_29 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100796d52;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_100796d52:
      FUN_10079d660(lVar2,local_68);
      break;
    case 0x18bb6:
      FUN_10079d650(lVar2,4);
      break;
    case 0x18bb8:
      FUN_10079d650(lVar2,5);
      break;
    case 0x18bba:
      FUN_10079d650(lVar2,9);
    }
    goto switchD_100796988_caseD_18bb5;
  }
  local_48 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: failed to find appliance with id <%s>",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100796ddf;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100796ddf:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto switchD_100796988_caseD_18bb5;
    }
    QArrayData::deallocate(local_48,2,8);
  }
switchD_100796988_caseD_18bb5:
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

