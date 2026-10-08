
/* WARNING: Removing unreachable block (ram,0x000100b3a699) */

undefined1
FUN_100b3a170(undefined4 *param_1,undefined4 param_2,long *param_3,long param_4,long param_5,
             uint param_6,int param_7)

{
  long *plVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined1 uVar14;
  uint *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *local_d8;
  long lStack_c0;
  long lStack_b0;
  long *local_70;
  undefined1 local_68 [8];
  uint *local_60;
  QString local_58;
  QString local_50;
  long *local_48;
  uint *local_40;
  undefined1 local_31;
  
  cVar7 = (**(code **)(*param_3 + 0x88))(param_3,param_4);
  if (cVar7 == '\0') {
    return 0;
  }
  FUN_100b365a0(param_1);
  *param_1 = param_2;
  if (param_5 == 0) {
    param_5 = (**(code **)(*param_3 + 0x80))();
    param_5 = param_5 - param_4;
  }
  pvVar10 = _malloc((ulong)param_6);
  plVar11 = operator_new(0x20);
  *(undefined4 *)(plVar11 + 1) = 1;
  plVar11[2] = (long)pvVar10;
  *plVar11 = (long)&PTR_FUN_1022cf2a0;
  plVar11[3] = (long)PTR__free_1021e18a0;
  if (pvVar10 == (void *)0x0) {
    FUN_100df99c0("","KeyValueDataParser",0,"Error: allocation problems");
    uVar14 = 0;
  }
  else {
    FUN_100b3c730(&local_40,param_1 + 4);
    puVar6 = PTR_shared_null_1021e15e8;
    puVar5 = PTR_shared_null_1021e1288;
    local_48 = (long *)0x0;
    local_70 = (long *)0x0;
    auVar17._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar17._0_8_ = PTR_shared_null_1021e1288;
    auVar17._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    auVar18._8_4_ = (int)PTR_shared_null_1021e15e8;
    auVar18._0_8_ = PTR_shared_null_1021e15e8;
    auVar18._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
    local_d8 = (long *)0x0;
    puVar16 = PTR_shared_null_1021e15e8;
    do {
      if (param_5 == 0) {
        uVar14 = 1;
        goto LAB_100b3a6a9;
      }
      if (param_7 == 0) {
        uVar14 = 1;
        goto LAB_100b3a6a9;
      }
      if (local_40[3] == local_40[2]) {
        if (local_70 == (long *)0x0) {
          uVar14 = 1;
          goto LAB_100b3a6a9;
        }
        if (local_70[2] == 0) {
          uVar14 = 1;
          goto LAB_100b3a6a9;
        }
      }
      lVar12 = QIODevice::readLine((char *)param_3,plVar11[2]);
      if (lVar12 < 0) goto LAB_100b3a666;
      pcVar2 = (char *)plVar11[2];
      if (((int)lVar12 == -1) && (pcVar2 != (char *)0x0)) {
        _strlen(pcVar2);
      }
      QString::fromUtf8_helper((char *)&local_50,(int)pcVar2);
      iVar8 = QString::indexOf(&local_50,0,0,1);
      if (iVar8 != -1) {
        QString::left((int)&local_58);
        QString::operator=(&local_50,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b3a39a;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
      }
LAB_100b3a39a:
      iVar8 = 5;
      if (*(int *)(local_50.field0_0x0 + 4) != 0) {
        plVar13 = operator_new(0x68,(nothrow_t *)PTR_nothrow_1021e1620);
        iVar8 = 1;
        if (plVar13 != (long *)0x0) {
          lStack_b0 = auVar17._8_8_;
          plVar13[2] = (long)puVar5;
          plVar13[3] = lStack_b0;
          plVar13[4] = (long)puVar16;
          QRegExp::QRegExp((QRegExp *)(plVar13 + 5));
          *(undefined4 *)(plVar13 + 6) = 0;
          plVar13[7] = (long)puVar16;
          plVar13[8] = (long)PTR_shared_null_1021e1288;
          *(undefined4 *)(plVar13 + 9) = 0;
          lStack_c0 = auVar18._8_8_;
          plVar13[10] = (long)puVar6;
          plVar13[0xb] = lStack_c0;
          plVar13[0xc] = 0;
          QString::operator=((QString *)(plVar13 + 2),&local_50);
          puVar3 = *(undefined8 **)(param_1 + 8);
          *(long **)(param_1 + 8) = plVar13;
          *plVar13 = (long)(param_1 + 6);
          plVar13[1] = (long)puVar3;
          *puVar3 = plVar13;
          iVar9 = QString::compare_helper
                            ((QArrayData *)
                             (local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                             *(undefined4 *)(local_50.field0_0x0 + 4),"\n",0xffffffff,1);
          iVar8 = 4;
          if ((iVar9 != 0) && (cVar7 = FUN_100b3a920(), cVar7 == '\0')) {
            local_48 = (long *)0x0;
            if (local_d8 != (long *)0x0) {
              LOCK();
              plVar1 = local_d8 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)(*local_d8 + 0x10))();
              }
            }
            if (1 < *local_40) {
              FUN_100b3c7d0(&local_40,local_40[1]);
            }
            puVar15 = local_40 + (long)(int)local_40[2] * 2 + 4;
            while( true ) {
              if (1 < *local_40) {
                FUN_100b3c7d0(&local_40,local_40[1]);
              }
              if (puVar15 == local_40 + (long)(int)local_40[3] * 2 + 4) {
                local_70 = (long *)0x0;
                local_d8 = (long *)0x0;
                puVar16 = PTR_shared_null_1021e15e8;
                goto LAB_100b3a610;
              }
              puVar3 = *(undefined8 **)puVar15;
              cVar7 = QRegExp::isEmpty();
              if (((cVar7 != '\0') && (cVar7 = FUN_100b3a920(), cVar7 != '\0')) ||
                 ((cVar7 = QRegExp::isEmpty(), cVar7 == '\0' &&
                  (cVar7 = FUN_100b3aa60(param_1,puVar3,plVar13), cVar7 != '\0')))) break;
              puVar15 = puVar15 + 2;
            }
            local_d8 = (long *)*puVar3;
            if (local_d8 != (long *)0x0) {
              LOCK();
              *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
              UNLOCK();
            }
            local_60 = puVar15;
            local_48 = local_d8;
            FUN_100b3ba20(local_68,&local_40,&local_60);
            puVar16 = PTR_shared_null_1021e15e8;
            local_70 = local_d8;
          }
        }
      }
LAB_100b3a610:
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b3a64b;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100b3a64b:
      param_7 = param_7 + -1;
      param_5 = param_5 - lVar12;
    } while (iVar8 == 4);
    uVar14 = 1;
    if (iVar8 != 5) {
LAB_100b3a666:
      uVar14 = 0;
    }
LAB_100b3a6a9:
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar13 = local_70 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
    if (*local_40 != 0xffffffff) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 - 1;
        local_31 = *local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b3a6f5;
      }
      FUN_100b3be40(&local_40,local_40);
    }
  }
LAB_100b3a6f5:
  LOCK();
  plVar13 = plVar11 + 1;
  lVar12 = *plVar13;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)lVar12 == 1) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return uVar14;
}

