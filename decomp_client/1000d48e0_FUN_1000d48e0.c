
void FUN_1000d48e0(long *param_1,int *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  QArrayData *pQVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined4 uVar15;
  AnonymousUnion0 local_100;
  QArrayData *local_f8;
  undefined *local_f0;
  QString local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  QArrayData *local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  QMutex::lock();
  lVar11 = param_1[0xe];
  iVar5 = *(int *)(lVar11 + 8);
  if (iVar5 != *(int *)(lVar11 + 0xc)) {
    puVar10 = (undefined8 *)(lVar11 + 0x10 + (long)iVar5 * 8);
    lVar11 = (long)*(int *)(lVar11 + 0xc) * 8 + (long)iVar5 * -8;
    do {
      piVar13 = (int *)0x0;
      if (*(long *)*puVar10 != 0) {
        piVar13 = *(int **)(*(long *)*puVar10 + 0x10);
      }
      if ((param_2[1] == piVar13[1]) && (*param_2 == *piVar13)) {
        QMutex::unlock();
        goto LAB_1000d49c9;
      }
      puVar10 = puVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  QMutex::unlock();
  iVar5 = param_2[1];
  if ((iVar5 == *(int *)((long)param_1 + 0x21c)) && (*param_2 == (int)param_1[0x43])) {
LAB_1000d49c9:
    if ((char)param_1[9] == '\0') {
      if (DAT_10230ffd0 < 3) goto LAB_1000d4ab3;
      iVar6 = *param_2;
      iVar5 = param_2[1];
      uVar15 = 0x1556;
    }
    else {
      iVar5 = FUN_1000dfea0(param_1);
      if (iVar5 == 0) {
        QMutex::lock();
        if ((param_2[1] == *(int *)((long)param_1 + 0x21c)) && (*param_2 == (int)param_1[0x43])) {
          FUN_1000d8bc0(param_1,param_2,param_3);
          goto LAB_1000d527f;
        }
        plVar1 = param_1 + 0xb;
        puVar7 = (uint *)param_1[0xb];
        if ((int)puVar7[2] < (int)puVar7[3]) {
          uVar14 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(plVar1,puVar7[1]);
              puVar7 = (uint *)*plVar1;
            }
            if ((*(int *)(*(long *)(puVar7 + (uVar14 + (long)(int)puVar7[2]) * 2 + 4) + 0x30) ==
                 *param_2) &&
               (*(int *)(*(long *)(puVar7 + (uVar14 + (long)(int)puVar7[2]) * 2 + 4) + 0x34) ==
                param_2[1])) {
              if (-1 < (int)uVar14) goto LAB_1000d4d42;
              break;
            }
            uVar14 = uVar14 + 1;
          } while ((long)uVar14 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
        }
        iVar5 = FUN_1000dcbf0(param_1,param_2,*(char *)((long)param_1 + 0x102) == '\0');
        if (iVar5 == -1) {
          FUN_100df99c0("SGAC","prl_client_app",0,
                        "Error: failed to register helper with psn={%u, %u}",*param_2,param_2[1]);
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2
                          ,param_2[1],0x158b);
          }
          FUN_1000c6a60(param_1,param_2);
          goto LAB_1000d527f;
        }
        puVar7 = (uint *)*plVar1;
        uVar14 = 0xffffffff;
        if ((int)puVar7[2] < (int)puVar7[3]) {
          uVar12 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(plVar1,puVar7[1]);
              puVar7 = (uint *)*plVar1;
            }
            if ((*(int *)(*(long *)(puVar7 + (uVar12 + (long)(int)puVar7[2]) * 2 + 4) + 0x30) ==
                 *param_2) &&
               (*(int *)(*(long *)(puVar7 + (uVar12 + (long)(int)puVar7[2]) * 2 + 4) + 0x34) ==
                param_2[1])) {
              uVar14 = uVar12 & 0xffffffff;
              break;
            }
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
        }
LAB_1000d4d42:
        if (1 < *puVar7) {
          FUN_1000e6e10(plVar1,puVar7[1]);
          puVar7 = (uint *)*plVar1;
        }
        iVar5 = (int)uVar14;
        lVar11 = *(long *)(puVar7 + ((long)iVar5 + (long)(int)puVar7[2]) * 2 + 4);
        if ((*(byte *)(lVar11 + 0x20) & 2) == 0) {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          bVar3 = FUN_100052250(param_1 + 2,lVar11 + 0x10);
          local_b8 = CONCAT44(local_b8._4_4_,bVar3 + 1);
          FUN_1000c4970(lVar11 + 0x30,0x82,&local_b8,0x80);
        }
        puVar2 = PTR_shared_null_1021e1288;
        local_c0 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_1000fce80(param_1 + 0x23,param_2,&local_c0);
        FUN_1000c4970(param_2,0x8d,local_c0 + *(long *)(local_c0 + 0x10),
                      *(undefined4 *)(local_c0 + 4));
        FUN_1000c8450(param_1,lVar11,param_2);
        local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
        local_e0 = PTR_shared_null_1021e15e8;
        local_d0 = (QArrayData *)puVar2;
        QString::operator=(&local_e8,(QString *)(lVar11 + 8));
        FUN_1000341d0(&local_e0,param_3);
        local_d8 = *(undefined8 *)param_2;
        local_c8 = 0;
        cVar4 = (**(code **)(*param_1 + 0x88))(param_1);
        if (cVar4 == '\0') {
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2
                          ,param_2[1],0x15af);
          }
          FUN_1000c6a60(param_1,param_2);
          local_d8 = 0;
        }
        iVar6 = FUN_1000d8780(param_3);
        if (iVar6 == 5) {
          lVar8 = (**(code **)(*param_1 + 0x68))(param_1);
          if (*(char *)(lVar8 + 0xc) == '\0') {
            *(byte *)(lVar11 + 0x24) = *(byte *)(lVar11 + 0x24) & 0xfe;
            FUN_1000bdac0(param_1 + 0xd,&local_e8);
          }
          else {
            local_f0 = PTR_shared_null_1021e15e8;
            FUN_1000bdac0(&local_f0,&local_e8);
            iVar6 = FUN_1000b9840(param_1,&local_f0);
            if (iVar6 < 1) {
              pQVar9 = (QArrayData *)QString::fromAscii_helper(" ",1);
              QtPrivate::QStringList_join
                        ((QStringList *)&local_100.field0,(QChar *)&local_e0,
                         (int)*(undefined8 *)(pQVar9 + 0x10) + (int)pQVar9);
              QString::toUtf8();
              FUN_100df99c0("SGAC","prl_client_app",0,
                            "Error: document \"%s\" can\'t be opened using helper with psn={%u, %u}"
                            ,local_f8 + *(long *)(local_f8 + 0x10),*param_2,param_2[1]);
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000d5010;
                }
                QArrayData::deallocate(local_f8,1,8);
              }
LAB_1000d5010:
              if (*(int *)local_100.field1 != -1) {
                if (*(int *)local_100.field1 != 0) {
                  LOCK();
                  *(int *)local_100.field1 = *(int *)local_100.field1 + -1;
                  local_31 = *(int *)local_100.field1 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000d5046;
                }
                QArrayData::deallocate((QArrayData *)local_100.field1,2,8);
              }
LAB_1000d5046:
              if (*(int *)pQVar9 != -1) {
                if (*(int *)pQVar9 != 0) {
                  LOCK();
                  *(int *)pQVar9 = *(int *)pQVar9 + -1;
                  local_31 = *(int *)pQVar9 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000d5071;
                }
                QArrayData::deallocate(pQVar9,2,8);
              }
LAB_1000d5071:
              if (*(int *)(*(long *)(lVar11 + 0x38) + 0xc) == *(int *)(*(long *)(lVar11 + 0x38) + 8)
                 ) {
                if (cVar4 != '\0') {
                  if (2 < DAT_10230ffd0) {
                    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                                  *param_2,param_2[1],0x15df);
                  }
                  FUN_1000c6a60(param_1,param_2);
                }
                if ((-1 < iVar5) && (iVar5 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
                  FUN_1000e53a0(plVar1,uVar14 & 0xffffffff);
                  FUN_1000df020(param_1);
                  FUN_1000df110(param_1);
                }
              }
            }
            FUN_1000b70d0(&local_f0);
          }
        }
        else if (iVar6 == 0) {
          *(byte *)(lVar11 + 0x24) = *(byte *)(lVar11 + 0x24) & 0xfe;
        }
        else {
          if (cVar4 != '\0') {
            if (2 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                            *param_2,param_2[1],0x15bd);
            }
            FUN_1000c6a60(param_1,param_2);
          }
          if ((-1 < iVar5) && (iVar5 < *(int *)(*plVar1 + 0xc) - *(int *)(*plVar1 + 8))) {
            FUN_1000e53a0(plVar1,uVar14 & 0xffffffff);
            FUN_1000df020(param_1);
            FUN_1000df110(param_1);
          }
        }
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d5200;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_1000d5200:
        FUN_100039a80(&local_e0);
        if (*(int *)local_e8.field0_0x0 != -1) {
          if (*(int *)local_e8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d5242;
          }
          QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
        }
LAB_1000d5242:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d527f;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_1000d527f:
        QMutex::unlock();
        return;
      }
      if (iVar5 != -2) {
        QMutex::lock();
        puVar7 = (uint *)param_1[0xb];
        if ((int)puVar7[2] < (int)puVar7[3]) {
          lVar11 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(param_1 + 0xb,puVar7[1]);
              puVar7 = (uint *)param_1[0xb];
            }
            if ((*(int *)(*(long *)(puVar7 + (lVar11 + (int)puVar7[2]) * 2 + 4) + 0x30) == *param_2)
               && (*(int *)(*(long *)(puVar7 + (lVar11 + (int)puVar7[2]) * 2 + 4) + 0x34) ==
                   param_2[1])) {
              if (-1 < (int)lVar11) goto LAB_1000d4d1b;
              break;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 < (long)(int)puVar7[3] - (long)(int)puVar7[2]);
        }
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],0x156b);
        }
        FUN_1000c6a60(param_1,param_2);
LAB_1000d4d1b:
        QMutex::unlock();
        return;
      }
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                    *param_2,param_2[1]);
      if (DAT_10230ffd0 < 3) goto LAB_1000d4ab3;
      iVar6 = *param_2;
      iVar5 = param_2[1];
      uVar15 = 0x1564;
    }
  }
  else {
    if (DAT_10230ffd0 < 3) goto LAB_1000d4ab3;
    iVar6 = *param_2;
    uVar15 = 0x154e;
  }
  FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",iVar6,iVar5,uVar15
               );
LAB_1000d4ab3:
  FUN_1000c6a60(param_1,param_2);
  return;
}

