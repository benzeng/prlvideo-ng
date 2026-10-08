
void FUN_100168120(undefined8 param_1,QString param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmEventBase::getEventIssuerId();
  lVar4 = FUN_10015cb20(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100168181;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100168181:
  if (lVar4 == 0) {
    pcVar7 = "(!)Error:  can\'t get VM instance.";
    goto LAB_100168285;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("progress_changed",0x10);
  lVar5 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001681de;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1001681de:
  if (lVar5 == 0) {
    pcVar7 = "(!) Error: null event parameter occurred.";
LAB_100168285:
    FUN_100df99c0("","prl_client_app",0,pcVar7);
    return;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  plVar1 = *(long **)(param_2.field0_0x0 + 0xf8);
  local_70 = (Data *)*plVar1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar6 = (long)*(int *)(local_70 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_70 + lVar6 * 8) &&
         (lVar8 = *(int *)(local_70 + 0xc) - lVar6, lVar8 != 0 && lVar6 <= *(int *)(local_70 + 0xc))
         ) {
        _memcpy(local_70 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  uVar3 = 0;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    uVar3 = 0;
    do {
      local_58 = 1;
      CVmEventParameter::getParamName();
      iVar2 = QString::compare_helper
                        (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),
                         "compacted_disk_path",0xffffffff,1);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100168343;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100168343:
      if (iVar2 == 0) {
        CVmEventParameter::getParamValue();
        QString::operator=(&local_50,&local_80);
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100168470;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
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
            if ((bool)local_31) goto LAB_1001683af;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1001683af:
        if (iVar2 == 0) {
          CVmEventParameter::getParamValue();
          uVar3 = QString::toUInt((bool *)&local_90,0);
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100168470;
            }
            QArrayData::deallocate(local_90,2,8);
          }
        }
      }
LAB_100168470:
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001684ba;
    }
    QListData::dispose(local_70);
  }
LAB_1001684ba:
  FUN_10018c880(lVar4,0x30000008);
  FUN_10018ed70(lVar4,&local_50,uVar3);
  if (*(int *)local_50.field0_0x0 == -1) {
    return;
  }
  if (*(int *)local_50.field0_0x0 != 0) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_50.field0_0x0 != 0) {
      return;
    }
    local_31 = 0;
  }
  QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  return;
}

