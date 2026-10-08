
undefined1 FUN_1000d1030(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  mach_port_t host;
  undefined8 *puVar7;
  _Unwind_Exception *exception_object;
  long *extraout_RAX;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  undefined4 uVar19;
  QArrayData *pQStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_129;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_88;
  undefined1 *puStack_80;
  QArrayData *local_78;
  long local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  long *local_50;
  QString local_48;
  mach_timespec_t local_40;
  clock_serv_t local_38;
  undefined1 local_31;
  
  puStack_80 = (undefined1 *)0x1000d1050;
  local_70 = param_1;
  FUN_1000df690();
  puStack_80 = (undefined1 *)0x1000d105c;
  FUN_1000ae530(&local_48,param_2);
  lVar17 = *(long *)(*(long *)(param_1 + 0xf0) + 0x70);
  iVar6 = *(int *)(lVar17 + 8);
  if (iVar6 < *(int *)(lVar17 + 0xc)) {
    plVar18 = (long *)(*(long *)(param_1 + 0xf0) + 0x70);
    lVar10 = lVar17 + 8 + (long)iVar6 * 8;
    lVar17 = (long)*(int *)(lVar17 + 0xc) * 8 + (long)iVar6 * -8;
    do {
      if (lVar17 == 0) goto LAB_1000d10ce;
      puStack_80 = (undefined1 *)0x1000d10a1;
      cVar3 = operator==((QString *)(lVar10 + 8),&local_48);
      lVar10 = lVar10 + 8;
      lVar17 = lVar17 + -8;
    } while (cVar3 == '\0');
    lVar17 = *plVar18;
    uVar11 = lVar10 - (lVar17 + 0x10 + (ulong)*(uint *)(lVar17 + 8) * 8) >> 3;
    if ((int)uVar11 != -1) {
      puStack_80 = (undefined1 *)0x1000d10ce;
      FUN_100094da0(plVar18,uVar11 & 0xffffffff);
    }
  }
LAB_1000d10ce:
  puStack_80 = (undefined1 *)0x1000d10de;
  iVar6 = FUN_1000df200(local_70,&local_48,param_2);
  if (iVar6 != 0) {
    if (2 < DAT_10230ffd0) {
      local_78 = (QArrayData *)CONCAT44(local_78._4_4_,0x11ed);
      puStack_80 = (undefined1 *)0x1000d1126;
      FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                    *(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
    }
    puStack_80 = (undefined1 *)0x1000d1132;
    FUN_1000c6a60(local_70,param_2);
    if (*(int *)(local_48.field0_0x0 + 4) == 0) {
      puStack_80 = (undefined1 *)0x1000d12f1;
      QString::toUtf8();
      local_78 = (QArrayData *)CONCAT44(local_78._4_4_,*(undefined4 *)((long)param_2 + 4));
      puStack_80 = (undefined1 *)0x1000d1326;
      FUN_100df99c0("SGAC","prl_client_app",0,
                    "Error: bundlePath=\"%s\" for started helper with psn={%u, %u} is invalid",
                    local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)param_2);
      if (*(int *)local_58 == -1) {
        uVar4 = 0;
      }
      else {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar4 = 0;
            goto LAB_1000d13ed;
          }
        }
        puStack_80 = (undefined1 *)0x1000d13eb;
        QArrayData::deallocate(local_58,1,8);
        uVar4 = 0;
      }
      goto LAB_1000d13ed;
    }
    if (iVar6 == 1) {
      if (1 < DAT_10230ffd0) {
        uVar19 = *(undefined4 *)param_2;
        uVar1 = *(undefined4 *)((long)param_2 + 4);
        puStack_80 = (undefined1 *)0x1000d1165;
        QString::toUtf8();
        local_78 = local_60 + *(long *)(local_60 + 0x10);
        puStack_80 = (undefined1 *)0x1000d1198;
        FUN_100df99c0("SGAC","prl_client_app",2,
                      "Error: started helper with psn={%u, %u} (bundlePath=\"%s\") was successfully patched"
                      ,uVar19,uVar1);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000d11c8;
          }
          puStack_80 = (undefined1 *)0x1000d11c8;
          QArrayData::deallocate(local_60,1,8);
        }
      }
LAB_1000d11c8:
      puStack_80 = (undefined1 *)0x1000d11e1;
      FUN_10004d550(*(undefined8 *)(local_70 + 0xf0),&local_48,1);
      uVar4 = 0;
      goto LAB_1000d13ed;
    }
    uVar19 = *(undefined4 *)param_2;
    uVar1 = *(undefined4 *)((long)param_2 + 4);
    puStack_80 = (undefined1 *)0x1000d1352;
    QString::toUtf8();
    local_78 = local_68 + *(long *)(local_68 + 0x10);
    puStack_80 = (undefined1 *)0x1000d1385;
    FUN_100df99c0("SGAC","prl_client_app",0,
                  "Error: started helper with psn={%u, %u} (bundlePath=\"%s\") is invalid and will be removed"
                  ,uVar19,uVar1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000d13b5;
      }
      puStack_80 = (undefined1 *)0x1000d13b5;
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1000d13b5:
    puStack_80 = (undefined1 *)0x1000d13be;
    FUN_1000d7c20(&local_48);
    uVar4 = 0;
LAB_1000d13ed:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_48.field0_0x0 != 0) {
          return uVar4;
        }
        local_31 = 0;
      }
      puStack_80 = (undefined1 *)0x1000d141d;
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    return uVar4;
  }
  lVar17 = *(long *)(local_70 + 0xf0);
  puStack_80 = (undefined1 *)0x1000d11ff;
  QMutex::lock();
  puStack_80 = (undefined1 *)0x1000d1209;
  puVar7 = operator_new(0x18);
  puStack_80 = (undefined1 *)0x1000d121d;
  piVar12 = (int *)PTR_nothrow_1021e1620;
  plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar18 != (long *)0x0) {
    *(undefined4 *)(plVar18 + 1) = 1;
    plVar18[2] = (long)puVar7;
    *plVar18 = (long)&PTR_FUN_10226ce78;
    *puVar7 = *param_2;
    puStack_80 = (undefined1 *)0x1000d124f;
    local_50 = plVar18;
    host = _mach_host_self();
    puStack_80 = (undefined1 *)0x1000d125c;
    _host_get_clock_service(host,0,&local_38);
    puStack_80 = (undefined1 *)0x1000d1268;
    _clock_get_time(local_38,&local_40);
    puStack_80 = (undefined1 *)0x1000d1279;
    _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__1021e1c58,local_38);
    lVar17 = plVar18[2];
    *(ulong *)(lVar17 + 8) = (ulong)local_40.tv_sec;
    *(undefined1 *)(lVar17 + 0x10) = 1;
    puStack_80 = (undefined1 *)0x1000d1299;
    FUN_1000e54a0(local_70 + 0x70,&local_50);
    if (*(int *)(local_70 + 0x1e0) < 0) {
      puStack_80 = (undefined1 *)0x1000d12b6;
      QTimer::start();
    }
    LOCK();
    plVar14 = plVar18 + 1;
    lVar17 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      puStack_80 = (undefined1 *)0x1000d12d1;
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    puStack_80 = (undefined1 *)0x1000d12dd;
    QMutex::unlock();
    uVar4 = 1;
    goto LAB_1000d13ed;
  }
  puStack_80 = (undefined1 *)0x1000d147a;
  operator_delete(puVar7);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d151b;
    }
    piVar12 = (int *)0x1;
    puStack_80 = (undefined1 *)0x1000d14b1;
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1000d151b:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d154b;
    }
    piVar12 = (int *)0x2;
    puStack_80 = (undefined1 *)0x1000d154b;
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000d154b:
  puStack_80 = (undefined1 *)0x1000d1553;
  __Unwind_Resume(exception_object);
  puStack_80 = (undefined1 *)0x1000d155b;
  plVar14 = extraout_RAX;
  FUN_100014b50();
  plStack_a8 = plVar18;
  puStack_a0 = param_2;
  puStack_98 = puVar7;
  lStack_88 = lVar17 + 0x50;
  puStack_80 = &stack0xfffffffffffffff8;
  QMutex::lock();
  lVar17 = plVar14[0xe];
  iVar6 = *(int *)(lVar17 + 8);
  if (iVar6 != *(int *)(lVar17 + 0xc)) {
    puVar7 = (undefined8 *)(lVar17 + 0x10 + (long)iVar6 * 8);
    lVar17 = (long)*(int *)(lVar17 + 0xc) * 8 + (long)iVar6 * -8;
    do {
      piVar15 = (int *)0x0;
      if (*(long *)*puVar7 != 0) {
        piVar15 = *(int **)(*(long *)*puVar7 + 0x10);
      }
      if ((piVar12[1] == piVar15[1]) && (*piVar12 == *piVar15)) {
        QMutex::unlock();
        if ((char)plVar14[9] == '\0') {
          if ((DAT_10230ffd0 < 1) ||
             (FUN_100df99c0("SGAC","prl_client_app",1,
                            "Warning: Shared Guest Applications are disabled"), DAT_10230ffd0 < 3))
          goto LAB_1000d1661;
          iVar6 = *piVar12;
          iVar16 = piVar12[1];
          uVar19 = 0x1228;
          goto LAB_1000d1640;
        }
        iVar6 = FUN_1000dfea0(plVar14);
        if (iVar6 != 0) {
          FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                        *piVar12,piVar12[1]);
          if (DAT_10230ffd0 < 3) goto LAB_1000d1661;
          iVar6 = *piVar12;
          iVar16 = piVar12[1];
          uVar19 = 0x1231;
          goto LAB_1000d1640;
        }
        QMutex::lock();
        iVar6 = FUN_1000dcbf0(plVar14,piVar12,0);
        if (iVar6 != -1) {
          puVar8 = (uint *)plVar14[0xb];
          lVar17 = 0;
          if ((int)puVar8[2] < (int)puVar8[3]) {
            plVar18 = plVar14 + 0xb;
            goto LAB_1000d1780;
          }
          iVar16 = *piVar12;
          goto LAB_1000d1846;
        }
        FUN_100df99c0("SGAC","prl_client_app",0,
                      "Error: failed to register running helper with psn={%u, %u}",*piVar12,
                      piVar12[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*piVar12,
                        piVar12[1],0x123f);
        }
        FUN_1000c6a60(plVar14,piVar12);
        goto LAB_1000d18b2;
      }
      puVar7 = puVar7 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  QMutex::unlock();
  if ((0 < DAT_10230ffd0) &&
     (FUN_100df99c0("SGAC","prl_client_app",1,
                    "Warning: helper with psn={%u, %u} not in started list",*piVar12,piVar12[1]),
     2 < DAT_10230ffd0)) {
    iVar6 = *piVar12;
    iVar16 = piVar12[1];
    uVar19 = 0x1220;
LAB_1000d1640:
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",iVar6,iVar16,
                  uVar19);
  }
LAB_1000d1661:
  uVar4 = FUN_1000c6a60(plVar14,piVar12);
  return uVar4;
  while (lVar17 = lVar17 + 1, lVar17 < (int)puVar8[3] - lVar10) {
LAB_1000d1780:
    if (1 < *puVar8) {
      FUN_1000e6e10(plVar18,puVar8[1]);
      puVar8 = (uint *)*plVar18;
    }
    uVar9 = puVar8[2];
    lVar10 = (long)(int)uVar9;
    iVar2 = *(int *)(*(long *)(puVar8 + (lVar17 + lVar10) * 2 + 4) + 0x30);
    iVar16 = *piVar12;
    if ((iVar2 == iVar16) &&
       (*(int *)(*(long *)(puVar8 + (lVar17 + lVar10) * 2 + 4) + 0x34) == piVar12[1])) {
      iVar16 = iVar2;
      if (-1 < (int)lVar17) {
        if (1 < *puVar8) {
          FUN_1000e6e10(plVar18,puVar8[1],lVar10,uVar9,iVar2);
          puVar8 = (uint *)*plVar18;
          uVar9 = puVar8[2];
        }
        lVar17 = *(long *)(puVar8 + ((long)(int)lVar17 + (long)(int)uVar9) * 2 + 4);
        if ((*(byte *)(lVar17 + 0x20) & 2) == 0) {
          uStack_140 = 0;
          uStack_138 = 0;
          uStack_150 = 0;
          uStack_148 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_170 = 0;
          uStack_168 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          uStack_190 = 0;
          uStack_188 = 0;
          uStack_1a0 = 0;
          uStack_198 = 0;
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          bVar5 = FUN_100052250(plVar14 + 2,lVar17 + 0x10);
          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,bVar5 + 1);
          FUN_1000c4970(lVar17 + 0x30,0x82,&uStack_1b0,0x80);
        }
        pQStack_1b8 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_1000fce80(plVar14 + 0x23,piVar12,&pQStack_1b8);
        FUN_1000c4970(piVar12,0x8d,pQStack_1b8 + *(long *)(pQStack_1b8 + 0x10),
                      *(undefined4 *)(pQStack_1b8 + 4));
        puVar8 = *(uint **)(lVar17 + 0x38);
        uVar9 = puVar8[2];
        if (puVar8[3] != uVar9) {
          if (1 < *puVar8) {
            FUN_1000e7430((undefined8 *)(lVar17 + 0x38),puVar8[1]);
            puVar8 = *(uint **)(lVar17 + 0x38);
            uVar9 = puVar8[2];
          }
          FUN_1000dff80(plVar14,0,
                        *(undefined4 *)(*(long *)(puVar8 + (long)(int)uVar9 * 2 + 4) + 0x10),
                        lVar17 + 8);
        }
        FUN_1000c8450(plVar14,lVar17,piVar12);
        if (iVar6 != 1) {
          lVar10 = (**(code **)(*plVar14 + 0x68))(plVar14);
          if (*(char *)(lVar10 + 0xc) == '\0') {
            if (1 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",2,
                            "Module not enabled by guest, helper with psn={%u, %u} will wait",
                            *piVar12,piVar12[1]);
            }
            *(byte *)(lVar17 + 0x24) = *(byte *)(lVar17 + 0x24) | 1;
          }
          else {
            FUN_1000b89b0(plVar14,lVar17 + 8);
            cVar3 = (**(code **)(*plVar14 + 0x88))(plVar14);
            if (cVar3 == '\0') {
              if (2 < DAT_10230ffd0) {
                FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                              *piVar12,piVar12[1],0x1283);
              }
              FUN_1000c6a60(plVar14,piVar12);
            }
          }
          goto LAB_1000d1c00;
        }
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",2,
                        "Running helper with psn={%u, %u} attached to launched guest application",
                        *piVar12,piVar12[1]);
        }
        lVar10 = *(long *)(lVar17 + 0x38);
        iVar6 = *(int *)(lVar10 + 8);
        if (*(int *)(lVar10 + 0xc) <= iVar6) goto LAB_1000d1bb6;
        lVar13 = 0;
        goto LAB_1000d1a71;
      }
      break;
    }
  }
LAB_1000d1846:
  FUN_100df99c0("SGAC","prl_client_app",0,
                "Error: failed to find just registered helper with psn={%u, %u} ",iVar16,piVar12[1])
  ;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*piVar12,
                  piVar12[1],0x124a);
  }
  FUN_1000c6a60(plVar14,piVar12);
  goto LAB_1000d18b2;
  while (lVar13 = lVar13 + 1, lVar13 < *(int *)(lVar10 + 0xc) - iVar6) {
LAB_1000d1a71:
    if (**(ulong **)(lVar10 + 0x10 + (long)iVar6 * 8 + lVar13 * 8) ==
        (ulong)*(uint *)(plVar14 + 0x10)) {
      cVar3 = FUN_1000a6420();
      if (cVar3 == '\0') {
        if (((*(int *)(lVar17 + 0x30) != 0) || (*(int *)(lVar17 + 0x34) != 0)) &&
           ((*(uint *)(lVar17 + 0x20) & 4) != 0)) {
          *(uint *)(lVar17 + 0x20) = *(uint *)(lVar17 + 0x20) & 0xfffffffb;
          uStack_128 = 4;
          uStack_120 = 0;
          FUN_1000c4970(lVar17 + 0x30,0x77,&uStack_128,0x80);
        }
      }
      else {
        FUN_1000c6320(plVar14,lVar17);
      }
      break;
    }
  }
LAB_1000d1bb6:
  puVar8 = *(uint **)(lVar17 + 0x18);
  uVar9 = puVar8[1];
  if (uVar9 != 0) {
    if ((1 < *puVar8) || (*(long *)(puVar8 + 4) != 0x18)) {
      QByteArray::reallocData((undefined8 *)(lVar17 + 0x18),uVar9 + 1,puVar8[2] >> 0x1f);
      puVar8 = *(uint **)(lVar17 + 0x18);
      uVar9 = puVar8[1];
    }
    FUN_1000c4970(lVar17 + 0x30,0x7d,(long)puVar8 + *(long *)(puVar8 + 4),uVar9);
  }
LAB_1000d1c00:
  if (*(int *)pQStack_1b8 != -1) {
    if (*(int *)pQStack_1b8 != 0) {
      LOCK();
      *(int *)pQStack_1b8 = *(int *)pQStack_1b8 + -1;
      uStack_129 = *(int *)pQStack_1b8 != 0;
      UNLOCK();
      if ((bool)uStack_129) goto LAB_1000d18b2;
    }
    QArrayData::deallocate(pQStack_1b8,1,8);
  }
LAB_1000d18b2:
  uVar4 = QMutex::unlock();
  return uVar4;
}

