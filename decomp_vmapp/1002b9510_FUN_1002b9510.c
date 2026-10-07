
int FUN_1002b9510(long param_1,undefined8 param_2)

{
  QString *pQVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  QArrayData *pQVar13;
  QArrayData *pQVar14;
  uint uVar15;
  uint local_17c;
  QArrayData *local_168;
  QArrayData *local_160;
  void *local_158;
  void *pvStack_150;
  undefined8 local_148;
  undefined1 local_140 [24];
  QArrayData *local_128;
  undefined1 local_120 [24];
  void *local_108;
  void *pvStack_100;
  undefined8 local_f8;
  void *local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [24];
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  CVmDevice::getSystemName();
  CVmDevice::getUserFriendlyName();
  iVar4 = CVmUsbDevice::getConnectReason();
  if (-1 < DAT_1011c568c) {
    uVar9 = FUN_1002daaa0(iVar4);
    QString::toUtf8();
    pQVar14 = local_60 + *(long *)(local_60 + 0x10);
    QString::toUtf8();
    pQVar13 = local_68 + *(long *)(local_68 + 0x10);
    uVar5 = CVmUsbDevice::getUsbType();
    FUN_1006fd930(&local_78,uVar5);
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[USB] ConnectToBus: reason: %s, device: %s (%s) type: %s",uVar9,
                  pQVar14,pQVar13,local_70 + *(long *)(local_70 + 0x10));
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b9622;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_1002b9622:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b9652;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002b9652:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b9682;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_1002b9682:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002b96b2;
      }
      QArrayData::deallocate(local_60,1,8);
    }
  }
LAB_1002b96b2:
  iVar6 = FUN_1002c6e30(&local_50);
  if (iVar6 == 0 && DAT_1011c5610 == 0) {
    iVar6 = -0x7fffffff;
    if (DAT_1011c568c < 0) goto LAB_1002ba185;
    FUN_1008e3970("","USB",0,"[USB] No connection to Parallels USB manager driver");
LAB_1002b986e:
    local_17c = 0xffffffff;
    iVar6 = -0x7fffffff;
    goto LAB_1002ba089;
  }
  iVar6 = FUN_1002b7860(param_1,&local_50);
  if (iVar6 == -1) {
    iVar6 = -0x7fffffff;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970("","USB",0,"[USB] Unsupported device speed");
      goto LAB_1002b986e;
    }
  }
  else {
    local_17c = FUN_1002bd570(param_1,param_2);
    if ((local_17c == 0xffffffff) &&
       (local_17c = FUN_1002bfe90(param_1,&local_50), local_17c == 0xffffffff)) {
      uVar7 = 0;
      bVar2 = true;
      local_17c = 0xffffffff;
LAB_1002b9914:
      if ((uVar7 != 4) && (iVar4 != 0 || uVar7 != 0)) goto LAB_1002b9930;
      cVar3 = FUN_1002c2c70();
      if (cVar3 == '\0') {
        FUN_10006a060(local_98);
        FUN_10006a120(local_98,&local_58,0);
        local_b8 = (void *)0x0;
        pvStack_b0 = (void *)0x0;
        local_a8 = 0;
        FUN_1000648b0(DAT_1011c3650,0x80000587,&local_b8,local_98);
        if (local_b8 != (void *)0x0) {
          if (pvStack_b0 != local_b8) {
            pvStack_b0 = (void *)((~((long)pvStack_b0 + (-4 - (long)local_b8)) & 0xfffffffffffffffcU
                                  ) + (long)pvStack_b0);
          }
          operator_delete(local_b8);
        }
        iVar6 = -0x7ffffa79;
        FUN_10006a680(local_98);
LAB_1002ba089:
        if (-1 < DAT_1011c568c) {
          uVar9 = FUN_1002daaa0(iVar4);
          QString::toUtf8();
          lVar12 = *(long *)(local_160 + 0x10);
          QString::toUtf8();
          FUN_1008e3970("","USB",0,
                        "[USB] ConnectToBus: result: %d, port: %d, reason: %s, device: %s (%s)",
                        iVar6,local_17c,uVar9,local_160 + lVar12,
                        local_168 + *(long *)(local_168 + 0x10));
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002ba14f;
            }
            QArrayData::deallocate(local_168,1,8);
          }
LAB_1002ba14f:
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002ba185;
            }
            QArrayData::deallocate(local_160,1,8);
          }
        }
      }
      else {
        if (-1 < DAT_1011c568c) {
          uVar9 = FUN_1002da790(uVar7);
          FUN_1008e3970("","USB",0,"[USB] ConnectToBus stage 1, port: %u state: %s",local_17c,uVar9)
          ;
        }
        if (bVar2) {
          local_17c = FUN_1002bd140(param_1,&local_50);
        }
        if (local_17c == 0xffffffff) {
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[USB] There is no free ports on virtual USB host controller");
          }
          FUN_10006a060(local_d0);
          FUN_10006a120(local_d0,&local_58,0);
          local_e8 = (void *)0x0;
          pvStack_e0 = (void *)0x0;
          local_d8 = 0;
          FUN_1000648b0(DAT_1011c3650,0x80008002,&local_e8,local_d0);
          if (local_e8 != (void *)0x0) {
            if (pvStack_e0 != local_e8) {
              pvStack_e0 = (void *)((~((long)pvStack_e0 + (-4 - (long)local_e8)) &
                                    0xfffffffffffffffcU) + (long)pvStack_e0);
            }
            operator_delete(local_e8);
          }
          FUN_10006a680(local_d0);
          goto LAB_1002b986e;
        }
        uVar7 = FUN_1002c1d60(param_1,&local_50,&local_58);
        iVar6 = -0x7fffffff;
        if (uVar7 == 0) goto LAB_1002ba089;
        uVar10 = (ulong)local_17c;
        (&DAT_1011c4aa0)[uVar10 * 0xc] = uVar7;
        QString::operator=((QString *)(&DAT_1011c4ab8 + uVar10 * 6),&local_50);
        pQVar1 = (QString *)(&DAT_1011c4ac0 + uVar10 * 0x30);
        QString::operator=(pQVar1,&local_58);
        if (*(int *)(pQVar1->field0_0x0 + 4) == 0) {
          QString::operator=(pQVar1,(QString *)(&DAT_1011c4ab8 + uVar10 * 6));
        }
        uVar9 = FUN_1007d87f0();
        (&DAT_1011c4aa8)[uVar10 * 6] = uVar9;
        (&DAT_1011c4aa4)[uVar10 * 0xc] = 0;
        iVar6 = FUN_1002c6e30(&local_50);
        if (iVar6 == 0) {
          cVar3 = FUN_1006d81f0(1);
          iVar6 = 0;
          if (cVar3 == '\0') goto LAB_1002ba089;
        }
LAB_1002b9930:
        if (-1 < DAT_1011c568c) {
          uVar9 = FUN_1002da790(uVar7);
          FUN_1008e3970("","USB",0,"[USB] ConnectToBus stage 2, port: %u state: %s",local_17c,uVar9)
          ;
        }
        uVar9 = DAT_1011c3650;
        if (local_17c == 0xffffffff) {
          iVar6 = -0x7fffffff;
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[USB] Connect ignored, reservation not found");
            goto LAB_1002b986e;
          }
        }
        else {
          if ((1 < uVar7 - 4) && (uVar7 != 0)) {
            if (uVar7 == 3) {
              local_108 = (void *)0x0;
              pvStack_100 = (void *)0x0;
              local_f8 = 0;
              FUN_10006a060(local_120);
              FUN_1000648b0(uVar9,0x80008003,&local_108,local_120);
              FUN_10006a680(local_120);
              if (local_108 != (void *)0x0) {
                if (pvStack_100 != local_108) {
                  pvStack_100 = (void *)((~((long)pvStack_100 + (-4 - (long)local_108)) &
                                         0xfffffffffffffffcU) + (long)pvStack_100);
                }
                operator_delete(local_108);
              }
              (&DAT_1011c4aa0)[(ulong)local_17c * 0xc] = 6;
              (&DAT_1011c4aa8)[(ulong)local_17c * 6] = 0xffffffffffffffff;
LAB_1002ba066:
              iVar6 = 0;
              CVmDevice::setConnected((uint)param_2);
            }
            else {
              uVar10 = (ulong)local_17c;
              (&DAT_1011c4aa0)[uVar10 * 0xc] = 6;
              (&DAT_1011c4aa8)[uVar10 * 6] = 0;
              uVar5 = CVmDevice::getEmulatedType();
              (&DAT_1011c4ab0)[uVar10 * 0xc] = uVar5;
              QString::operator=((QString *)(&DAT_1011c4ab8 + uVar10 * 6),&local_50);
              pQVar1 = (QString *)(&DAT_1011c4ac0 + uVar10 * 0x30);
              QString::operator=(pQVar1,&local_58);
              if (*(int *)(pQVar1->field0_0x0 + 4) == 0) {
                QString::operator=(pQVar1,(QString *)(&DAT_1011c4ab8 + uVar10 * 6));
              }
              (&DAT_1011c4aa4)[uVar10 * 0xc] = 0;
              QString::QString(&local_40,0x7c);
              QString::section(&local_128,&local_50,&local_40,4,4,0);
              if (*(int *)local_40.field0_0x0 != -1) {
                if (*(int *)local_40.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                  local_31 = *(int *)local_40.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002b9e43;
                }
                QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
              }
LAB_1002b9e43:
              iVar6 = QString::compare_helper
                                (local_128 + *(long *)(local_128 + 0x10),
                                 *(undefined4 *)(local_128 + 4),"PW",0xffffffff,1);
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_31 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1002b9ea3;
                }
                QArrayData::deallocate(local_128,2,8);
              }
LAB_1002b9ea3:
              if (iVar6 == 0) goto LAB_1002ba066;
              iVar6 = FUN_1002c1820(param_1,local_17c);
              if (iVar6 == 0) {
                (&DAT_1011c4aa0)[uVar10 * 0xc] = 5;
                goto LAB_1002ba066;
              }
              if (local_17c < 0x2f) {
                if (local_17c < 0x20) {
                  plVar11 = (long *)(param_1 + 0x2e8);
                }
                else {
                  plVar11 = (long *)(param_1 + 0x2f0);
                }
              }
              else {
                plVar11 = (long *)(param_1 + 0x2f8);
              }
              if (*plVar11 == 0) goto LAB_1002ba066;
              lVar12 = 3;
              if (local_17c < 0x2f) {
                lVar12 = (ulong)(0x1f < local_17c) + 1;
              }
              if ((*(uint *)(&DAT_100b381c0 + lVar12 * 4) & *(uint *)(param_1 + 0x2a8)) != 0)
              goto LAB_1002ba066;
              uVar9 = FUN_1007d87f0();
              (&DAT_1011c4aa8)[uVar10 * 6] = uVar9;
              if (((uVar7 != 6) && (iVar6 != -0x7ffffa6f)) && (iVar6 != -0x7ffdbffe)) {
                FUN_10006a060(local_140);
                FUN_10006a120(local_140,&local_58,0);
                local_158 = (void *)0x0;
                pvStack_150 = (void *)0x0;
                local_148 = 0;
                FUN_1000648b0(DAT_1011c3650,0x80000471,&local_158,local_140);
                if (local_158 != (void *)0x0) {
                  if (pvStack_150 != local_158) {
                    pvStack_150 = (void *)((~((long)pvStack_150 + (-4 - (long)local_158)) &
                                           0xfffffffffffffffcU) + (long)pvStack_150);
                  }
                  operator_delete(local_158);
                }
                FUN_10006a680(local_140);
              }
              iVar8 = FUN_1002c6e30(&local_50);
              if ((iVar8 == 0) && (cVar3 = FUN_1006d81f0(1), cVar3 == '\0')) goto LAB_1002ba066;
              FUN_1002b6210(local_17c);
              if ((uVar7 & 0xfffffffb) != 2) goto LAB_1002ba089;
              CVmDevice::setConnected((uint)param_2);
            }
            FUN_10025b3c0(param_1 + 0x68,param_2);
            goto LAB_1002ba089;
          }
          iVar6 = -0x7fffffff;
          if (-1 < DAT_1011c568c) {
            uVar9 = FUN_1002da790(uVar7);
            iVar6 = -0x7fffffff;
            FUN_1008e3970("","USB",0,"[USB] Wrong port state while auto-connect %s",uVar9);
            goto LAB_1002ba089;
          }
        }
      }
    }
    else {
      uVar15 = (&DAT_1011c4aa0)[(ulong)local_17c * 0xc];
      if (uVar15 == 1) {
        QString::QString(&local_48,0x7c);
        QString::section(&local_80,&local_50,&local_48,4,4,0);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b978f;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1002b978f:
        iVar6 = QString::compare_helper
                          (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),"PR",
                           0xffffffff,1);
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b97e7;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1002b97e7:
        if (iVar6 != 0) goto LAB_1002b97f0;
        (&DAT_1011c4aa0)[(ulong)local_17c * 0xc] = 2;
        uVar7 = 2;
LAB_1002b9894:
        bVar2 = false;
        if ((iVar4 != 0) || (uVar15 = 2, bVar2 = false, uVar7 != 2)) goto LAB_1002b9914;
      }
      else {
LAB_1002b97f0:
        uVar7 = uVar15;
        if ((uVar15 & 0xfffffffb) != 1) goto LAB_1002b9894;
      }
      iVar6 = -0x7fffffff;
      if (-1 < DAT_1011c568c) {
        uVar9 = FUN_1002da790(uVar15);
        iVar6 = -0x7fffffff;
        FUN_1008e3970("","USB",0,"[USB] Double connect rejected, port: %u state: %s",local_17c,uVar9
                     );
        goto LAB_1002ba089;
      }
    }
  }
LAB_1002ba185:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ba1b5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1002ba1b5:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return iVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return iVar6;
}

