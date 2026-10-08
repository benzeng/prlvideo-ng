
void FUN_100622920(char param_1,QStringList *param_2,bool param_3)

{
  undefined *puVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  uint uVar9;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined1 local_60 [24];
  QArrayData *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_1021e15e8;
  local_40.field1 = (Data *)PTR_shared_null_1021e15e8;
  cVar3 = FUN_100d80630(1);
  if (cVar3 == '\0') {
    FUN_1001c74e0(&local_48);
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
  }
  if (*(int *)(local_48 + 4) == 0) {
    pQVar7 = (QArrayData *)QString::fromAscii_helper("",0);
    local_60._8_8_ = pQVar7;
    FUN_1000341d0(&local_40,local_60 + 8);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622a3c;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
  }
  else {
    QString::fromUtf8_helper(local_60 + 0x10,0x1e31adc);
    QString::append((QString *)(local_60 + 0x10));
    FUN_1000341d0(&local_40,local_60 + 0x10);
    if (*(int *)local_60._16_8_ != -1) {
      if (*(int *)local_60._16_8_ != 0) {
        LOCK();
        *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
        local_31 = *(int *)local_60._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622a3c;
      }
      QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
    }
  }
LAB_100622a3c:
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001554a0(uVar5);
  if (lVar6 == 0) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to find out product edition");
    uVar9 = 0x3b01;
  }
  else {
    uVar5 = FUN_10016f500(lVar6);
    cVar3 = FUN_10061b4d0(uVar5);
    uVar9 = 0x3b01;
    if (cVar3 != '\0') {
      uVar9 = 0x3c8c;
    }
  }
  local_60._0_8_ = puVar1;
  if (param_1 == '\0') {
    pQVar7 = (QArrayData *)QString::fromAscii_helper("",0);
    local_70 = pQVar7;
    FUN_1000341d0(local_60,&local_70);
    if (*(int *)pQVar7 != -1) {
      if (*(int *)pQVar7 != 0) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + -1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622b42;
      }
      QArrayData::deallocate(pQVar7,2,8);
    }
  }
  else {
    FUN_1001c7700(&local_68,PTR_s_You_may_need_to_restart_virtual_m_10226e1d8);
    FUN_1000341d0(local_60,&local_68);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100622b42;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100622b42:
  iVar4 = CMessageManager::instance();
  CMessageManager::showMessageBox
            (iVar4,(QWidget *)(ulong)uVar9,param_2,(QStringList *)&local_40.field0,
             (CSlotInfo *)local_60,param_3);
  uVar5 = local_60._0_8_;
  if (*(int *)local_60._0_8_ != -1) {
    if (*(int *)local_60._0_8_ != 0) {
      LOCK();
      *(int *)local_60._0_8_ = *(int *)local_60._0_8_ + -1;
      local_31 = *(int *)local_60._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100622bf1;
    }
    iVar4 = *(int *)(local_60._0_8_ + 0xc);
    if (iVar4 != *(int *)(local_60._0_8_ + 8)) {
      lVar6 = (long)*(int *)(local_60._0_8_ + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_60._0_8_ + (long)iVar4 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100622bd0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100622bd0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)uVar5);
  }
LAB_100622bf1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100622c21;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100622c21:
  AVar2 = local_40;
  if (*(int *)local_40.field1 != -1) {
    if (*(int *)local_40.field1 != 0) {
      LOCK();
      *(int *)local_40.field1 = *(int *)local_40.field1 + -1;
      UNLOCK();
      if (*(int *)local_40.field1 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar4 = *(int *)(local_40.field1 + 0xc);
    if (iVar4 != *(int *)(local_40.field1 + 8)) {
      lVar6 = (long)*(int *)(local_40.field1 + 8) * 8 + (long)iVar4 * -8;
      pDVar8 = (Data *)(local_40.field1 + (long)iVar4 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100622c90:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100622c90;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
  return;
}

