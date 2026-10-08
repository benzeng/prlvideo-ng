
QVariant * FUN_10059e6d0(QVariant *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  CAppUpdateLogic *pCVar5;
  undefined4 *puVar6;
  undefined1 local_a1;
  QArrayData *local_a0;
  undefined1 local_91;
  QArrayData *local_90;
  undefined1 local_81;
  QArrayData *local_80;
  undefined1 local_71;
  QArrayData *local_70;
  undefined4 local_64;
  QArrayData *local_60;
  undefined1 local_51;
  QArrayData *local_50;
  undefined4 local_44;
  QArrayData *local_40;
  undefined4 local_34;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar1 = *param_3;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),"QSettings",
                     0xffffffff,1);
  if (iVar4 != 0) goto LAB_10059eb10;
  local_30 = (QArrayData *)QString::fromAscii_helper("Dock icon",9);
  cVar3 = QString::endsWith(param_4,&local_30,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10059e76a;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10059e76a:
  if (cVar3 == '\0') {
    local_40 = (QArrayData *)QString::fromAscii_helper("Check for updates",0x11);
    cVar3 = QString::endsWith(param_4,&local_40,1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_21 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10059e7d6;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10059e7d6:
    puVar2 = PTR_m_instance_1021e1340;
    if (cVar3 == '\0') {
      local_50 = (QArrayData *)QString::fromAscii_helper("Download updates automatically",0x1e);
      cVar3 = QString::endsWith(param_4,&local_50,1);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_21 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10059e874;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10059e874:
      puVar2 = PTR_m_instance_1021e1340;
      if (cVar3 != '\0') {
        if (*(long *)PTR_m_instance_1021e1340 == 0) {
          pCVar5 = operator_new(0x18);
          CAppUpdateLogic::CAppUpdateLogic(pCVar5);
          *(CAppUpdateLogic **)puVar2 = pCVar5;
          DAT_102274b28 = 1;
        }
        local_51 = CAppUpdateLogic::isDownloadInBackgroundByDefault();
        puVar6 = (undefined4 *)&local_51;
        iVar4 = 1;
        goto LAB_10059e928;
      }
      local_60 = (QArrayData *)QString::fromAscii_helper("Sidebar Placement",0x11);
      cVar3 = QString::endsWith(param_4,&local_60,1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10059e914;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10059e914:
      if (cVar3 == '\0') {
        local_70 = (QArrayData *)QString::fromAscii_helper("Show Tray Icon",0xe);
        cVar3 = QString::endsWith(param_4,&local_70,1);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10059e98f;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_10059e98f:
        if (cVar3 != '\0') {
          local_71 = 1;
          puVar6 = (undefined4 *)&local_71;
          iVar4 = 1;
          goto LAB_10059e928;
        }
        local_80 = (QArrayData *)QString::fromAscii_helper("Minimize To Systray",0x13);
        cVar3 = QString::endsWith(param_4,&local_80,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_21 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10059e9fa;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_10059e9fa:
        if (cVar3 != '\0') {
          local_81 = 0;
          puVar6 = (undefined4 *)&local_81;
          iVar4 = 1;
          goto LAB_10059e928;
        }
        local_90 = (QArrayData *)QString::fromAscii_helper("Close Windows On Quit",0x15);
        cVar3 = QString::endsWith(param_4,&local_90,1);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_21 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10059ea74;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_10059ea74:
        if (cVar3 != '\0') {
          local_91 = 0;
          puVar6 = (undefined4 *)&local_91;
          iVar4 = 1;
          goto LAB_10059e928;
        }
        local_a0 = (QArrayData *)QString::fromAscii_helper("Show Develop Menu",0x11);
        cVar3 = QString::endsWith(param_4,&local_a0,1);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_21 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10059eaf4;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_10059eaf4:
        if (cVar3 == '\0') {
LAB_10059eb10:
          (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
          (param_1->field0_0x0).field0_0x0.field7 = 0;
          return param_1;
        }
        local_a1 = 1;
        puVar6 = (undefined4 *)&local_a1;
        iVar4 = 1;
        goto LAB_10059e928;
      }
      local_64 = 0;
      puVar6 = &local_64;
    }
    else {
      if (*(long *)PTR_m_instance_1021e1340 == 0) {
        pCVar5 = operator_new(0x18);
        CAppUpdateLogic::CAppUpdateLogic(pCVar5);
        *(CAppUpdateLogic **)puVar2 = pCVar5;
        DAT_102274b28 = 1;
      }
      local_44 = CAppUpdateLogic::defaultUpdatePeriod();
      puVar6 = &local_44;
    }
  }
  else {
    local_34 = 0;
    puVar6 = &local_34;
  }
  iVar4 = 2;
LAB_10059e928:
  QVariant::QVariant(param_1,iVar4,puVar6,0);
  return param_1;
}

