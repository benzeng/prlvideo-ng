
void FUN_1002d4700(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  QArrayData *pQVar8;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  piVar3 = (int *)*param_2;
  param_1[4] = piVar3;
  if (1 < *piVar3 + 1U) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_80.field0_0x0._0_1_ = *piVar3 != 0;
    UNLOCK();
  }
  puVar1 = param_1 + 4;
  param_1[5] = param_3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x10b) = 0xffffffff;
  puVar4 = (&PTR_s_UNK_101117020)[*(uint *)(param_3 + 0x1490)];
  QString::QString(&local_80,0x7c);
  QString::section(&local_90,param_2,&local_80,1,1,0);
  piVar3 = (int *)CONCAT71(local_80.field0_0x0._1_7_,local_80.field0_0x0._0_1_);
  if (*piVar3 != -1) {
    if (*piVar3 != 0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_31 = *piVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d47f9;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_80.field0_0x0._1_7_,local_80.field0_0x0._0_1_),2,8);
  }
LAB_1002d47f9:
  QString::toUtf8();
  pQVar8 = local_88 + *(long *)(local_88 + 0x10);
  QString::QString(&local_78,0x7c);
  QString::section(&local_a0,param_2,&local_78,2,2,0);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4870;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1002d4870:
  QString::toUtf8();
  pcVar2 = (char *)(param_1 + 0x107);
  _snprintf(pcVar2,0x14,"%s%d:%s:%s",puVar4,(ulong)param_4,pQVar8,
            local_98 + *(long *)(local_98 + 0x10));
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d48ee;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1002d48ee:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4924;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1002d4924:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4954;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1002d4954:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d498a;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1002d498a:
  *(undefined1 *)((long)param_1 + 0x84b) = 0;
  if (0 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[%s] dev create %p, path %s",pcVar2,param_1,
                  local_a8 + *(long *)(local_a8 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4a1e;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
LAB_1002d4a1e:
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmStartupOptions();
  CVmStartupOptionsBase::getExternalDeviceSystemName();
  QString::QString(&local_70,0x7c);
  QString::section(&local_b8,puVar1,&local_70,0,2,0);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4ac5;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002d4ac5:
  QString::QString(&local_68,0x7c);
  QString::section(&local_c0,&local_b0,&local_68,0,2,0);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4b25;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1002d4b25:
  cVar5 = operator==(&local_b8,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4b70;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_1002d4b70:
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_31 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4ba6;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_1002d4ba6:
  if (cVar5 == '\0') {
    QString::QString(&local_60,0x7c);
    QString::section(&local_c8,puVar1,&local_60,1,2,0);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4c3d;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1002d4c3d:
    QString::QString(&local_58,0x7c);
    QString::section(&local_d0,&local_b0,&local_58,1,2,0);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4ca0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1002d4ca0:
    cVar5 = operator==(&local_c8,&local_d0);
    if (cVar5 == '\0') {
      cVar5 = '\0';
    }
    else {
      QString::QString(&local_50,0x7c);
      QString::section(&local_d8,puVar1,&local_50,5,0xffffffff,0);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d4d1a;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1002d4d1a:
      QString::QString(&local_48,0x7c);
      QString::section(&local_e0,&local_b0,&local_48,5,0xffffffff,0);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d4d7d;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1002d4d7d:
      cVar5 = operator==(&local_d8,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d4dc9;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_1002d4dc9:
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d4e0c;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
    }
LAB_1002d4e0c:
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4e42;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1002d4e42:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_31 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4e78;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_1002d4e78:
    if (cVar5 != '\0') {
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] Mark this device as bootable by VID/PID/SN",pcVar2);
      }
      goto LAB_1002d4ea8;
    }
  }
  else {
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[%s] Mark this device as bootable by Location/VID/PID",pcVar2);
    }
LAB_1002d4ea8:
    *(undefined4 *)(param_1 + 7) = 1;
  }
  ___bzero(param_1 + 8,0x7f8);
  iVar6 = FUN_1002c6e30(puVar1);
  if (iVar6 == 0) goto LAB_1002d51f4;
  QString::QString(&local_40,0x40);
  QString::section(&local_e8,puVar1,&local_40,1,1,0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d4f2d;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002d4f2d:
  iVar6 = QString::compare_helper
                    (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"HUB",
                     0xffffffff,1);
  if (iVar6 == 0) {
    DAT_101116bca = DAT_101116b4c;
    pvVar7 = operator_new(0xf8);
    FUN_1002dadc0(pvVar7,param_1);
LAB_1002d51ba:
    param_1[2] = pvVar7;
  }
  else {
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"CCID",
                       0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0x130);
      FUN_1002f8d40(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"MOUSE",
                       0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0x58);
      FUN_1002dfc50(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),
                       "KEYBOARD",0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0x50);
      FUN_1002e05d0(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"PRINTER"
                       ,0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0xa0);
      FUN_1002e1d00(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"UVC",
                       0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0xb0);
      FUN_1002e28e0(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"BT",
                       0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0x188);
      FUN_1002ea920(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
    iVar6 = QString::compare_helper
                      (local_e8 + *(long *)(local_e8 + 0x10),*(undefined4 *)(local_e8 + 4),"MSC",
                       0xffffffff,1);
    if (iVar6 == 0) {
      pvVar7 = operator_new(0x9f0);
      FUN_1002e6310(pvVar7,param_1);
      goto LAB_1002d51ba;
    }
  }
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d51f4;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1002d51f4:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      UNLOCK();
      if (*(int *)local_b0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
  return;
}

