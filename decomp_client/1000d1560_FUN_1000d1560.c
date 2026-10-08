
void FUN_1000d1560(long *param_1,int *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  QArrayData *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined4 local_a8;
  
  QMutex::lock();
  lVar5 = param_1[0xe];
  iVar4 = *(int *)(lVar5 + 8);
  if (iVar4 != *(int *)(lVar5 + 0xc)) {
    puVar8 = (undefined8 *)(lVar5 + 0x10 + (long)iVar4 * 8);
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar4 * -8;
    do {
      piVar11 = (int *)0x0;
      if (*(long *)*puVar8 != 0) {
        piVar11 = *(int **)(*(long *)*puVar8 + 0x10);
      }
      if ((param_2[1] == piVar11[1]) && (*param_2 == *piVar11)) {
        QMutex::unlock();
        if ((char)param_1[9] == '\0') {
          if ((DAT_10230ffd0 < 1) ||
             (FUN_100df99c0("SGAC","prl_client_app",1,
                            "Warning: Shared Guest Applications are disabled"), DAT_10230ffd0 < 3))
          goto LAB_1000d1661;
          iVar4 = *param_2;
          iVar13 = param_2[1];
          uVar14 = 0x1228;
          goto LAB_1000d1640;
        }
        iVar4 = FUN_1000dfea0(param_1);
        if (iVar4 != 0) {
          FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                        *param_2,param_2[1]);
          if (DAT_10230ffd0 < 3) goto LAB_1000d1661;
          iVar4 = *param_2;
          iVar13 = param_2[1];
          uVar14 = 0x1231;
          goto LAB_1000d1640;
        }
        QMutex::lock();
        iVar4 = FUN_1000dcbf0(param_1,param_2,0);
        if (iVar4 != -1) {
          puVar6 = (uint *)param_1[0xb];
          lVar5 = 0;
          if ((int)puVar6[3] <= (int)puVar6[2]) {
            iVar12 = *param_2;
            goto LAB_1000d1846;
          }
          plVar1 = param_1 + 0xb;
          goto LAB_1000d1780;
        }
        FUN_100df99c0("SGAC","prl_client_app",0,
                      "Error: failed to register running helper with psn={%u, %u}",*param_2,
                      param_2[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],0x123f);
        }
        FUN_1000c6a60(param_1,param_2);
        goto LAB_1000d18b2;
      }
      puVar8 = puVar8 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  QMutex::unlock();
  if ((0 < DAT_10230ffd0) &&
     (FUN_100df99c0("SGAC","prl_client_app",1,
                    "Warning: helper with psn={%u, %u} not in started list",*param_2,param_2[1]),
     2 < DAT_10230ffd0)) {
    iVar4 = *param_2;
    iVar13 = param_2[1];
    uVar14 = 0x1220;
LAB_1000d1640:
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",iVar4,iVar13,
                  uVar14);
  }
LAB_1000d1661:
  FUN_1000c6a60(param_1,param_2);
  return;
  while (lVar5 = lVar5 + 1, lVar5 < (int)puVar6[3] - lVar9) {
LAB_1000d1780:
    if (1 < *puVar6) {
      FUN_1000e6e10(plVar1,puVar6[1]);
      puVar6 = (uint *)*plVar1;
    }
    uVar7 = puVar6[2];
    lVar9 = (long)(int)uVar7;
    iVar13 = *(int *)(*(long *)(puVar6 + (lVar5 + lVar9) * 2 + 4) + 0x30);
    iVar12 = *param_2;
    if ((iVar13 == iVar12) &&
       (*(int *)(*(long *)(puVar6 + (lVar5 + lVar9) * 2 + 4) + 0x34) == param_2[1])) {
      iVar12 = iVar13;
      if (-1 < (int)lVar5) {
        if (1 < *puVar6) {
          FUN_1000e6e10(plVar1,puVar6[1],lVar9,uVar7,iVar13);
          puVar6 = (uint *)*plVar1;
          uVar7 = puVar6[2];
        }
        lVar5 = *(long *)(puVar6 + ((long)(int)lVar5 + (long)(int)uVar7) * 2 + 4);
        if ((*(byte *)(lVar5 + 0x20) & 2) == 0) {
          local_c8 = 0;
          uStack_c0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          bVar2 = FUN_100052250(param_1 + 2,lVar5 + 0x10);
          local_138 = CONCAT44(local_138._4_4_,bVar2 + 1);
          FUN_1000c4970(lVar5 + 0x30,0x82,&local_138,0x80);
        }
        local_140 = (QArrayData *)PTR_shared_null_1021e1288;
        FUN_1000fce80(param_1 + 0x23,param_2,&local_140);
        FUN_1000c4970(param_2,0x8d,local_140 + *(long *)(local_140 + 0x10),
                      *(undefined4 *)(local_140 + 4));
        puVar6 = *(uint **)(lVar5 + 0x38);
        uVar7 = puVar6[2];
        if (puVar6[3] != uVar7) {
          if (1 < *puVar6) {
            FUN_1000e7430((undefined8 *)(lVar5 + 0x38),puVar6[1]);
            puVar6 = *(uint **)(lVar5 + 0x38);
            uVar7 = puVar6[2];
          }
          FUN_1000dff80(param_1,0,
                        *(undefined4 *)(*(long *)(puVar6 + (long)(int)uVar7 * 2 + 4) + 0x10),
                        lVar5 + 8);
        }
        FUN_1000c8450(param_1,lVar5,param_2);
        if (iVar4 != 1) {
          lVar9 = (**(code **)(*param_1 + 0x68))(param_1);
          if (*(char *)(lVar9 + 0xc) == '\0') {
            if (1 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",2,
                            "Module not enabled by guest, helper with psn={%u, %u} will wait",
                            *param_2,param_2[1]);
            }
            *(byte *)(lVar5 + 0x24) = *(byte *)(lVar5 + 0x24) | 1;
          }
          else {
            FUN_1000b89b0(param_1,lVar5 + 8);
            cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
            if (cVar3 == '\0') {
              if (2 < DAT_10230ffd0) {
                FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",
                              *param_2,param_2[1],0x1283);
              }
              FUN_1000c6a60(param_1,param_2);
            }
          }
          goto LAB_1000d1c00;
        }
        if (1 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",2,
                        "Running helper with psn={%u, %u} attached to launched guest application",
                        *param_2,param_2[1]);
        }
        lVar9 = *(long *)(lVar5 + 0x38);
        iVar4 = *(int *)(lVar9 + 8);
        if (*(int *)(lVar9 + 0xc) <= iVar4) goto LAB_1000d1bb6;
        lVar10 = 0;
        goto LAB_1000d1a71;
      }
      break;
    }
  }
LAB_1000d1846:
  FUN_100df99c0("SGAC","prl_client_app",0,
                "Error: failed to find just registered helper with psn={%u, %u} ",iVar12,param_2[1])
  ;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                  param_2[1],0x124a);
  }
  FUN_1000c6a60(param_1,param_2);
  goto LAB_1000d18b2;
  while (lVar10 = lVar10 + 1, lVar10 < *(int *)(lVar9 + 0xc) - iVar4) {
LAB_1000d1a71:
    if (**(ulong **)(lVar9 + 0x10 + (long)iVar4 * 8 + lVar10 * 8) ==
        (ulong)*(uint *)(param_1 + 0x10)) {
      cVar3 = FUN_1000a6420();
      if (cVar3 == '\0') {
        if (((*(int *)(lVar5 + 0x30) != 0) || (*(int *)(lVar5 + 0x34) != 0)) &&
           ((*(uint *)(lVar5 + 0x20) & 4) != 0)) {
          *(uint *)(lVar5 + 0x20) = *(uint *)(lVar5 + 0x20) & 0xfffffffb;
          local_b0 = 4;
          local_a8 = 0;
          FUN_1000c4970(lVar5 + 0x30,0x77,&local_b0,0x80);
        }
      }
      else {
        FUN_1000c6320(param_1,lVar5);
      }
      break;
    }
  }
LAB_1000d1bb6:
  puVar6 = *(uint **)(lVar5 + 0x18);
  uVar7 = puVar6[1];
  if (uVar7 != 0) {
    if ((1 < *puVar6) || (*(long *)(puVar6 + 4) != 0x18)) {
      QByteArray::reallocData((undefined8 *)(lVar5 + 0x18),uVar7 + 1,puVar6[2] >> 0x1f);
      puVar6 = *(uint **)(lVar5 + 0x18);
      uVar7 = puVar6[1];
    }
    FUN_1000c4970(lVar5 + 0x30,0x7d,(long)puVar6 + *(long *)(puVar6 + 4),uVar7);
  }
LAB_1000d1c00:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_b1 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_b1) goto LAB_1000d18b2;
    }
    QArrayData::deallocate(local_140,1,8);
  }
LAB_1000d18b2:
  QMutex::unlock();
  return;
}

