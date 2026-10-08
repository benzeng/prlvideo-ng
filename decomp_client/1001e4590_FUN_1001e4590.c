
undefined8 FUN_1001e4590(undefined8 param_1)

{
  int iVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  long lVar6;
  Data *pDVar7;
  undefined8 uVar8;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  AnonymousUnion0 local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100d92580(&local_40);
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",2,"Check is bundle initialiation required.");
  }
  local_48.field1 = (Data *)PTR_shared_null_1021e15e8;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("check",5);
  local_50 = pQVar4;
  FUN_1000341d0(&local_48,&local_50);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("-b",2);
  local_58 = pQVar5;
  FUN_1000341d0(&local_48,&local_58);
  MacUtils::getBundlePath();
  FUN_1000341d0(&local_48,&local_60);
  iVar3 = QProcess::execute(&local_40,(QStringList *)&local_48.field0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e4687;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1001e4687:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e46b2;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001e46b2:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e46df;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1001e46df:
  AVar2 = local_48;
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_31 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001e4798;
    }
    iVar1 = *(int *)(local_48.field1 + 0xc);
    if (iVar1 != *(int *)(local_48.field1 + 8)) {
      lVar6 = (long)*(int *)(local_48.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = (Data *)(local_48.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar4 == 0) {
LAB_1001e4770:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar4 = *(QArrayData **)pDVar7;
            goto LAB_1001e4770;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar2.field1);
  }
LAB_1001e4798:
  if (iVar3 < 0xb) {
    if (iVar3 < 0) {
      if (iVar3 == -2) {
        QString::toUtf8();
        FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                      "Failed to start check bundle initialization command [%s]",
                      local_68 + *(long *)(local_68 + 0x10));
        uVar8 = 0x80015367;
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001e4922;
          }
          QArrayData::deallocate(local_68,1,8);
        }
        goto LAB_1001e4922;
      }
      if (iVar3 == -1) {
        uVar8 = 0x80015368;
        FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                      "Failed to check whether bundle initialization is required. The process has been aborted unexpectedly."
                     );
        goto LAB_1001e4922;
      }
    }
    else {
      if (iVar3 == 0) {
        uVar8 = 0;
        if (1 < DAT_10230ffd0) {
          uVar8 = 0;
          FUN_100df99c0("[INIT_THREAD]","prl_client_app",2,"Bundle initialiation is NOT required.");
        }
        goto LAB_1001e4922;
      }
      if (iVar3 == 8) {
        uVar8 = 0x80015477;
        FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                      "Can\'t run on this system. Exit code is %d",8);
        goto LAB_1001e4922;
      }
    }
  }
  else if (iVar3 == 0xb) {
    uVar8 = 0x80015487;
    FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                  "Need restart Mac to continue the installation. Exit code is %d",0xb);
    goto LAB_1001e4922;
  }
  uVar8 = 0x80015366;
  FUN_100df99c0("[INIT_THREAD]","prl_client_app",0,
                "Bundle initialization is required. Exit code is %d",iVar3);
LAB_1001e4922:
  FUN_1001e50a0(param_1,7,uVar8);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar8;
}

