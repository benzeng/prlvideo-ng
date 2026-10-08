
undefined1 FUN_1000b1f80(long param_1,undefined4 *param_2,QString *param_3,QString *param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  QArrayData *pQVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 in_stack_fffffffffffffae8;
  undefined4 uVar8;
  QArrayData *local_4e8;
  QArrayData *local_4e0;
  QArrayData *local_4d8;
  QArrayData *local_4d0;
  QString local_4c8;
  QArrayData *local_4c0;
  QArrayData *local_4b8;
  undefined1 local_4a9;
  char local_4a8 [1032];
  undefined1 local_a0 [80];
  undefined1 local_50 [16];
  QString local_40;
  long local_38;
  
  uVar8 = (undefined4)((ulong)in_stack_fffffffffffffae8 >> 0x20);
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  if (2 < DAT_10230ffd0) {
    uVar8 = *param_2;
    uVar1 = param_2[1];
    QString::toUtf8();
    pQVar5 = local_4b8;
    lVar6 = *(long *)(local_4b8 + 0x10);
    QString::toUtf8();
    pQVar5 = pQVar5 + lVar6;
    FUN_100df99c0("SGAC","prl_client_app",3,
                  "ReopenApp request: psn={%u, %u}, vmUuid=\"%s\", confPath=\"%s\"",uVar8,uVar1,
                  pQVar5,local_4c0 + *(long *)(local_4c0 + 0x10));
    uVar8 = (undefined4)((ulong)pQVar5 >> 0x20);
    if (*(int *)local_4c0 != -1) {
      if (*(int *)local_4c0 != 0) {
        LOCK();
        *(int *)local_4c0 = *(int *)local_4c0 + -1;
        local_4a9 = *(int *)local_4c0 != 0;
        UNLOCK();
        if ((bool)local_4a9) goto LAB_1000b207d;
      }
      QArrayData::deallocate(local_4c0,1,8);
    }
LAB_1000b207d:
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (*(int *)local_4b8 != -1) {
      if (*(int *)local_4b8 != 0) {
        LOCK();
        *(int *)local_4b8 = *(int *)local_4b8 + -1;
        local_4a9 = *(int *)local_4b8 != 0;
        UNLOCK();
        if ((bool)local_4a9) goto LAB_1000b20c4;
      }
      QArrayData::deallocate(local_4b8,1,8);
    }
  }
LAB_1000b20c4:
  puVar3 = PTR_shared_null_1021e1288;
  local_50._8_4_ = (int)PTR_shared_null_1021e1288;
  local_50._0_8_ = PTR_shared_null_1021e1288;
  local_50._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar4 = _GetProcessBundleLocation(param_2,local_a0);
  if (iVar4 == 0) {
    iVar4 = _FSRefMakePath(local_a0,local_4a8,0x400);
    if (iVar4 == 0) {
      _strlen(local_4a8);
      QString::fromUtf8_helper((char *)&local_4d0,(int)local_4a8);
      QString::normalized(&local_4c8,&local_4d0,1,0);
      QString::operator=((QString *)local_50,&local_4c8);
      if (*(int *)local_4c8.field0_0x0 != -1) {
        if (*(int *)local_4c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_4c8.field0_0x0 = *(int *)local_4c8.field0_0x0 + -1;
          local_4a9 = *(int *)local_4c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_4a9) goto LAB_1000b2206;
        }
        QArrayData::deallocate((QArrayData *)local_4c8.field0_0x0,2,8);
      }
LAB_1000b2206:
      if (*(int *)local_4d0 != -1) {
        if (*(int *)local_4d0 != 0) {
          LOCK();
          *(int *)local_4d0 = *(int *)local_4d0 + -1;
          local_4a9 = *(int *)local_4d0 != 0;
          UNLOCK();
          if ((bool)local_4a9) goto LAB_1000b2242;
        }
        QArrayData::deallocate(local_4d0,2,8);
      }
LAB_1000b2242:
      QString::operator=((QString *)(local_50 + 8),param_3);
      QString::operator=(&local_40,param_4);
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        lVar6 = *(long *)(local_4d8 + 0x10);
        QString::toUtf8();
        lVar2 = *(long *)(local_4e0 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "ReopenApp request added: appPath=\"%s\", vmUuid=\"%s\", vmConfigPath=\"%s\"",
                      local_4d8 + lVar6,local_4e0 + lVar2,local_4e8 + *(long *)(local_4e8 + 0x10));
        if (*(int *)local_4e8 != -1) {
          if (*(int *)local_4e8 != 0) {
            LOCK();
            *(int *)local_4e8 = *(int *)local_4e8 + -1;
            local_4a9 = *(int *)local_4e8 != 0;
            UNLOCK();
            if ((bool)local_4a9) goto LAB_1000b2330;
          }
          QArrayData::deallocate(local_4e8,1,8);
        }
LAB_1000b2330:
        lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (*(int *)local_4e0 != -1) {
          if (*(int *)local_4e0 != 0) {
            LOCK();
            *(int *)local_4e0 = *(int *)local_4e0 + -1;
            local_4a9 = *(int *)local_4e0 != 0;
            UNLOCK();
            if ((bool)local_4a9) goto LAB_1000b2377;
          }
          QArrayData::deallocate(local_4e0,1,8);
        }
LAB_1000b2377:
        if (*(int *)local_4d8 != -1) {
          if (*(int *)local_4d8 != 0) {
            LOCK();
            *(int *)local_4d8 = *(int *)local_4d8 + -1;
            local_4a9 = *(int *)local_4d8 != 0;
            UNLOCK();
            if ((bool)local_4a9) goto LAB_1000b23b3;
          }
          QArrayData::deallocate(local_4d8,1,8);
        }
      }
LAB_1000b23b3:
      uVar7 = 1;
      FUN_1000b4a10(param_1 + 0x68,local_a0);
    }
    else {
      uVar7 = 0;
      FUN_100df99c0("SGAC","prl_client_app",0,"FSRefMakePath() err %i, psn={%u, %u}",iVar4,*param_2,
                    CONCAT44(uVar8,param_2[1]));
    }
  }
  else {
    uVar7 = 0;
    FUN_100df99c0("SGAC","prl_client_app",0,"GetProcessBundleLocation() err %i, psn={%u, %u}",iVar4,
                  *param_2,CONCAT44(uVar8,param_2[1]));
  }
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_4a9 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_4a9) goto LAB_1000b2406;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_1000b2406:
  FUN_1000b5720(local_a0);
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

