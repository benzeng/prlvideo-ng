
void FUN_1000d40c0(long param_1,int *param_2,ulong *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = *param_3;
  uVar1 = param_3[1];
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_1 + 0x10);
  if (lVar6 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    uVar9 = 1;
    local_50 = local_40;
    goto LAB_1000d4504;
  }
  if ((uVar1 & 1) == 0) {
    QMutex::lock();
    iVar3 = FUN_1000cf550(param_1,param_2);
    if (iVar3 < 0) {
      if ((0 < DAT_10230ffd0) &&
         (FUN_100df99c0("SGAC","prl_client_app",1,
                        "Warning: app associated with helper with psn={%u, %u} not running",*param_2
                        ,param_2[1]), 2 < DAT_10230ffd0)) {
        FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                      param_2[1],0x1515);
      }
      FUN_1000c6a60(param_1,param_2);
    }
    else {
      iVar4 = FUN_1000dfea0(param_1);
      if (iVar4 == 0) {
        uVar5 = FUN_10018c280(lVar6);
        uVar5 = FUN_100319c50(uVar5);
        cVar2 = FUN_100330a50(uVar5);
        if (cVar2 == '\0') {
          uVar5 = FUN_10018c280(lVar6);
          bVar11 = true;
          FUN_10031b640(uVar5,1);
        }
        else {
          bVar11 = true;
          if (*(char *)(param_1 + 0x104) != '\0') {
            puVar7 = *(uint **)(param_1 + 0x58);
            if (1 < *puVar7) {
              FUN_1000e6e10((undefined8 *)(param_1 + 0x58),puVar7[1]);
              puVar7 = *(uint **)(param_1 + 0x58);
            }
            bVar11 = (*(byte *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)puVar7[2]) * 2 + 4) +
                               0x20) & 8) == 0;
          }
        }
        FUN_1000b9410(param_1,uVar9,bVar11);
      }
      else if (iVar4 == -2) {
        FUN_100df99c0("SGAC","prl_client_app",0,"Error: helper psn={%u, %u} failed to start Vm",
                      *param_2,param_2[1]);
        if (2 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",3,"HELPER_USELESS(psn={%u, %u}), line=%i",*param_2,
                        param_2[1],0x1522);
        }
        FUN_1000c6a60(param_1,param_2);
      }
    }
    goto LAB_1000d454c;
  }
  if ((uVar1 & 4) != 0) {
    if ((long)uVar9 < 0x3001) {
      switch(uVar9) {
      case 0x1ef1:
        QMutex::lock();
        puVar7 = *(uint **)(param_1 + 0x58);
        if ((int)puVar7[2] < (int)puVar7[3]) {
          puVar8 = (undefined8 *)(param_1 + 0x58);
          lVar6 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(puVar8,puVar7[1]);
              puVar7 = (uint *)*puVar8;
            }
            uVar10 = puVar7[2];
            if ((*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x30) == *param_2) &&
               (*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x34) == param_2[1])) {
              iVar3 = (int)lVar6;
              if (-1 < iVar3) {
                if ((uVar1 & 8) == 0) {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) & 0xffffffef;
                }
                else {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) | 0x10;
                }
              }
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)(int)puVar7[3] - (long)(int)uVar10);
        }
        FUN_1000df020(param_1);
        break;
      case 0x1ef2:
        QMutex::lock();
        puVar7 = *(uint **)(param_1 + 0x58);
        if ((int)puVar7[2] < (int)puVar7[3]) {
          puVar8 = (undefined8 *)(param_1 + 0x58);
          lVar6 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(puVar8,puVar7[1]);
              puVar7 = (uint *)*puVar8;
            }
            uVar10 = puVar7[2];
            if ((*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x30) == *param_2) &&
               (*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x34) == param_2[1])) {
              iVar3 = (int)lVar6;
              if (-1 < iVar3) {
                if ((uVar1 & 8) == 0) {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) & 0xffffffbf;
                }
                else {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) | 0x40;
                }
              }
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)(int)puVar7[3] - (long)(int)uVar10);
        }
        break;
      case 0x1ef3:
        QMutex::lock();
        puVar7 = *(uint **)(param_1 + 0x58);
        if ((int)puVar7[2] < (int)puVar7[3]) {
          puVar8 = (undefined8 *)(param_1 + 0x58);
          lVar6 = 0;
          do {
            if (1 < *puVar7) {
              FUN_1000e6e10(puVar8,puVar7[1]);
              puVar7 = (uint *)*puVar8;
            }
            uVar10 = puVar7[2];
            if ((*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x30) == *param_2) &&
               (*(int *)(*(long *)(puVar7 + (lVar6 + (int)uVar10) * 2 + 4) + 0x34) == param_2[1])) {
              iVar3 = (int)lVar6;
              if (-1 < iVar3) {
                if ((uVar1 & 8) == 0) {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) & 0xffffffdf;
                }
                else {
                  if (1 < *puVar7) {
                    FUN_1000e6e10(puVar8,puVar7[1]);
                    puVar7 = (uint *)*puVar8;
                    uVar10 = puVar7[2];
                  }
                  *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) + 0x20) =
                       *(uint *)(*(long *)(puVar7 + ((long)iVar3 + (long)(int)uVar10) * 2 + 4) +
                                0x20) | 0x20;
                }
              }
              break;
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < (long)(int)puVar7[3] - (long)(int)uVar10);
        }
        FUN_1000df110(param_1);
        break;
      case 0x1ef4:
        return;
      default:
        goto switchD_1000d425a_default;
      }
LAB_1000d454c:
      QMutex::unlock();
      return;
    }
    if (uVar9 == 0x3001) {
      FUN_1000d6c70(param_1);
    }
  }
switchD_1000d425a_default:
  if ((uVar1 & 2) == 0) {
    uVar5 = FUN_1006915d0();
    lVar6 = FUN_100691620(uVar5,uVar9 & 0xffffffff,lVar6);
    if (lVar6 == 0) {
      return;
    }
    QAction::activate(lVar6,0);
    if (uVar9 != 0x46) {
      return;
    }
    QTimer::start();
    return;
  }
  cVar2 = '\r';
  if (0xfd < *(int *)((long)param_3 + 0xc) - 0x1f01U) {
    cVar2 = (-(*(int *)((long)param_3 + 0xc) - 0x3101U < 0xfe) & 2U) + 10;
  }
  uVar5 = FUN_1006b56b0();
  _strlen((char *)(param_3 + 8));
  QString::fromUtf8_helper((char *)&local_50,(int)(param_3 + 8));
  QString::normalized(&local_48,&local_50,1,0);
  FUN_1006b59a0(uVar5,&local_48,cVar2,lVar6);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000d44de;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1000d44de:
  if (*(int *)local_50 == -1) {
    return;
  }
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return;
    }
    local_31 = 0;
  }
  uVar9 = 2;
LAB_1000d4504:
  QArrayData::deallocate(local_50,uVar9,8);
  return;
}

