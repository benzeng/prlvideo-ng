
undefined8 FUN_1002fa090(undefined8 *param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  char cVar3;
  int iVar4;
  QArrayData *pQVar5;
  Data *pDVar6;
  undefined8 uVar7;
  long lVar8;
  QArrayData *local_58;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_29 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  cVar3 = FUN_1001247f0(&local_38);
  if (cVar3 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Failed to start command [%s].",
                  local_40 + *(long *)(local_40 + 0x10));
    uVar7 = 0x80015431;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002fa37c;
      }
      QArrayData::deallocate(local_40,1,8);
    }
    goto LAB_1002fa37c;
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("check_prev_installation",0x17);
  local_50 = pQVar5;
  FUN_1000341d0(&local_48,&local_50);
  iVar4 = QProcess::execute(&local_38,(QStringList *)&local_48.field0);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fa133;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1002fa133:
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002fa1c1;
    }
    iVar1 = *(int *)(local_48.field1 + 0xc);
    if (iVar1 != *(int *)(local_48.field1 + 8)) {
      lVar8 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = (Data *)(local_48.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar5 == 0) {
LAB_1002fa1a0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar6;
            goto LAB_1002fa1a0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1002fa1c1:
  if (iVar4 < 0) {
    if (iVar4 == -2) {
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",0,"Failed to start check_prev_installation command [%s]",
                    local_58 + *(long *)(local_58 + 0x10));
      uVar7 = 0x80015367;
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002fa37c;
        }
        QArrayData::deallocate(local_58,1,8);
      }
      goto LAB_1002fa37c;
    }
    if (iVar4 == -1) {
      uVar7 = 0x80015368;
      FUN_100df99c0("","prl_client_app",0,
                    "Failed to check_prev_installation. The process has been aborted unexpectedly.")
      ;
      goto LAB_1002fa37c;
    }
  }
  else {
    if (iVar4 == 0) {
      uVar7 = 0;
      if (1 < DAT_10230ffd0) {
        uVar7 = 0;
        FUN_100df99c0("","prl_client_app",2,"No need to ask user for remove previous version.");
      }
      goto LAB_1002fa37c;
    }
    if (iVar4 == 8) {
      uVar7 = 0x80015477;
      FUN_100df99c0("","prl_client_app",0,"Can\'t run on this system. Exit code is %d",8);
      goto LAB_1002fa37c;
    }
  }
  uVar7 = 0x3c1a;
  FUN_100df99c0("","prl_client_app",0,
                "Need to ask user for remove previous version. Exit code is %d",iVar4);
LAB_1002fa37c:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return uVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return uVar7;
}

