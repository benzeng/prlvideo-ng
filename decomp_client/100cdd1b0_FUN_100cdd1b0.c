
void FUN_100cdd1b0(void)

{
  float fVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  QArrayData *local_1508;
  QArrayData *local_1500;
  QArrayData *local_14f8;
  QArrayData *local_14f0;
  QArrayData *local_14e8;
  QArrayData *local_14e0;
  QArrayData *local_14d8;
  QArrayData *local_14d0;
  QArrayData *local_14c8;
  QArrayData *local_14c0;
  QArrayData *local_14b8;
  QArrayData *local_14b0;
  QArrayData *local_14a8;
  QArrayData *local_14a0;
  QArrayData *local_1498;
  QArrayData *local_1490;
  QArrayData *local_1488;
  QArrayData *local_1480;
  QArrayData *local_1478;
  QArrayData *local_1470;
  QArrayData *local_1468;
  QArrayData *local_1460;
  QArrayData *local_1458;
  QArrayData *local_1450;
  QArrayData *local_1448;
  QArrayData *local_1440;
  QArrayData *local_1438;
  QArrayData *local_1430;
  uint local_1424;
  QString local_1420;
  QArrayData *local_1418;
  QArrayData *local_1410;
  QString local_1408;
  undefined1 local_13f9;
  char local_13f8 [256];
  undefined1 local_12f8 [44];
  float local_12cc [1189];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_1420.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("\n------------ Event Tap Information ------------\n",0x31);
  local_1424 = 0;
  iVar7 = _CGGetEventTapList(100,local_12f8,&local_1424);
  if (iVar7 == 0) {
    if (local_1424 != 0) {
      pfVar12 = local_12cc;
      lVar9 = 0;
      do {
        local_1498 = (QArrayData *)
                     QString::fromAscii_helper
                               ("[%1] id:%2  loc:%3  opt:%4  mask:%5  pid1:%6  pid2:%7  enb:%8  latency: %9 < %10 < %11\n"
                                ,0x57);
        QString::arg(&local_1490,&local_1498,lVar9,3,10,0x20);
        QString::arg(&local_1488,&local_1490,(long)(int)pfVar12[-0xb],8,0x10,0x20);
        fVar1 = pfVar12[-10];
        if ((ulong)(uint)fVar1 < 4) {
          pcVar2 = (&PTR_s_HID_102259fe0)[(uint)fVar1];
          sVar8 = _strlen(pcVar2);
          local_14a0 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
        }
        else {
          QString::number((uint)&local_14a0,(int)fVar1);
        }
        QString::arg(&local_1480,&local_1488,&local_14a0,0,0x20);
        fVar1 = pfVar12[-9];
        if ((ulong)(uint)fVar1 < 2) {
          pcVar2 = (&PTR_s_Default_10225a000)[(uint)fVar1];
          sVar8 = _strlen(pcVar2);
          local_14a8 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
        }
        else {
          QString::number((uint)&local_14a8,(int)fVar1);
        }
        QString::arg(&local_1478,&local_1480,&local_14a8,0,0x20);
        QString::arg(&local_1470,&local_1478,(long)(int)pfVar12[-7],8,0x10,0x20);
        QString::arg(&local_1468,&local_1470,(long)(int)pfVar12[-5],5,10,0x20);
        QString::arg(&local_1460,&local_1468,(long)(int)pfVar12[-4],5,10,0x20);
        pcVar2 = (&PTR_s_no_102259fd0)[*(byte *)(pfVar12 + -3)];
        sVar8 = _strlen(pcVar2);
        local_14b0 = (QArrayData *)QString::fromAscii_helper(pcVar2,(int)sVar8);
        QString::arg(&local_1458,&local_1460,&local_14b0,0,0x20);
        QString::arg((double)pfVar12[-2],&local_1450,&local_1458,0,0x66,2,0x20);
        QString::arg((double)pfVar12[-1],&local_1448,&local_1450,0,0x66,2,0x20);
        QString::arg((double)*pfVar12,&local_1440,&local_1448,0,0x66,2,0x20);
        QString::append(&local_1420);
        if (*(int *)local_1440 != -1) {
          if (*(int *)local_1440 != 0) {
            LOCK();
            *(int *)local_1440 = *(int *)local_1440 + -1;
            local_13f9 = *(int *)local_1440 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd5fd;
          }
          QArrayData::deallocate(local_1440,2,8);
        }
LAB_100cdd5fd:
        if (*(int *)local_1448 != -1) {
          if (*(int *)local_1448 != 0) {
            LOCK();
            *(int *)local_1448 = *(int *)local_1448 + -1;
            local_13f9 = *(int *)local_1448 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd639;
          }
          QArrayData::deallocate(local_1448,2,8);
        }
LAB_100cdd639:
        if (*(int *)local_1450 != -1) {
          if (*(int *)local_1450 != 0) {
            LOCK();
            *(int *)local_1450 = *(int *)local_1450 + -1;
            local_13f9 = *(int *)local_1450 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd675;
          }
          QArrayData::deallocate(local_1450,2,8);
        }
LAB_100cdd675:
        if (*(int *)local_1458 != -1) {
          if (*(int *)local_1458 != 0) {
            LOCK();
            *(int *)local_1458 = *(int *)local_1458 + -1;
            local_13f9 = *(int *)local_1458 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd6b1;
          }
          QArrayData::deallocate(local_1458,2,8);
        }
LAB_100cdd6b1:
        if (*(int *)local_14b0 != -1) {
          if (*(int *)local_14b0 != 0) {
            LOCK();
            *(int *)local_14b0 = *(int *)local_14b0 + -1;
            local_13f9 = *(int *)local_14b0 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd6ed;
          }
          QArrayData::deallocate(local_14b0,2,8);
        }
LAB_100cdd6ed:
        if (*(int *)local_1460 != -1) {
          if (*(int *)local_1460 != 0) {
            LOCK();
            *(int *)local_1460 = *(int *)local_1460 + -1;
            local_13f9 = *(int *)local_1460 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd729;
          }
          QArrayData::deallocate(local_1460,2,8);
        }
LAB_100cdd729:
        if (*(int *)local_1468 != -1) {
          if (*(int *)local_1468 != 0) {
            LOCK();
            *(int *)local_1468 = *(int *)local_1468 + -1;
            local_13f9 = *(int *)local_1468 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd765;
          }
          QArrayData::deallocate(local_1468,2,8);
        }
LAB_100cdd765:
        if (*(int *)local_1470 != -1) {
          if (*(int *)local_1470 != 0) {
            LOCK();
            *(int *)local_1470 = *(int *)local_1470 + -1;
            local_13f9 = *(int *)local_1470 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd7a1;
          }
          QArrayData::deallocate(local_1470,2,8);
        }
LAB_100cdd7a1:
        if (*(int *)local_1478 != -1) {
          if (*(int *)local_1478 != 0) {
            LOCK();
            *(int *)local_1478 = *(int *)local_1478 + -1;
            local_13f9 = *(int *)local_1478 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd7dd;
          }
          QArrayData::deallocate(local_1478,2,8);
        }
LAB_100cdd7dd:
        if (*(int *)local_14a8 != -1) {
          if (*(int *)local_14a8 != 0) {
            LOCK();
            *(int *)local_14a8 = *(int *)local_14a8 + -1;
            local_13f9 = *(int *)local_14a8 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd819;
          }
          QArrayData::deallocate(local_14a8,2,8);
        }
LAB_100cdd819:
        if (*(int *)local_1480 != -1) {
          if (*(int *)local_1480 != 0) {
            LOCK();
            *(int *)local_1480 = *(int *)local_1480 + -1;
            local_13f9 = *(int *)local_1480 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd855;
          }
          QArrayData::deallocate(local_1480,2,8);
        }
LAB_100cdd855:
        if (*(int *)local_14a0 != -1) {
          if (*(int *)local_14a0 != 0) {
            LOCK();
            *(int *)local_14a0 = *(int *)local_14a0 + -1;
            local_13f9 = *(int *)local_14a0 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd891;
          }
          QArrayData::deallocate(local_14a0,2,8);
        }
LAB_100cdd891:
        if (*(int *)local_1488 != -1) {
          if (*(int *)local_1488 != 0) {
            LOCK();
            *(int *)local_1488 = *(int *)local_1488 + -1;
            local_13f9 = *(int *)local_1488 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd8cd;
          }
          QArrayData::deallocate(local_1488,2,8);
        }
LAB_100cdd8cd:
        if (*(int *)local_1490 != -1) {
          if (*(int *)local_1490 != 0) {
            LOCK();
            *(int *)local_1490 = *(int *)local_1490 + -1;
            local_13f9 = *(int *)local_1490 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd909;
          }
          QArrayData::deallocate(local_1490,2,8);
        }
LAB_100cdd909:
        if (*(int *)local_1498 != -1) {
          if (*(int *)local_1498 != 0) {
            LOCK();
            *(int *)local_1498 = *(int *)local_1498 + -1;
            local_13f9 = *(int *)local_1498 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cdd945;
          }
          QArrayData::deallocate(local_1498,2,8);
        }
LAB_100cdd945:
        lVar9 = lVar9 + 1;
        pfVar12 = pfVar12 + 0xc;
      } while ((uint)lVar9 < local_1424);
    }
  }
  else {
    local_1438 = (QArrayData *)QString::fromAscii_helper("Can\'t get event tap list (%1)\n",0x1e);
    QString::arg(&local_1430,&local_1438,(long)iVar7,8,0x10,0x20);
    QString::append(&local_1420);
    if (*(int *)local_1430 != -1) {
      if (*(int *)local_1430 != 0) {
        LOCK();
        *(int *)local_1430 = *(int *)local_1430 + -1;
        local_13f9 = *(int *)local_1430 != 0;
        UNLOCK();
        if ((bool)local_13f9) goto LAB_100cdd2a4;
      }
      QArrayData::deallocate(local_1430,2,8);
    }
LAB_100cdd2a4:
    if (*(int *)local_1438 != -1) {
      if (*(int *)local_1438 != 0) {
        LOCK();
        *(int *)local_1438 = *(int *)local_1438 + -1;
        local_13f9 = *(int *)local_1438 != 0;
        UNLOCK();
        if ((bool)local_13f9) goto LAB_100cdd959;
      }
      QArrayData::deallocate(local_1438,2,8);
    }
  }
LAB_100cdd959:
  QString::fromUtf8_helper((char *)&local_1410,0x1ef5f39);
  QString::append(&local_1420);
  if (*(int *)local_1410 != -1) {
    if (*(int *)local_1410 != 0) {
      LOCK();
      *(int *)local_1410 = *(int *)local_1410 + -1;
      local_13f9 = *(int *)local_1410 != 0;
      UNLOCK();
      if ((bool)local_13f9) goto LAB_100cdd9c0;
    }
    QArrayData::deallocate(local_1410,2,8);
  }
LAB_100cdd9c0:
  QString::toUtf8();
  FUN_100df99c0("","hid",0,"%s",local_14b8 + *(long *)(local_14b8 + 0x10));
  if (*(int *)local_14b8 != -1) {
    if (*(int *)local_14b8 != 0) {
      LOCK();
      *(int *)local_14b8 = *(int *)local_14b8 + -1;
      local_13f9 = *(int *)local_14b8 != 0;
      UNLOCK();
      if ((bool)local_13f9) goto LAB_100cdda38;
    }
    QArrayData::deallocate(local_14b8,1,8);
  }
LAB_100cdda38:
  QString::fromUtf8_helper((char *)&local_1408,0x1ef5f69);
  QString::operator=(&local_1420,&local_1408);
  if (*(int *)local_1408.field0_0x0 != -1) {
    if (*(int *)local_1408.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1408.field0_0x0 = *(int *)local_1408.field0_0x0 + -1;
      local_13f9 = *(int *)local_1408.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_13f9) goto LAB_100cdda9f;
    }
    QArrayData::deallocate((QArrayData *)local_1408.field0_0x0,2,8);
  }
LAB_100cdda9f:
  lVar9 = _TISCreateInputSourceList(0,0);
  if (lVar9 != 0) {
    uVar3 = *(undefined8 *)PTR__kTISPropertyInputSourceID_1021e1bc8;
    uVar4 = *(undefined8 *)PTR__kTISPropertyInputSourceIsSelected_1021e1bd0;
    for (lVar13 = 0; lVar10 = _CFArrayGetCount(lVar9), lVar13 < lVar10; lVar13 = lVar13 + 1) {
      lVar10 = _CFArrayGetValueAtIndex(lVar9,lVar13);
      if (lVar10 == 0) {
        local_14c8 = (QArrayData *)QString::fromAscii_helper("[%1]: ???\n",10);
        QString::arg(&local_14c0,&local_14c8,lVar13,3,10,0x20);
        QString::append(&local_1420);
        if (*(int *)local_14c0 != -1) {
          if (*(int *)local_14c0 != 0) {
            LOCK();
            *(int *)local_14c0 = *(int *)local_14c0 + -1;
            local_13f9 = *(int *)local_14c0 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cddecd;
          }
          QArrayData::deallocate(local_14c0,2,8);
        }
LAB_100cddecd:
        if (*(int *)local_14c8 != -1) {
          if (*(int *)local_14c8 != 0) {
            LOCK();
            *(int *)local_14c8 = *(int *)local_14c8 + -1;
            local_13f9 = *(int *)local_14c8 != 0;
            UNLOCK();
            if ((bool)local_13f9) goto LAB_100cddae0;
          }
          QArrayData::deallocate(local_14c8,2,8);
        }
      }
      else {
        lVar11 = _TISGetInputSourceProperty(lVar10,uVar3);
        lVar10 = _TISGetInputSourceProperty(lVar10,uVar4);
        if (((lVar11 == 0) || (lVar10 == 0)) ||
           (cVar5 = _CFStringGetCString(lVar11,local_13f8,0x100,0x8000100), cVar5 == '\0')) {
          local_14d8 = (QArrayData *)QString::fromAscii_helper("[%1]: ???\n",10);
          QString::arg(&local_14d0,&local_14d8,lVar13,3,10,0x20);
          QString::append(&local_1420);
          if (*(int *)local_14d0 != -1) {
            if (*(int *)local_14d0 != 0) {
              LOCK();
              *(int *)local_14d0 = *(int *)local_14d0 + -1;
              local_13f9 = *(int *)local_14d0 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddded;
            }
            QArrayData::deallocate(local_14d0,2,8);
          }
LAB_100cddded:
          if (*(int *)local_14d8 != -1) {
            if (*(int *)local_14d8 != 0) {
              LOCK();
              *(int *)local_14d8 = *(int *)local_14d8 + -1;
              local_13f9 = *(int *)local_14d8 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddae0;
            }
            QArrayData::deallocate(local_14d8,2,8);
          }
        }
        else {
          local_14f8 = (QArrayData *)QString::fromAscii_helper("[%1]: %2 \"%3\"\n",0xe);
          QString::arg(&local_14f0,&local_14f8,lVar13,3,10,0x20);
          cVar5 = _CFBooleanGetValue(lVar10);
          uVar6 = 0x2a;
          if (cVar5 == '\0') {
            uVar6 = 0x20;
          }
          QString::arg(&local_14e8,&local_14f0,uVar6,0,0x20);
          _strlen(local_13f8);
          QString::fromUtf8_helper((char *)&local_1500,(int)local_13f8);
          QString::arg(&local_14e0,&local_14e8,&local_1500,0,0x20);
          QString::append(&local_1420);
          if (*(int *)local_14e0 != -1) {
            if (*(int *)local_14e0 != 0) {
              LOCK();
              *(int *)local_14e0 = *(int *)local_14e0 + -1;
              local_13f9 = *(int *)local_14e0 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddc5c;
            }
            QArrayData::deallocate(local_14e0,2,8);
          }
LAB_100cddc5c:
          if (*(int *)local_1500 != -1) {
            if (*(int *)local_1500 != 0) {
              LOCK();
              *(int *)local_1500 = *(int *)local_1500 + -1;
              local_13f9 = *(int *)local_1500 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddc98;
            }
            QArrayData::deallocate(local_1500,2,8);
          }
LAB_100cddc98:
          if (*(int *)local_14e8 != -1) {
            if (*(int *)local_14e8 != 0) {
              LOCK();
              *(int *)local_14e8 = *(int *)local_14e8 + -1;
              local_13f9 = *(int *)local_14e8 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddcd4;
            }
            QArrayData::deallocate(local_14e8,2,8);
          }
LAB_100cddcd4:
          if (*(int *)local_14f0 != -1) {
            if (*(int *)local_14f0 != 0) {
              LOCK();
              *(int *)local_14f0 = *(int *)local_14f0 + -1;
              local_13f9 = *(int *)local_14f0 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddd10;
            }
            QArrayData::deallocate(local_14f0,2,8);
          }
LAB_100cddd10:
          if (*(int *)local_14f8 != -1) {
            if (*(int *)local_14f8 != 0) {
              LOCK();
              *(int *)local_14f8 = *(int *)local_14f8 + -1;
              local_13f9 = *(int *)local_14f8 != 0;
              UNLOCK();
              if ((bool)local_13f9) goto LAB_100cddae0;
            }
            QArrayData::deallocate(local_14f8,2,8);
          }
        }
      }
LAB_100cddae0:
    }
    _CFRelease(lVar9);
  }
  QString::fromUtf8_helper((char *)&local_1418,0x1ef5f39);
  QString::append(&local_1420);
  if (*(int *)local_1418 != -1) {
    if (*(int *)local_1418 != 0) {
      LOCK();
      *(int *)local_1418 = *(int *)local_1418 + -1;
      local_13f9 = *(int *)local_1418 != 0;
      UNLOCK();
      if ((bool)local_13f9) goto LAB_100cddf8d;
    }
    QArrayData::deallocate(local_1418,2,8);
  }
LAB_100cddf8d:
  QString::toUtf8();
  FUN_100df99c0("","hid",0,"%s",local_1508 + *(long *)(local_1508 + 0x10));
  if (*(int *)local_1508 != -1) {
    if (*(int *)local_1508 != 0) {
      LOCK();
      *(int *)local_1508 = *(int *)local_1508 + -1;
      local_13f9 = *(int *)local_1508 != 0;
      UNLOCK();
      if ((bool)local_13f9) goto LAB_100cde005;
    }
    QArrayData::deallocate(local_1508,1,8);
  }
LAB_100cde005:
  if (*(int *)local_1420.field0_0x0 != -1) {
    if (*(int *)local_1420.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1420.field0_0x0 = *(int *)local_1420.field0_0x0 + -1;
      local_12f8[0] = *(int *)local_1420.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_12f8[0]) goto LAB_100cde041;
    }
    QArrayData::deallocate((QArrayData *)local_1420.field0_0x0,2,8);
  }
LAB_100cde041:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

