
void FUN_100af2480(long param_1,long *param_2,long *param_3,QString *param_4,QString *param_5,
                  int param_6)

{
  long lVar1;
  CHwUsbDevice *pCVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  CHwUsbDevice *this;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  bool bVar14;
  QArrayData *local_698;
  QTypedArrayData<unsigned_short> *local_690;
  QArrayData *local_688;
  QArrayData *local_680;
  QArrayData *local_678;
  QArrayData *local_670;
  QString local_668;
  QArrayData *local_660;
  QArrayData *local_658;
  QArrayData *local_650;
  QArrayData *local_648;
  QArrayData *local_640;
  QArrayData *local_638;
  QString local_630;
  QString local_628;
  QArrayData *local_620;
  Data *local_618;
  Data *local_610;
  Data *local_608;
  uint local_600;
  QString local_5f8;
  QString local_5f0;
  QArrayData *local_5e8;
  QArrayData *local_5e0;
  QArrayData *local_5d8;
  QString local_5d0;
  QString local_5c8;
  CHwUsbDevice *local_5c0;
  Data *local_5b8;
  Data *local_5b0;
  Data *local_5a8;
  uint local_5a0;
  QArrayData *local_598;
  QArrayData *local_590;
  QString local_588;
  QString local_580;
  CHwUsbDevice *local_578;
  QString local_570;
  int local_568;
  int local_564;
  int local_560;
  int local_55c;
  QString local_558;
  QString local_550;
  QString local_548;
  QString local_540;
  utsname local_538;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_570.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_578 = (CHwUsbDevice *)0x0;
  local_580.field0_0x0 = param_4->field0_0x0;
  if (1 < *(int *)local_580.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + 1;
    local_538.sysname[0] = *(int *)local_580.field0_0x0 != 0;
    UNLOCK();
  }
  local_588.field0_0x0 = param_5->field0_0x0;
  if (1 < *(int *)local_588.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_588.field0_0x0 = *(int *)local_588.field0_0x0 + 1;
    local_538.sysname[0] = *(int *)local_588.field0_0x0 != 0;
    UNLOCK();
  }
  local_568 = param_6;
  QString::replace(&local_580,0,0x20,1);
  QString::replace(&local_588,0,0x20,1);
  cVar5 = operator==(&local_580,param_4);
  if (cVar5 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","pvsHostInfo",0,"LOOKUP0 system   name was patched <%s>",
                  local_590 + *(long *)(local_590 + 0x10));
    if (*(int *)local_590 != -1) {
      if (*(int *)local_590 != 0) {
        LOCK();
        *(int *)local_590 = *(int *)local_590 + -1;
        local_538.sysname[0] = *(int *)local_590 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af25d4;
      }
      QArrayData::deallocate(local_590,1,8);
    }
  }
LAB_100af25d4:
  cVar5 = operator==(&local_588,param_5);
  if (cVar5 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","pvsHostInfo",0,"LOOKUP0 friendly name was patched <%s>",
                  local_598 + *(long *)(local_598 + 0x10));
    if (*(int *)local_598 != -1) {
      if (*(int *)local_598 != 0) {
        LOCK();
        *(int *)local_598 = *(int *)local_598 + -1;
        local_538.sysname[0] = *(int *)local_598 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af265f;
      }
      QArrayData::deallocate(local_598,1,8);
    }
  }
LAB_100af265f:
  local_5b8 = (Data *)*param_2;
  if (*(int *)local_5b8 != -1) {
    if (*(int *)local_5b8 == 0) {
      QListData::detach((int)&local_5b8);
      lVar9 = (long)*(int *)(local_5b8 + 8);
      lVar1 = *param_2;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_5b8 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_5b8 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_5b8 + 0xc))) {
        _memcpy(local_5b8 + lVar9 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_5b8 = *(int *)local_5b8 + 1;
      local_538.sysname[0] = *(int *)local_5b8 != 0;
      UNLOCK();
    }
  }
  local_5b0 = local_5b8 + (long)*(int *)(local_5b8 + 8) * 8 + 0x10;
  local_5a8 = local_5b8 + (long)*(int *)(local_5b8 + 0xc) * 8 + 0x10;
  local_5a0 = 1;
  param_1 = param_1 + 0x40;
  this = (CHwUsbDevice *)0x0;
  if (*(int *)(local_5b8 + 8) != *(int *)(local_5b8 + 0xc)) {
    this = (CHwUsbDevice *)0x0;
    do {
      pCVar2 = *(CHwUsbDevice **)local_5b0;
      local_5c0 = pCVar2;
      if (local_5a0 == 0) {
LAB_100af288a:
        local_5b0 = local_5b0 + 8;
        local_5a0 = 1;
      }
      else {
        (**(code **)(*(long *)pCVar2 + 0xb8))(&local_5c8,pCVar2);
        cVar5 = operator==(&local_580,&local_5c8);
        iVar7 = 0;
        if (cVar5 != '\0') {
          FUN_100af7c70(param_2,&local_5c0);
          local_578 = pCVar2;
          FUN_100af40c0(&local_5d0,param_1,&local_580,&local_588,&local_568);
          QString::operator=(&local_570,&local_5d0);
          iVar7 = -2;
          this = pCVar2;
          if (*(int *)local_5d0.field0_0x0 != -1) {
            if (*(int *)local_5d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_5d0.field0_0x0 = *(int *)local_5d0.field0_0x0 + -1;
              local_538.sysname[0] = *(int *)local_5d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_100af2811;
            }
            QArrayData::deallocate((QArrayData *)local_5d0.field0_0x0,2,8);
          }
        }
LAB_100af2811:
        if (*(int *)local_5c8.field0_0x0 != -1) {
          if (*(int *)local_5c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5c8.field0_0x0 = *(int *)local_5c8.field0_0x0 + -1;
            local_538.sysname[0] = *(int *)local_5c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af284d;
          }
          QArrayData::deallocate((QArrayData *)local_5c8.field0_0x0,2,8);
        }
LAB_100af284d:
        if (iVar7 == 0) goto LAB_100af288a;
        local_5b0 = local_5b0 + 8;
        uVar8 = local_5a0 ^ 1;
        bVar14 = local_5a0 == 1;
        local_5a0 = uVar8;
        if (bVar14) break;
      }
    } while (local_5b0 != local_5a8);
  }
  if (*(int *)local_5b8 != -1) {
    if (*(int *)local_5b8 != 0) {
      LOCK();
      *(int *)local_5b8 = *(int *)local_5b8 + -1;
      local_538.sysname[0] = *(int *)local_5b8 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_100af28f1;
    }
    QListData::dispose(local_5b8);
  }
LAB_100af28f1:
  bVar6 = FUN_100d80630(1);
  if ((bVar6 & this == (CHwUsbDevice *)0x0) == 1) {
    if (DAT_102313ba0 == 0) {
      iVar7 = _uname(&local_538);
      uVar8 = 0xffffffff;
      if (iVar7 == 0) {
        local_55c = -1;
        local_560 = -1;
        local_564 = -1;
        iVar7 = _sscanf(local_538.release,"%d.%d.%d",&local_55c,&local_560,&local_564);
        if (iVar7 == 3) {
          uVar8 = local_560 * 0x100 + local_55c * 0x10000 + local_564;
          uVar8 = -(uint)(uVar8 == 0) | uVar8;
        }
      }
      DAT_102313ba0 = uVar8;
      FUN_100df99c0("","pvsHostInfo",0,"enum_usb: kernel_ver 0x%08x",DAT_102313ba0);
    }
    local_5d8 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@",8);
    cVar5 = QString::startsWith(param_4,&local_5d8,1);
    if (*(int *)local_5d8 != -1) {
      if (*(int *)local_5d8 != 0) {
        LOCK();
        *(int *)local_5d8 = *(int *)local_5d8 + -1;
        local_538.sysname[0] = *(int *)local_5d8 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af2a30;
      }
      QArrayData::deallocate(local_5d8,2,8);
    }
LAB_100af2a30:
    if (cVar5 != '\0') goto LAB_100af2b82;
    if ((int)DAT_102313ba0 < 0xf0500) {
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","pvsHostInfo",3,"Hide/skip real USB device: %s",
                      local_5e0 + *(long *)(local_5e0 + 0x10));
        if (*(int *)local_5e0 != -1) {
          if (*(int *)local_5e0 != 0) {
            LOCK();
            *(int *)local_5e0 = *(int *)local_5e0 + -1;
            local_538.sysname[0] = *(int *)local_5e0 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af3629;
          }
          QArrayData::deallocate(local_5e0,1,8);
        }
      }
    }
    else {
      if (1 < local_568 - 0xdU) goto LAB_100af2b82;
      if (2 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","pvsHostInfo",3,"Hide/skip USB disk %s",
                      local_5e8 + *(long *)(local_5e8 + 0x10));
        if (*(int *)local_5e8 != -1) {
          if (*(int *)local_5e8 != 0) {
            LOCK();
            *(int *)local_5e8 = *(int *)local_5e8 + -1;
            local_538.sysname[0] = *(int *)local_5e8 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af3629;
          }
          QArrayData::deallocate(local_5e8,1,8);
        }
      }
    }
  }
  else {
LAB_100af2b82:
    QString::QString(&local_558,0x7c);
    QString::section(&local_5f0,&local_580,&local_558,1,2,0);
    if (*(int *)local_558.field0_0x0 != -1) {
      if (*(int *)local_558.field0_0x0 != 0) {
        LOCK();
        *(int *)local_558.field0_0x0 = *(int *)local_558.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_558.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af2bf7;
      }
      QArrayData::deallocate((QArrayData *)local_558.field0_0x0,2,8);
    }
LAB_100af2bf7:
    QString::QString(&local_550,0x7c);
    QString::section(&local_5f8,&local_580,&local_550,5,5,0);
    if (*(int *)local_550.field0_0x0 != -1) {
      if (*(int *)local_550.field0_0x0 != 0) {
        LOCK();
        *(int *)local_550.field0_0x0 = *(int *)local_550.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_550.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af2c6c;
      }
      QArrayData::deallocate((QArrayData *)local_550.field0_0x0,2,8);
    }
LAB_100af2c6c:
    local_618 = (Data *)*param_3;
    if (*(int *)local_618 != -1) {
      if (*(int *)local_618 == 0) {
        QListData::detach((int)&local_618);
        lVar9 = (long)*(int *)(local_618 + 8);
        lVar1 = *param_3;
        if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_618 + lVar9 * 8) &&
           (lVar10 = *(int *)(local_618 + 0xc) - lVar9,
           lVar10 != 0 && lVar9 <= *(int *)(local_618 + 0xc))) {
          _memcpy(local_618 + lVar9 * 8 + 0x10,
                  (void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),lVar10 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_618 = *(int *)local_618 + 1;
        local_538.sysname[0] = *(int *)local_618 != 0;
        UNLOCK();
      }
    }
    local_610 = local_618 + (long)*(int *)(local_618 + 8) * 8 + 0x10;
    local_608 = local_618 + (long)*(int *)(local_618 + 0xc) * 8 + 0x10;
    local_600 = 1;
    plVar11 = (long *)0x0;
    if (*(int *)(local_618 + 8) != *(int *)(local_618 + 0xc)) {
      plVar11 = (long *)0x0;
      do {
        if (local_600 == 0) {
LAB_100af2f7a:
          local_610 = local_610 + 8;
          local_600 = 1;
        }
        else {
          plVar3 = *(long **)local_610;
          (**(code **)(*plVar3 + 0xb8))(&local_620,plVar3);
          QString::QString(&local_548,0x7c);
          QString::section(&local_628,&local_620,&local_548,1,2,0);
          if (*(int *)local_548.field0_0x0 != -1) {
            if (*(int *)local_548.field0_0x0 != 0) {
              LOCK();
              *(int *)local_548.field0_0x0 = *(int *)local_548.field0_0x0 + -1;
              local_538.sysname[0] = *(int *)local_548.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_100af2dcb;
            }
            QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
          }
LAB_100af2dcb:
          cVar5 = operator==(&local_628,&local_5f0);
          if (cVar5 == '\0') {
            cVar5 = '\0';
          }
          else {
            QString::QString(&local_540,0x7c);
            QString::section(&local_630,&local_620,&local_540,5,5,0);
            if (*(int *)local_540.field0_0x0 != -1) {
              if (*(int *)local_540.field0_0x0 != 0) {
                LOCK();
                *(int *)local_540.field0_0x0 = *(int *)local_540.field0_0x0 + -1;
                local_538.sysname[0] = *(int *)local_540.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_538.sysname[0]) goto LAB_100af2e53;
              }
              QArrayData::deallocate((QArrayData *)local_540.field0_0x0,2,8);
            }
LAB_100af2e53:
            cVar5 = operator==(&local_630,&local_5f8);
            if (*(int *)local_630.field0_0x0 != -1) {
              if (*(int *)local_630.field0_0x0 != 0) {
                LOCK();
                *(int *)local_630.field0_0x0 = *(int *)local_630.field0_0x0 + -1;
                local_538.sysname[0] = *(int *)local_630.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_538.sysname[0]) goto LAB_100af2eb3;
              }
              QArrayData::deallocate((QArrayData *)local_630.field0_0x0,2,8);
            }
          }
LAB_100af2eb3:
          if (*(int *)local_628.field0_0x0 != -1) {
            if (*(int *)local_628.field0_0x0 != 0) {
              LOCK();
              *(int *)local_628.field0_0x0 = *(int *)local_628.field0_0x0 + -1;
              local_538.sysname[0] = *(int *)local_628.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_100af2eef;
            }
            QArrayData::deallocate((QArrayData *)local_628.field0_0x0,2,8);
          }
LAB_100af2eef:
          if (cVar5 != '\0') {
            plVar11 = plVar3;
          }
          if (*(int *)local_620 != -1) {
            if (*(int *)local_620 != 0) {
              LOCK();
              *(int *)local_620 = *(int *)local_620 + -1;
              local_538.sysname[0] = *(int *)local_620 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_100af2f32;
            }
            QArrayData::deallocate(local_620,2,8);
          }
LAB_100af2f32:
          if (cVar5 == '\0') goto LAB_100af2f7a;
          local_610 = local_610 + 8;
          uVar8 = local_600 ^ 1;
          bVar14 = local_600 == 1;
          local_600 = uVar8;
          if (bVar14) break;
        }
      } while (local_610 != local_608);
    }
    if (*(int *)local_618 != -1) {
      if (*(int *)local_618 != 0) {
        LOCK();
        *(int *)local_618 = *(int *)local_618 + -1;
        local_538.sysname[0] = *(int *)local_618 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af2fe1;
      }
      QListData::dispose(local_618);
    }
LAB_100af2fe1:
    if (((plVar11 != (long *)0x0) && (iVar7 = FUN_100af4720(param_1,&local_580), iVar7 != 0)) &&
       (this != (CHwUsbDevice *)0x0)) {
      (**(code **)(*plVar11 + 0xb8))(&local_640,plVar11);
      FUN_100af40c0(&local_638,param_1,&local_640,&local_588,&local_568);
      if (*(int *)local_640 != -1) {
        if (*(int *)local_640 != 0) {
          LOCK();
          *(int *)local_640 = *(int *)local_640 + -1;
          local_538.sysname[0] = *(int *)local_640 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af3088;
        }
        QArrayData::deallocate(local_640,2,8);
      }
LAB_100af3088:
      pcVar4 = *(code **)(*plVar11 + 0xa0);
      local_648 = local_638;
      if (1 < *(int *)local_638 + 1U) {
        LOCK();
        *(int *)local_638 = *(int *)local_638 + 1;
        local_538.sysname[0] = *(int *)local_638 != 0;
        UNLOCK();
      }
      (*pcVar4)(plVar11,&local_648);
      if (*(int *)local_648 != -1) {
        if (*(int *)local_648 != 0) {
          LOCK();
          *(int *)local_648 = *(int *)local_648 + -1;
          local_538.sysname[0] = *(int *)local_648 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af30fc;
        }
        QArrayData::deallocate(local_648,2,8);
      }
LAB_100af30fc:
      if (1 < DAT_10230ffd0) {
        (**(code **)(*plVar11 + 0xb8))(&local_658,plVar11);
        QString::toUtf8();
        pQVar12 = local_650;
        lVar1 = *(long *)(local_650 + 0x10);
        QString::toUtf8();
        FUN_100df99c0("","pvsHostInfo",2,"LOOKUP2 <%s> <%s>",pQVar12 + lVar1,
                      local_660 + *(long *)(local_660 + 0x10));
        if (*(int *)local_660 != -1) {
          if (*(int *)local_660 != 0) {
            LOCK();
            *(int *)local_660 = *(int *)local_660 + -1;
            local_538.sysname[0] = *(int *)local_660 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af31c1;
          }
          QArrayData::deallocate(local_660,1,8);
        }
LAB_100af31c1:
        if (*(int *)local_650 != -1) {
          if (*(int *)local_650 != 0) {
            LOCK();
            *(int *)local_650 = *(int *)local_650 + -1;
            local_538.sysname[0] = *(int *)local_650 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af31fd;
          }
          QArrayData::deallocate(local_650,1,8);
        }
LAB_100af31fd:
        if (*(int *)local_658 != -1) {
          if (*(int *)local_658 != 0) {
            LOCK();
            *(int *)local_658 = *(int *)local_658 + -1;
            local_538.sysname[0] = *(int *)local_658 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_100af3239;
          }
          QArrayData::deallocate(local_658,2,8);
        }
      }
LAB_100af3239:
      if (*(int *)local_638 != -1) {
        if (*(int *)local_638 != 0) {
          LOCK();
          *(int *)local_638 = *(int *)local_638 + -1;
          local_538.sysname[0] = *(int *)local_638 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af3275;
        }
        QArrayData::deallocate(local_638,2,8);
      }
    }
LAB_100af3275:
    if (this == (CHwUsbDevice *)0x0) {
      this = operator_new(0xc0);
      CHwUsbDevice::CHwUsbDevice(this);
      local_578 = this;
      FUN_100af40c0(&local_668,param_1,&local_580,&local_588,&local_568);
      QString::operator=(&local_570,&local_668);
      if (*(int *)local_668.field0_0x0 != -1) {
        if (*(int *)local_668.field0_0x0 != 0) {
          LOCK();
          *(int *)local_668.field0_0x0 = *(int *)local_668.field0_0x0 + -1;
          local_538.sysname[0] = *(int *)local_668.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af3311;
        }
        QArrayData::deallocate((QArrayData *)local_668.field0_0x0,2,8);
      }
    }
LAB_100af3311:
    if (1 < DAT_10230ffd0) {
      QString::toUtf8();
      pQVar13 = local_670 + *(long *)(local_670 + 0x10);
      QString::toUtf8();
      pQVar12 = local_678 + *(long *)(local_678 + 0x10);
      FUN_100da8850(&local_688,local_568);
      QString::toUtf8();
      FUN_100df99c0("","pvsHostInfo",2,"LOOKUP1 <%s> <%s> <%s>",pQVar13,pQVar12,
                    local_680 + *(long *)(local_680 + 0x10));
      if (*(int *)local_680 != -1) {
        if (*(int *)local_680 != 0) {
          LOCK();
          *(int *)local_680 = *(int *)local_680 + -1;
          local_538.sysname[0] = *(int *)local_680 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af33f4;
        }
        QArrayData::deallocate(local_680,1,8);
      }
LAB_100af33f4:
      if (*(int *)local_688 != -1) {
        if (*(int *)local_688 != 0) {
          LOCK();
          *(int *)local_688 = *(int *)local_688 + -1;
          local_538.sysname[0] = *(int *)local_688 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af3430;
        }
        QArrayData::deallocate(local_688,2,8);
      }
LAB_100af3430:
      if (*(int *)local_678 != -1) {
        if (*(int *)local_678 != 0) {
          LOCK();
          *(int *)local_678 = *(int *)local_678 + -1;
          local_538.sysname[0] = *(int *)local_678 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af346c;
        }
        QArrayData::deallocate(local_678,1,8);
      }
LAB_100af346c:
      if (*(int *)local_670 != -1) {
        if (*(int *)local_670 != 0) {
          LOCK();
          *(int *)local_670 = *(int *)local_670 + -1;
          local_538.sysname[0] = *(int *)local_670 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_100af34a8;
        }
        QArrayData::deallocate(local_670,1,8);
      }
    }
LAB_100af34a8:
    pcVar4 = *(code **)(*(long *)this + 0xb0);
    local_690 = local_580.field0_0x0;
    if (1 < *(int *)local_580.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + 1;
      local_538.sysname[0] = *(int *)local_580.field0_0x0 != 0;
      UNLOCK();
    }
    (*pcVar4)(this,&local_690);
    if (*(int *)local_690 != -1) {
      if (*(int *)local_690 != 0) {
        LOCK();
        *(int *)local_690 = *(int *)local_690 + -1;
        local_538.sysname[0] = *(int *)local_690 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af351c;
      }
      QArrayData::deallocate((QArrayData *)local_690,2,8);
    }
LAB_100af351c:
    pcVar4 = *(code **)(*(long *)this + 0xa0);
    local_698 = (QArrayData *)local_570.field0_0x0;
    if (1 < *(int *)local_570.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + 1;
      local_538.sysname[0] = *(int *)local_570.field0_0x0 != 0;
      UNLOCK();
    }
    (*pcVar4)(this,&local_698);
    if (*(int *)local_698 != -1) {
      if (*(int *)local_698 != 0) {
        LOCK();
        *(int *)local_698 = *(int *)local_698 + -1;
        local_538.sysname[0] = *(int *)local_698 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af3590;
      }
      QArrayData::deallocate(local_698,2,8);
    }
LAB_100af3590:
    CHwUsbDevice::setUsbType(this,local_568);
    FUN_100af7dc0(param_3,&local_578);
    if (*(int *)local_5f8.field0_0x0 != -1) {
      if (*(int *)local_5f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5f8.field0_0x0 = *(int *)local_5f8.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_5f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af35ed;
      }
      QArrayData::deallocate((QArrayData *)local_5f8.field0_0x0,2,8);
    }
LAB_100af35ed:
    if (*(int *)local_5f0.field0_0x0 != -1) {
      if (*(int *)local_5f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5f0.field0_0x0 = *(int *)local_5f0.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_5f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_100af3629;
      }
      QArrayData::deallocate((QArrayData *)local_5f0.field0_0x0,2,8);
    }
  }
LAB_100af3629:
  if (*(int *)local_588.field0_0x0 != -1) {
    if (*(int *)local_588.field0_0x0 != 0) {
      LOCK();
      *(int *)local_588.field0_0x0 = *(int *)local_588.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_588.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_100af3665;
    }
    QArrayData::deallocate((QArrayData *)local_588.field0_0x0,2,8);
  }
LAB_100af3665:
  if (*(int *)local_580.field0_0x0 != -1) {
    if (*(int *)local_580.field0_0x0 != 0) {
      LOCK();
      *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_580.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_100af36a1;
    }
    QArrayData::deallocate((QArrayData *)local_580.field0_0x0,2,8);
  }
LAB_100af36a1:
  if (*(int *)local_570.field0_0x0 != -1) {
    if (*(int *)local_570.field0_0x0 != 0) {
      LOCK();
      *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_570.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_100af36dd;
    }
    QArrayData::deallocate((QArrayData *)local_570.field0_0x0,2,8);
  }
LAB_100af36dd:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

