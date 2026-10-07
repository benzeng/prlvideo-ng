
void FUN_10064a330(long param_1,long *param_2,long *param_3,QString *param_4,QString *param_5,
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
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_570.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
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
    FUN_1008e3970("","pvsHostInfo",0,"LOOKUP0 system   name was patched <%s>",
                  local_590 + *(long *)(local_590 + 0x10));
    if (*(int *)local_590 != -1) {
      if (*(int *)local_590 != 0) {
        LOCK();
        *(int *)local_590 = *(int *)local_590 + -1;
        local_538.sysname[0] = *(int *)local_590 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064a484;
      }
      QArrayData::deallocate(local_590,1,8);
    }
  }
LAB_10064a484:
  cVar5 = operator==(&local_588,param_5);
  if (cVar5 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","pvsHostInfo",0,"LOOKUP0 friendly name was patched <%s>",
                  local_598 + *(long *)(local_598 + 0x10));
    if (*(int *)local_598 != -1) {
      if (*(int *)local_598 != 0) {
        LOCK();
        *(int *)local_598 = *(int *)local_598 + -1;
        local_538.sysname[0] = *(int *)local_598 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064a50f;
      }
      QArrayData::deallocate(local_598,1,8);
    }
  }
LAB_10064a50f:
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
LAB_10064a73a:
        local_5b0 = local_5b0 + 8;
        local_5a0 = 1;
      }
      else {
        (**(code **)(*(long *)pCVar2 + 0xb8))(&local_5c8,pCVar2);
        cVar5 = operator==(&local_580,&local_5c8);
        iVar7 = 0;
        if (cVar5 != '\0') {
          FUN_10064fa70(param_2,&local_5c0);
          local_578 = pCVar2;
          FUN_10064bf70(&local_5d0,param_1,&local_580,&local_588,&local_568);
          QString::operator=(&local_570,&local_5d0);
          iVar7 = -2;
          this = pCVar2;
          if (*(int *)local_5d0.field0_0x0 != -1) {
            if (*(int *)local_5d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_5d0.field0_0x0 = *(int *)local_5d0.field0_0x0 + -1;
              local_538.sysname[0] = *(int *)local_5d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_10064a6c1;
            }
            QArrayData::deallocate((QArrayData *)local_5d0.field0_0x0,2,8);
          }
        }
LAB_10064a6c1:
        if (*(int *)local_5c8.field0_0x0 != -1) {
          if (*(int *)local_5c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_5c8.field0_0x0 = *(int *)local_5c8.field0_0x0 + -1;
            local_538.sysname[0] = *(int *)local_5c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064a6fd;
          }
          QArrayData::deallocate((QArrayData *)local_5c8.field0_0x0,2,8);
        }
LAB_10064a6fd:
        if (iVar7 == 0) goto LAB_10064a73a;
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
      if ((bool)local_538.sysname[0]) goto LAB_10064a7a1;
    }
    QListData::dispose(local_5b8);
  }
LAB_10064a7a1:
  bVar6 = FUN_1006d81f0(1);
  if ((bVar6 & this == (CHwUsbDevice *)0x0) == 1) {
    if (DAT_1011bcb50 == 0) {
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
      DAT_1011bcb50 = uVar8;
      FUN_1008e3970("","pvsHostInfo",0,"enum_usb: kernel_ver 0x%08x",DAT_1011bcb50);
    }
    local_5d8 = (QArrayData *)QString::fromAscii_helper("VIRTUAL@",8);
    cVar5 = QString::startsWith(param_4,&local_5d8,1);
    if (*(int *)local_5d8 != -1) {
      if (*(int *)local_5d8 != 0) {
        LOCK();
        *(int *)local_5d8 = *(int *)local_5d8 + -1;
        local_538.sysname[0] = *(int *)local_5d8 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064a8e0;
      }
      QArrayData::deallocate(local_5d8,2,8);
    }
LAB_10064a8e0:
    if (cVar5 != '\0') goto LAB_10064aa32;
    if ((int)DAT_1011bcb50 < 0xf0500) {
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","pvsHostInfo",3,"Hide/skip real USB device: %s",
                      local_5e0 + *(long *)(local_5e0 + 0x10));
        if (*(int *)local_5e0 != -1) {
          if (*(int *)local_5e0 != 0) {
            LOCK();
            *(int *)local_5e0 = *(int *)local_5e0 + -1;
            local_538.sysname[0] = *(int *)local_5e0 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064b4d9;
          }
          QArrayData::deallocate(local_5e0,1,8);
        }
      }
    }
    else {
      if (1 < local_568 - 0xdU) goto LAB_10064aa32;
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","pvsHostInfo",3,"Hide/skip USB disk %s",
                      local_5e8 + *(long *)(local_5e8 + 0x10));
        if (*(int *)local_5e8 != -1) {
          if (*(int *)local_5e8 != 0) {
            LOCK();
            *(int *)local_5e8 = *(int *)local_5e8 + -1;
            local_538.sysname[0] = *(int *)local_5e8 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064b4d9;
          }
          QArrayData::deallocate(local_5e8,1,8);
        }
      }
    }
  }
  else {
LAB_10064aa32:
    QString::QString(&local_558,0x7c);
    QString::section(&local_5f0,&local_580,&local_558,1,2,0);
    if (*(int *)local_558.field0_0x0 != -1) {
      if (*(int *)local_558.field0_0x0 != 0) {
        LOCK();
        *(int *)local_558.field0_0x0 = *(int *)local_558.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_558.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064aaa7;
      }
      QArrayData::deallocate((QArrayData *)local_558.field0_0x0,2,8);
    }
LAB_10064aaa7:
    QString::QString(&local_550,0x7c);
    QString::section(&local_5f8,&local_580,&local_550,5,5,0);
    if (*(int *)local_550.field0_0x0 != -1) {
      if (*(int *)local_550.field0_0x0 != 0) {
        LOCK();
        *(int *)local_550.field0_0x0 = *(int *)local_550.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_550.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064ab1c;
      }
      QArrayData::deallocate((QArrayData *)local_550.field0_0x0,2,8);
    }
LAB_10064ab1c:
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
LAB_10064ae2a:
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
              if ((bool)local_538.sysname[0]) goto LAB_10064ac7b;
            }
            QArrayData::deallocate((QArrayData *)local_548.field0_0x0,2,8);
          }
LAB_10064ac7b:
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
                if ((bool)local_538.sysname[0]) goto LAB_10064ad03;
              }
              QArrayData::deallocate((QArrayData *)local_540.field0_0x0,2,8);
            }
LAB_10064ad03:
            cVar5 = operator==(&local_630,&local_5f8);
            if (*(int *)local_630.field0_0x0 != -1) {
              if (*(int *)local_630.field0_0x0 != 0) {
                LOCK();
                *(int *)local_630.field0_0x0 = *(int *)local_630.field0_0x0 + -1;
                local_538.sysname[0] = *(int *)local_630.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_538.sysname[0]) goto LAB_10064ad63;
              }
              QArrayData::deallocate((QArrayData *)local_630.field0_0x0,2,8);
            }
          }
LAB_10064ad63:
          if (*(int *)local_628.field0_0x0 != -1) {
            if (*(int *)local_628.field0_0x0 != 0) {
              LOCK();
              *(int *)local_628.field0_0x0 = *(int *)local_628.field0_0x0 + -1;
              local_538.sysname[0] = *(int *)local_628.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_10064ad9f;
            }
            QArrayData::deallocate((QArrayData *)local_628.field0_0x0,2,8);
          }
LAB_10064ad9f:
          if (cVar5 != '\0') {
            plVar11 = plVar3;
          }
          if (*(int *)local_620 != -1) {
            if (*(int *)local_620 != 0) {
              LOCK();
              *(int *)local_620 = *(int *)local_620 + -1;
              local_538.sysname[0] = *(int *)local_620 != 0;
              UNLOCK();
              if ((bool)local_538.sysname[0]) goto LAB_10064ade2;
            }
            QArrayData::deallocate(local_620,2,8);
          }
LAB_10064ade2:
          if (cVar5 == '\0') goto LAB_10064ae2a;
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
        if ((bool)local_538.sysname[0]) goto LAB_10064ae91;
      }
      QListData::dispose(local_618);
    }
LAB_10064ae91:
    if (((plVar11 != (long *)0x0) && (iVar7 = FUN_10064c5d0(param_1,&local_580), iVar7 != 0)) &&
       (this != (CHwUsbDevice *)0x0)) {
      (**(code **)(*plVar11 + 0xb8))(&local_640,plVar11);
      FUN_10064bf70(&local_638,param_1,&local_640,&local_588,&local_568);
      if (*(int *)local_640 != -1) {
        if (*(int *)local_640 != 0) {
          LOCK();
          *(int *)local_640 = *(int *)local_640 + -1;
          local_538.sysname[0] = *(int *)local_640 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064af38;
        }
        QArrayData::deallocate(local_640,2,8);
      }
LAB_10064af38:
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
          if ((bool)local_538.sysname[0]) goto LAB_10064afac;
        }
        QArrayData::deallocate(local_648,2,8);
      }
LAB_10064afac:
      if (1 < DAT_1011b55f8) {
        (**(code **)(*plVar11 + 0xb8))(&local_658,plVar11);
        QString::toUtf8();
        pQVar12 = local_650;
        lVar1 = *(long *)(local_650 + 0x10);
        QString::toUtf8();
        FUN_1008e3970("","pvsHostInfo",2,"LOOKUP2 <%s> <%s>",pQVar12 + lVar1,
                      local_660 + *(long *)(local_660 + 0x10));
        if (*(int *)local_660 != -1) {
          if (*(int *)local_660 != 0) {
            LOCK();
            *(int *)local_660 = *(int *)local_660 + -1;
            local_538.sysname[0] = *(int *)local_660 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064b071;
          }
          QArrayData::deallocate(local_660,1,8);
        }
LAB_10064b071:
        if (*(int *)local_650 != -1) {
          if (*(int *)local_650 != 0) {
            LOCK();
            *(int *)local_650 = *(int *)local_650 + -1;
            local_538.sysname[0] = *(int *)local_650 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064b0ad;
          }
          QArrayData::deallocate(local_650,1,8);
        }
LAB_10064b0ad:
        if (*(int *)local_658 != -1) {
          if (*(int *)local_658 != 0) {
            LOCK();
            *(int *)local_658 = *(int *)local_658 + -1;
            local_538.sysname[0] = *(int *)local_658 != 0;
            UNLOCK();
            if ((bool)local_538.sysname[0]) goto LAB_10064b0e9;
          }
          QArrayData::deallocate(local_658,2,8);
        }
      }
LAB_10064b0e9:
      if (*(int *)local_638 != -1) {
        if (*(int *)local_638 != 0) {
          LOCK();
          *(int *)local_638 = *(int *)local_638 + -1;
          local_538.sysname[0] = *(int *)local_638 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b125;
        }
        QArrayData::deallocate(local_638,2,8);
      }
    }
LAB_10064b125:
    if (this == (CHwUsbDevice *)0x0) {
      this = operator_new(0xc0);
      CHwUsbDevice::CHwUsbDevice(this);
      local_578 = this;
      FUN_10064bf70(&local_668,param_1,&local_580,&local_588,&local_568);
      QString::operator=(&local_570,&local_668);
      if (*(int *)local_668.field0_0x0 != -1) {
        if (*(int *)local_668.field0_0x0 != 0) {
          LOCK();
          *(int *)local_668.field0_0x0 = *(int *)local_668.field0_0x0 + -1;
          local_538.sysname[0] = *(int *)local_668.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b1c1;
        }
        QArrayData::deallocate((QArrayData *)local_668.field0_0x0,2,8);
      }
    }
LAB_10064b1c1:
    if (1 < DAT_1011b55f8) {
      QString::toUtf8();
      pQVar13 = local_670 + *(long *)(local_670 + 0x10);
      QString::toUtf8();
      pQVar12 = local_678 + *(long *)(local_678 + 0x10);
      FUN_1006fd930(&local_688,local_568);
      QString::toUtf8();
      FUN_1008e3970("","pvsHostInfo",2,"LOOKUP1 <%s> <%s> <%s>",pQVar13,pQVar12,
                    local_680 + *(long *)(local_680 + 0x10));
      if (*(int *)local_680 != -1) {
        if (*(int *)local_680 != 0) {
          LOCK();
          *(int *)local_680 = *(int *)local_680 + -1;
          local_538.sysname[0] = *(int *)local_680 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b2a4;
        }
        QArrayData::deallocate(local_680,1,8);
      }
LAB_10064b2a4:
      if (*(int *)local_688 != -1) {
        if (*(int *)local_688 != 0) {
          LOCK();
          *(int *)local_688 = *(int *)local_688 + -1;
          local_538.sysname[0] = *(int *)local_688 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b2e0;
        }
        QArrayData::deallocate(local_688,2,8);
      }
LAB_10064b2e0:
      if (*(int *)local_678 != -1) {
        if (*(int *)local_678 != 0) {
          LOCK();
          *(int *)local_678 = *(int *)local_678 + -1;
          local_538.sysname[0] = *(int *)local_678 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b31c;
        }
        QArrayData::deallocate(local_678,1,8);
      }
LAB_10064b31c:
      if (*(int *)local_670 != -1) {
        if (*(int *)local_670 != 0) {
          LOCK();
          *(int *)local_670 = *(int *)local_670 + -1;
          local_538.sysname[0] = *(int *)local_670 != 0;
          UNLOCK();
          if ((bool)local_538.sysname[0]) goto LAB_10064b358;
        }
        QArrayData::deallocate(local_670,1,8);
      }
    }
LAB_10064b358:
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
        if ((bool)local_538.sysname[0]) goto LAB_10064b3cc;
      }
      QArrayData::deallocate((QArrayData *)local_690,2,8);
    }
LAB_10064b3cc:
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
        if ((bool)local_538.sysname[0]) goto LAB_10064b440;
      }
      QArrayData::deallocate(local_698,2,8);
    }
LAB_10064b440:
    CHwUsbDevice::setUsbType(this,local_568);
    FUN_10064fbc0(param_3,&local_578);
    if (*(int *)local_5f8.field0_0x0 != -1) {
      if (*(int *)local_5f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5f8.field0_0x0 = *(int *)local_5f8.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_5f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064b49d;
      }
      QArrayData::deallocate((QArrayData *)local_5f8.field0_0x0,2,8);
    }
LAB_10064b49d:
    if (*(int *)local_5f0.field0_0x0 != -1) {
      if (*(int *)local_5f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_5f0.field0_0x0 = *(int *)local_5f0.field0_0x0 + -1;
        local_538.sysname[0] = *(int *)local_5f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_538.sysname[0]) goto LAB_10064b4d9;
      }
      QArrayData::deallocate((QArrayData *)local_5f0.field0_0x0,2,8);
    }
  }
LAB_10064b4d9:
  if (*(int *)local_588.field0_0x0 != -1) {
    if (*(int *)local_588.field0_0x0 != 0) {
      LOCK();
      *(int *)local_588.field0_0x0 = *(int *)local_588.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_588.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_10064b515;
    }
    QArrayData::deallocate((QArrayData *)local_588.field0_0x0,2,8);
  }
LAB_10064b515:
  if (*(int *)local_580.field0_0x0 != -1) {
    if (*(int *)local_580.field0_0x0 != 0) {
      LOCK();
      *(int *)local_580.field0_0x0 = *(int *)local_580.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_580.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_10064b551;
    }
    QArrayData::deallocate((QArrayData *)local_580.field0_0x0,2,8);
  }
LAB_10064b551:
  if (*(int *)local_570.field0_0x0 != -1) {
    if (*(int *)local_570.field0_0x0 != 0) {
      LOCK();
      *(int *)local_570.field0_0x0 = *(int *)local_570.field0_0x0 + -1;
      local_538.sysname[0] = *(int *)local_570.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_538.sysname[0]) goto LAB_10064b58d;
    }
    QArrayData::deallocate((QArrayData *)local_570.field0_0x0,2,8);
  }
LAB_10064b58d:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

