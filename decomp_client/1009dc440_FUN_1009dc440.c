
void FUN_1009dc440(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  bool bVar12;
  undefined *puVar13;
  Data *pDVar14;
  char cVar15;
  char cVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  Data *pDVar33;
  QString *this;
  undefined1 auVar34 [16];
  QArrayData *in_stack_fffffffffffffe28;
  undefined4 uVar35;
  long local_158;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  long local_f0;
  undefined1 local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  long local_d0;
  undefined1 local_c8;
  Data *local_c0;
  QArrayData *local_b8;
  long *local_b0;
  uint local_a4;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  QString local_58;
  long local_50 [2];
  QString local_40;
  undefined1 local_31;
  
  puVar13 = PTR_shared_null_1021e1288;
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  puVar17 = operator_new(0x20);
  *puVar17 = puVar13;
  *(undefined2 *)(puVar17 + 1) = 0;
  auVar34._8_4_ = (int)puVar13;
  auVar34._0_8_ = puVar13;
  auVar34._12_4_ = (int)((ulong)puVar13 >> 0x20);
  *(undefined1 (*) [16])(puVar17 + 2) = auVar34;
  plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar18 == (long *)0x0) {
    FUN_1009debe0(puVar17);
    operator_delete(puVar17);
    plVar18 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar18 + 1) = 1;
    plVar18[2] = (long)puVar17;
    *plVar18 = (long)&PTR_FUN_10227e3b8;
  }
  local_b0 = plVar18;
  if (3 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","ProxyInfo",4,"Try to found proxy for host \'%s\'.",
                  local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009dc564;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
  }
LAB_1009dc564:
  QString::toUtf8();
  lVar19 = _CFURLCreateAbsoluteURLWithBytes
                     (*(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,
                      local_98 + *(long *)(local_98 + 0x10),(long)*(int *)(local_98 + 4),0x8000100,0
                      ,0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009dc5d8;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1009dc5d8:
  if (lVar19 == 0) {
    puVar17 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar17 = "Wrong user url";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar17,PTR_typeinfo_1021e1778,0);
  }
  lVar20 = _CFNetworkCopySystemProxySettings();
  if (lVar20 == 0) {
    puVar17 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar17 = "CFNetworkCopySystemProxySettings() failed";
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar17,PTR_typeinfo_1021e1778,0);
  }
  lVar21 = _CFNetworkCopyProxiesForURL(lVar19,lVar20);
  if (2 < DAT_10230ffd0) {
    uVar22 = 0;
    if (lVar21 != 0) {
      uVar22 = _CFArrayGetCount(lVar21);
    }
    FUN_100df99c0("","ProxyInfo",3,"Added %ld proxy entries from system settings",uVar22);
  }
  local_c0 = (Data *)PTR_shared_null_1021e15e8;
  lVar23 = _CFArrayGetCount(lVar21);
  if (0 < lVar23) {
    lVar32 = 0;
    do {
      lVar24 = _CFArrayGetValueAtIndex(lVar21,lVar32);
      if (lVar24 == 0) {
        puVar17 = (undefined8 *)___cxa_allocate_exception(8);
        *puVar17 = "CFArrayGetValueAtIndex() failed";
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar17,PTR_typeinfo_1021e1778,0);
      }
      local_c8 = 0;
      local_d0 = lVar24;
      FUN_1009ded00(&local_c0,&local_d0);
      lVar32 = lVar32 + 1;
    } while (lVar32 < lVar23);
  }
  uVar22 = *(undefined8 *)PTR__kCFProxyTypeKey_1021e1938;
  uVar3 = *(undefined8 *)PTR__kCFProxyTypeNone_1021e1940;
  uVar4 = *(undefined8 *)PTR__kCFProxyTypeAutoConfigurationURL_1021e1918;
  uVar5 = *(undefined8 *)PTR__kCFProxyTypeHTTP_1021e1928;
  uVar6 = *(undefined8 *)PTR__kCFProxyTypeHTTPS_1021e1930;
  uVar7 = *(undefined8 *)PTR__kCFProxyHostNameKey_1021e1908;
  uVar8 = *(undefined8 *)PTR__kCFProxyPortNumberKey_1021e1910;
  uVar9 = *(undefined8 *)PTR__kCFProxyAutoConfigurationURLKey_1021e1900;
  uVar10 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_1021e1950;
  local_158 = 0;
  for (lVar23 = 0; uVar35 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20),
      lVar23 < (long)(int)*(uint *)(local_c0 + 0xc) - (long)(int)*(uint *)(local_c0 + 8);
      lVar23 = lVar23 + 1) {
    if (local_a0.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      QString::operator=(&local_a0,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009dc873;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
LAB_1009dc873:
    local_a4 = 0;
    uVar31 = *(uint *)local_c0;
    if (1 < uVar31) {
      FUN_1009df010(&local_c0,*(uint *)(local_c0 + 4));
      uVar31 = *(uint *)local_c0;
    }
    uVar30 = *(uint *)(local_c0 + 8);
    uVar25 = **(undefined8 **)(local_c0 + ((int)uVar30 + lVar23) * 8 + 0x10);
    if (1 < uVar31) {
      FUN_1009df010(&local_c0,*(uint *)(local_c0 + 4));
      uVar30 = *(uint *)(local_c0 + 8);
    }
    cVar16 = *(char *)(*(long *)(local_c0 + ((int)uVar30 + lVar23) * 8 + 0x10) + 8);
    lVar32 = _CFDictionaryGetValue(uVar25,uVar22);
    if (lVar32 == 0) {
      puVar17 = (undefined8 *)___cxa_allocate_exception(8);
      *puVar17 = "!proxyType";
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar17,PTR_typeinfo_1021e1778,0);
    }
    cVar15 = _CFEqual(lVar32,uVar3);
    uVar35 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
    if (cVar15 != '\0') {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","ProxyInfo",3,"DIRECT connection should be used for url.");
      }
      break;
    }
    cVar15 = _CFEqual(lVar32,uVar4);
    if (cVar15 == '\0') {
      cVar15 = _CFEqual(lVar32,uVar5);
      if (((cVar15 == '\0') && (cVar15 = _CFEqual(lVar32,uVar6), cVar15 == '\0')) &&
         (cVar15 = _CFEqual(lVar32), cVar15 == '\0')) {
LAB_1009dcc6e:
        uVar31 = local_a4;
        uVar35 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
        if (cVar16 == '\0') break;
        QTcpSocket::QTcpSocket((QTcpSocket *)local_50,(QObject *)0x0);
        (**(code **)(local_50[0] + 0xe8))((QTcpSocket *)local_50,&local_a0,uVar31 & 0xffff,3,2);
        cVar16 = (**(code **)(local_50[0] + 0x128))((QTcpSocket *)local_50,2000);
        QAbstractSocket::abort();
        QTcpSocket::~QTcpSocket((QTcpSocket *)local_50);
        uVar35 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
        if (cVar16 != '\0') break;
        if (2 < DAT_10230ffd0) {
          QString::toUtf8();
          uVar31 = local_a4;
          lVar32 = *(long *)(local_100 + 0x10);
          QString::toUtf8();
          in_stack_fffffffffffffe28 = local_108 + *(long *)(local_108 + 0x10);
          FUN_100df99c0("","ProxyInfo",3,
                        "Proxy was found but it is unavalable now! It will be skipped. Proxy \'%s:%d\' %s"
                        ,local_100 + lVar32,uVar31,in_stack_fffffffffffffe28);
          if (*(int *)local_108 != -1) {
            if (*(int *)local_108 != 0) {
              LOCK();
              *(int *)local_108 = *(int *)local_108 + -1;
              local_31 = *(int *)local_108 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009dcd99;
            }
            QArrayData::deallocate(local_108,1,8);
          }
LAB_1009dcd99:
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009dcdcf;
            }
            QArrayData::deallocate(local_100,1,8);
          }
        }
LAB_1009dcdcf:
        if (local_a0.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
          local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          QString::operator=(&local_a0,&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009dce31;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
        }
LAB_1009dce31:
        local_a4 = 0;
      }
      else {
        lVar32 = _CFDictionaryGetValue(uVar25,uVar7);
        if (lVar32 == 0) goto LAB_1009dc7e0;
        FUN_1009dbc60(&local_f8,lVar32);
        QString::operator=(&local_a0,&local_f8);
        if (*(int *)local_f8.field0_0x0 != -1) {
          if (*(int *)local_f8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
            local_31 = *(int *)local_f8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009dcc29;
          }
          QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
        }
LAB_1009dcc29:
        if (*(int *)(local_a0.field0_0x0 + 4) != 0) {
          lVar32 = _CFDictionaryGetValue(uVar25,uVar8);
          if ((lVar32 != 0) && (cVar15 = _CFNumberGetValue(lVar32,9,&local_a4), cVar15 != '\0'))
          goto LAB_1009dcc6e;
          if (local_a0.field0_0x0 != (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288) {
            local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
            QString::operator=(&local_a0,&local_58);
            if (*(int *)local_58.field0_0x0 != -1) {
              if (*(int *)local_58.field0_0x0 != 0) {
                LOCK();
                *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
                local_31 = *(int *)local_58.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1009dc7e0;
              }
              QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
            }
          }
        }
      }
    }
    else {
      lVar32 = _CFDictionaryGetValue(uVar25,uVar9);
      if (lVar32 == 0) goto LAB_1009dc7e0;
      if (2 < DAT_10230ffd0) {
        uVar25 = _CFURLGetString(lVar32);
        FUN_1009dbc60(&local_e0,uVar25);
        QString::toUtf8();
        FUN_100df99c0("","ProxyInfo",3,"PAC url is \'%s\'",local_d8 + *(long *)(local_d8 + 0x10));
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009dc9e7;
          }
          QArrayData::deallocate(local_d8,1,8);
        }
LAB_1009dc9e7:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009dca1d;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
LAB_1009dca1d:
      lVar24 = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar26 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
        lVar24 = 0;
        if (lVar26 != 0) {
          lVar24 = ___dynamic_cast(lVar26,&PTR_vtable_10227e330,&PTR_vtable_1022367c0,0);
        }
      }
      QMutex::lock();
      if (lVar24 == 0) {
        in_stack_fffffffffffffe28 =
             (QArrayData *)CONCAT44((int)((ulong)in_stack_fffffffffffffe28 >> 0x20),0x244);
        FUN_100df99c0("","ProxyInfo",0,"ASSERT( %s ) occured in %s:%d [%s]","pCancelObj",
                      "CProxyInfo_mac.cpp",in_stack_fffffffffffffe28,"getProxiesFromPacFile");
      }
      local_60 = 0;
      local_88 = 0;
      local_80 = &local_60;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      lVar26 = _CFNetworkCopySystemProxySettings();
      lVar27 = _CFNetworkCopyProxiesForURL(lVar19,lVar26);
      lVar32 = _CFNetworkExecuteProxyAutoConfigurationURL(lVar32,lVar19,FUN_1009de660,&local_88);
      if (lVar32 == 0) {
        FUN_100df99c0("","ProxyInfo",0,"Unable to start runloop to get proxies from PAC script");
        lVar24 = 0;
      }
      else {
        uVar25 = _CFRunLoopGetCurrent();
        _CFRunLoopAddSource(uVar25,lVar32,uVar10);
        QMutex::lock();
        if (*(char *)(lVar24 + 8) == '\0') {
          if (*(long *)(lVar24 + 0x10) != 0) {
            in_stack_fffffffffffffe28 =
                 (QArrayData *)CONCAT44((int)((ulong)in_stack_fffffffffffffe28 >> 0x20),0x20b);
            FUN_100df99c0("","ProxyInfo",0,"ASSERT( %s ) occured in %s:%d [%s]","!m_runLoopRef",
                          "CProxyInfo_mac.cpp",in_stack_fffffffffffffe28,"setRunLoopRef");
          }
          *(undefined8 *)(lVar24 + 0x10) = uVar25;
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        QMutex::unlock();
        if (bVar12) {
          _CFRunLoopRun();
          _CFRunLoopRemoveSource(uVar25,lVar32,uVar10);
          lVar24 = 0;
          if (local_60 != 0) {
            lVar28 = _CFGetTypeID();
            lVar29 = _CFArrayGetTypeID();
            lVar24 = local_60;
            if (lVar28 != lVar29) {
              lVar28 = _CFGetTypeID(local_60);
              lVar29 = _CFDictionaryGetTypeID();
              lVar24 = 0;
              if (lVar28 == lVar29) {
                lVar24 = _CFArrayCreateMutable(0,0,0);
                _CFArrayAppendValue(lVar24,local_60);
              }
            }
          }
        }
        else {
          FUN_100df99c0("","ProxyInfo",0,
                        "Runloop to get proxies from PAC script was canceled before start.");
          lVar24 = 0;
        }
        _CFRelease(lVar32);
      }
      if (lVar27 != 0) {
        _CFRelease();
      }
      if (lVar26 != 0) {
        _CFRelease(lVar26);
      }
      QMutex::unlock();
      if (local_158 != 0) {
        _CFRelease();
      }
      if (lVar24 != 0) {
        _CFRetain(lVar24);
        _CFRelease(lVar24);
      }
      if (2 < DAT_10230ffd0) {
        uVar25 = 0;
        if (lVar24 != 0) {
          uVar25 = _CFArrayGetCount(lVar24);
        }
        FUN_100df99c0("","ProxyInfo",3,"found %ld proxy entries from PAC",uVar25);
      }
      local_158 = 0;
      if (lVar24 != 0) {
        lVar32 = _CFArrayGetCount(lVar24);
        lVar26 = 0;
        local_158 = lVar24;
        if (0 < lVar32) {
          do {
            lVar27 = _CFArrayGetValueAtIndex(lVar24,lVar26);
            if (lVar27 == 0) {
              puVar17 = (undefined8 *)___cxa_allocate_exception(8);
              *puVar17 = "CFArrayGetValueAtIndex(pacProxiesRef) failed";
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(puVar17,PTR_typeinfo_1021e1778,0);
            }
            local_e8 = 1;
            local_f0 = lVar27;
            FUN_1009de9f0(&local_c0,lVar23 + 1 + lVar26,&local_f0);
            lVar26 = lVar26 + 1;
          } while (lVar26 < lVar32);
        }
      }
    }
LAB_1009dc7e0:
  }
  if (*(int *)(local_a0.field0_0x0 + 4) == 0) {
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","ProxyInfo",3,"Proxy was not found for url. Direct connection will be used.")
      ;
    }
  }
  else if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","ProxyInfo",3,"Proxy \'%s:%d\' was found for url.",
                  local_110 + *(long *)(local_110 + 0x10),local_a4);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009dd3f4;
      }
      QArrayData::deallocate(local_110,1,8);
    }
  }
LAB_1009dd3f4:
  if ((plVar18 == (long *)0x0) || (plVar18[2] == 0)) {
    FUN_100df99c0("","ProxyInfo",0,"ASSERT( %s ) occured in %s:%d [%s]","pProxyResult",
                  "CProxyInfo_mac.cpp",CONCAT44(uVar35,0x1b5),"run");
    this = (QString *)0x0;
    if (plVar18 != (long *)0x0) goto LAB_1009dd449;
  }
  else {
LAB_1009dd449:
    this = (QString *)plVar18[2];
  }
  QString::operator=(this,&local_a0);
  *(undefined2 *)(plVar18[2] + 8) = (undefined2)local_a4;
  if ((*(uint *)(param_1 + 0x20) & 3) != 0) {
    FUN_1009de060();
  }
  if (local_158 != 0) {
    _CFRelease(local_158);
  }
  pDVar14 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009dd618;
    }
    iVar2 = *(int *)(local_c0 + 0xc);
    if (iVar2 != *(int *)(local_c0 + 8)) {
      lVar23 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar2 * -8;
      pDVar33 = local_c0 + (long)iVar2 * 8 + 8;
      do {
        if (*(void **)pDVar33 != (void *)0x0) {
          operator_delete(*(void **)pDVar33);
        }
        pDVar33 = pDVar33 + -8;
        lVar23 = lVar23 + 8;
      } while (lVar23 != 0);
    }
    QListData::dispose(pDVar14);
  }
LAB_1009dd618:
  if (lVar21 != 0) {
    _CFRelease(lVar21);
  }
  _CFRelease(lVar20);
  _CFRelease(lVar19);
  if (plVar18 != (long *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  plVar11 = *(long **)(param_1 + 0x28);
  *(long **)(param_1 + 0x28) = plVar18;
  if (plVar11 != (long *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar19 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    lVar19 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return;
}

