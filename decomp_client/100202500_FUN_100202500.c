
void FUN_100202500(QObject *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  QString local_1a0;
  QArrayData *local_198;
  CVmConfiguration local_190 [16];
  undefined1 local_180 [232];
  QArrayData *local_98;
  undefined1 local_90 [40];
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  uVar2 = FUN_100dddcf0((QWidget *)(ulong)param_2);
  uVar4 = 0;
  FUN_100df99c0("","prl_client_app",0,"Convert VM request finished with 0x%x [%s]",param_2,uVar2);
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018ff30(uVar4,0);
  if ((int)param_2 < 0) {
    if (param_2 == 0x80000275) {
                    /* WARNING: Could not recover jumptable at 0x000100202773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000275);
      return;
    }
    local_90._32_8_ =
         QString::fromAscii_helper
                   ("1onErrorMessageClosed( PRL_RESULT, Messaging::ButtonID, const QVariant& )",0x49
                   );
    QVariant::QVariant((QVariant *)(local_90 + 0x10),param_2);
    FUN_100a1c600(local_68,param_1,local_90 + 0x20,local_90 + 0x10);
    QVariant::~QVariant((QVariant *)(local_90 + 0x10));
    if (*(int *)local_90._32_8_ != -1) {
      if (*(int *)local_90._32_8_ != 0) {
        LOCK();
        *(int *)local_90._32_8_ = *(int *)local_90._32_8_ + -1;
        local_29 = *(int *)local_90._32_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002027e3;
      }
      QArrayData::deallocate((QArrayData *)local_90._32_8_,2,8);
    }
LAB_1002027e3:
    iVar1 = CMessageManager::instance();
    local_90._8_8_ = PTR_shared_null_1021e15e8;
    local_90._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar1,(QWidget *)(ulong)param_2,(QStringList *)0x0,(QStringList *)(local_90 + 8),
               (CSlotInfo *)local_90,SUB81(local_68,0));
    uVar4 = local_90._0_8_;
    if (*(int *)local_90._0_8_ != -1) {
      if (*(int *)local_90._0_8_ != 0) {
        LOCK();
        *(int *)local_90._0_8_ = *(int *)local_90._0_8_ + -1;
        local_29 = *(int *)local_90._0_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002028b1;
      }
      iVar1 = *(int *)(local_90._0_8_ + 0xc);
      if (iVar1 != *(int *)(local_90._0_8_ + 8)) {
        lVar7 = (long)*(int *)(local_90._0_8_ + 8) * 8 + (long)iVar1 * -8;
        pDVar5 = (Data *)(local_90._0_8_ + (long)iVar1 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_100202890:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_29 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_100202890;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_1002028b1:
    uVar4 = local_90._8_8_;
    if (*(int *)local_90._8_8_ != -1) {
      if (*(int *)local_90._8_8_ != 0) {
        LOCK();
        *(int *)local_90._8_8_ = *(int *)local_90._8_8_ + -1;
        local_29 = *(int *)local_90._8_8_ != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100202941;
      }
      iVar1 = *(int *)(local_90._8_8_ + 0xc);
      if (iVar1 != *(int *)(local_90._8_8_ + 8)) {
        lVar7 = (long)*(int *)(local_90._8_8_ + 8) * 8 + (long)iVar1 * -8;
        pDVar5 = (Data *)(local_90._8_8_ + (long)iVar1 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_100202920:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_29 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_29) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_100202920;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar4);
    }
LAB_100202941:
    QVariant::~QVariant(local_48);
    if (local_68[0] == (int *)0x0) {
      return;
    }
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((bool)local_29) {
      return;
    }
    if (local_68[0] == (int *)0x0) {
      return;
    }
    operator_delete(local_68[0]);
    return;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  if (((lVar7 != 0) && (*(int *)(lVar7 + 4) != 0)) && (*(long *)(param_1 + 0x30) != 0)) {
    if (DAT_1023109b0 == (void *)0x0) {
      pvVar3 = operator_new(0x20);
      FUN_100751470(pvVar3);
      DAT_102271388 = 1;
      lVar7 = *(long *)(param_1 + 0x28);
      uVar4 = 0;
      DAT_1023109b0 = pvVar3;
      if (lVar7 != 0) goto LAB_1002025cc;
    }
    else {
LAB_1002025cc:
      uVar4 = 0;
      if (*(int *)(lVar7 + 4) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x30);
      }
    }
    pvVar3 = DAT_1023109b0;
    FUN_10018d830(&local_98,uVar4);
    FUN_100754330(pvVar3,&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100202628;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_100202628:
  if (*(long *)(param_1 + 0x70) == 0) goto LAB_100202731;
  CVmConfiguration::CVmConfiguration(local_190);
  CSdkRequest::getResultAsString((int)&local_198);
  CBaseNode::fromString
            ((QTypedArrayData<unsigned_short> *)local_180,SUB81(&local_198,0),(QString *)0x0,
             (int *)0x0,(int *)0x0);
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_29 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002026a4;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_1002026a4:
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::operator=((QString *)(param_1 + 0x48),&local_1a0);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_29 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100202705;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_100202705:
  QTimer::singleShot(0,param_1,"1onCheckForVmAdded()");
  CVmConfiguration::~CVmConfiguration(local_190);
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  }
LAB_100202731:
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}

