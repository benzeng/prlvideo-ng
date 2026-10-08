
/* WARNING: Type propagation algorithm not settling */

void FUN_1001c64e0(undefined8 param_1,undefined4 param_2)

{
  long *******ppppppplVar1;
  long ******pppppplVar2;
  long ******pppppplVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
  int iVar19;
  long *******ppppppplVar20;
  ulong uVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar25;
  ulong uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long *******local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar12;
  iVar7 = _IOIteratorNext(param_2);
  if (iVar7 == 0) goto LAB_1001c6e9f;
  iVar19 = 0;
  do {
    iVar8 = _IOObjectGetClass(iVar7,&local_b8);
    if (iVar8 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("AIRCTL","prl_client_app",1,"IOObjectGetClass() err %#x, serviceN=%u",iVar8,
                      iVar19);
      }
      local_b8 = 0x64656d616e6e753c;
      local_b0 = 0x3e;
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",3,"Service first match: \"%s\"",&local_b8);
    }
    _IOObjectRelease(iVar7);
    iVar19 = iVar19 + 1;
    iVar7 = _IOIteratorNext(param_2);
    uVar25 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  } while (iVar7 != 0);
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  if ((iVar19 == 0) || (DAT_1023120f9 != '\0')) goto LAB_1001c6e9f;
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("AIRCTL","prl_client_app",3,"\"%s\" service attached","AppleIRController");
  }
  DAT_1023120f9 = '\x01';
  if ((DAT_102312160 == '\0') && (iVar7 = ___cxa_guard_acquire(&DAT_102312160), iVar7 != 0)) {
    uVar11 = CONCAT44(uVar25,0x14);
    uVar9 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0x78,0xbd,0x42,0xc,0x6f,uVar11,0x11,0xd4,0x94,0x74,0,5,2,0x8f,0x18,0xd5);
    uVar25 = (undefined4)((ulong)uVar11 >> 0x20);
    auVar23 = _CFUUIDGetUUIDBytes(uVar9);
    DAT_102312158 = auVar23._8_8_;
    DAT_102312150 = auVar23._0_8_;
    ___cxa_guard_release(&DAT_102312160);
  }
  lVar10 = _IOServiceNameMatching("AppleIRController");
  if (lVar10 == 0) {
    if (0 < DAT_10230ffd0) {
      pcVar18 = "IOServiceNameMatching() err, name=\"%s\"";
      uVar9 = 1;
LAB_1001c68e0:
      FUN_100df99c0("AIRCTL","prl_client_app",uVar9,pcVar18,"AppleIRController");
    }
LAB_1001c6e85:
    uVar6 = 0;
  }
  else {
    iVar7 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0,lVar10);
    if (iVar7 == 0) {
      if (1 < DAT_10230ffd0) {
        pcVar18 = "IOServiceGetMatchingService() err, service \"%s\" not available";
        uVar9 = 2;
        goto LAB_1001c68e0;
      }
      goto LAB_1001c6e85;
    }
    uVar9 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0xfa,0x12,0xfa,0x38,0x6f,CONCAT44(uVar25,0x1a),0x11,0xd4,0xba,0xc,0,5,2,
                       0x8f,0x18,0xd5);
    uVar29 = 0x91;
    uVar28 = 0xd4;
    uVar26 = 0x11;
    uVar24 = 0x9c;
    uVar11 = _CFUUIDGetConstantUUIDWithBytes
                       (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,
                        0x6f);
    iVar19 = _IOCreatePlugInInterfaceForService(iVar7,uVar9,uVar11,&local_c0,&local_c8);
    if (iVar19 == 0) {
      iVar19 = (*(code *)(*local_c0)[1])(local_c0,DAT_102312150,DAT_102312158,&DAT_102312120);
      bVar22 = true;
      if (iVar19 != 0) {
        if (DAT_10230ffd0 < 1) {
          bVar22 = false;
        }
        else {
          bVar22 = false;
          FUN_100df99c0("AIRCTL","prl_client_app",1,"IOCFPlugInInterface::QueryInterface() err %#x")
          ;
        }
      }
      _IODestroyPlugInInterface(local_c0);
    }
    else if (DAT_10230ffd0 < 1) {
      bVar22 = false;
    }
    else {
      bVar22 = false;
      FUN_100df99c0("AIRCTL","prl_client_app",1,"IOCreatePlugInInterfaceForService() err %#x");
    }
    _IOObjectRelease(iVar7);
    if (!bVar22) goto LAB_1001c6e85;
    iVar7 = (**(code **)(*DAT_102312120 + 0xa0))(DAT_102312120,0,&local_c8);
    if (iVar7 != 0) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("AIRCTL","prl_client_app",1,
                      "IOHIDDeviceInterface122::copyMatchingElements() err %#x");
      }
LAB_1001c6e6d:
      (**(code **)(*DAT_102312120 + 0x18))();
      DAT_102312120 = (long *)0x0;
      goto LAB_1001c6e85;
    }
    lVar12 = _CFArrayGetCount(local_c8);
    if (0 < lVar12) {
      uVar21 = 0;
      do {
        lVar10 = _CFArrayGetValueAtIndex(local_c8,uVar21);
        if (lVar10 == 0) {
LAB_1001c6d7d:
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("AIRCTL","prl_client_app",1,"Failed to get element #%u, e=%p",
                          uVar21 & 0xffffffff,lVar10);
          }
        }
        else {
          lVar15 = _CFGetTypeID(lVar10);
          lVar16 = _CFDictionaryGetTypeID();
          if (lVar15 != lVar16) goto LAB_1001c6d7d;
          uVar17 = _CFDictionaryGetValue(lVar10,&cf_ElementCookie);
          if (uVar17 == 0) {
LAB_1001c6db2:
            if (0 < DAT_10230ffd0) {
LAB_1001c6dd4:
              uVar24 = uVar17;
              FUN_100df99c0("AIRCTL","prl_client_app",1,
                            "Failed to get value \"%s\" from element #%u, val=%p","ElementCookie",
                            uVar21 & 0xffffffff,uVar24);
            }
          }
          else {
            lVar15 = _CFGetTypeID(uVar17);
            lVar16 = _CFNumberGetTypeID();
            if (lVar15 != lVar16) goto LAB_1001c6db2;
            cVar5 = _CFNumberGetValue(uVar17,10,&local_d0);
            uVar4 = local_d0;
            if (cVar5 != '\0') {
              uVar17 = _CFDictionaryGetValue(lVar10,&cf_UsagePage);
              if (uVar17 != 0) {
                lVar15 = _CFGetTypeID(uVar17);
                lVar16 = _CFNumberGetTypeID();
                if (lVar15 == lVar16) {
                  cVar5 = _CFNumberGetValue(uVar17,10,&local_d0);
                  uVar27 = local_d0;
                  if (cVar5 == '\0') goto joined_r0x0001001c6a00;
                  pppppplVar2 = (long ******)CONCAT44(uStack_cc,local_d0);
                  uVar17 = _CFDictionaryGetValue(lVar10,&cf_Usage);
                  if (uVar17 != 0) {
                    lVar10 = _CFGetTypeID(uVar17);
                    lVar15 = _CFNumberGetTypeID();
                    if (lVar10 == lVar15) {
                      cVar5 = _CFNumberGetValue(uVar17,10,&local_d0);
                      if (cVar5 == '\0') goto joined_r0x0001001c6a00;
                      pppppplVar3 = (long ******)CONCAT44(uStack_cc,local_d0);
                      if (2 < DAT_10230ffd0) {
                        uVar24 = (ulong)uVar27;
                        uVar28 = local_d0;
                        uVar29 = local_d0;
                        FUN_100df99c0("AIRCTL","prl_client_app",3,
                                      "Usage #%u: cookie=0x%x, page=0x%x(%i), usage=0x%x(%i)",
                                      uVar21 & 0xffffffff,uVar4,uVar24,uVar27,local_d0,local_d0);
                        uVar26 = uVar27;
                      }
                      ppppppplVar20 = DAT_1023120e8;
                      ppppppplVar14 = (long *******)&DAT_1023120e8;
                      if (DAT_1023120e8 == (long *******)0x0) {
                        ppppppplVar13 = (long *******)&DAT_1023120e8;
                        local_c0 = (long *******)&DAT_1023120e8;
                      }
                      else {
                        do {
                          while (ppppppplVar13 = ppppppplVar20,
                                uVar4 <= *(uint *)(ppppppplVar13 + 4)) {
                            ppppppplVar20 = (long *******)*ppppppplVar13;
                            ppppppplVar14 = ppppppplVar13;
                            if ((long *******)*ppppppplVar13 == (long *******)0x0)
                            goto LAB_1001c6a53;
                          }
                          ppppppplVar1 = ppppppplVar13 + 1;
                          ppppppplVar13 = ppppppplVar14;
                          ppppppplVar20 = (long *******)*ppppppplVar1;
                        } while ((long *******)*ppppppplVar1 != (long *******)0x0);
LAB_1001c6a53:
                        ppppppplVar20 = DAT_1023120e8;
                        if (((long ********)ppppppplVar13 != &DAT_1023120e8) &&
                           (*(uint *)(ppppppplVar13 + 4) <= uVar4)) {
                          if (0 < DAT_10230ffd0) {
                            FUN_100df99c0("AIRCTL","prl_client_app",1,
                                          "Usage with cookie=0x%x already added",uVar4);
                          }
                          goto LAB_1001c6e00;
                        }
                        do {
                          while (ppppppplVar14 = ppppppplVar20, local_c0 = ppppppplVar14,
                                uVar4 < *(uint *)(ppppppplVar14 + 4)) {
                            ppppppplVar20 = (long *******)*ppppppplVar14;
                            ppppppplVar13 = ppppppplVar14;
                            if ((long *******)*ppppppplVar14 == (long *******)0x0)
                            goto LAB_1001c6ae2;
                          }
                          if (uVar4 <= *(uint *)(ppppppplVar14 + 4)) {
                            ppppppplVar13 = (long *******)&local_c0;
                            if (ppppppplVar14 == (long *******)0x0) goto LAB_1001c6ae2;
                            goto LAB_1001c6b58;
                          }
                          ppppppplVar20 = (long *******)ppppppplVar14[1];
                        } while ((long *******)ppppppplVar14[1] != (long *******)0x0);
                        ppppppplVar13 = ppppppplVar14 + 1;
                      }
LAB_1001c6ae2:
                      ppppppplVar20 = local_c0;
                      ppppppplVar14 = operator_new(0x40);
                      *(uint *)(ppppppplVar14 + 4) = uVar4;
                      ppppppplVar14[7] = (long ******)0x0;
                      ppppppplVar14[6] = (long ******)0x0;
                      ppppppplVar14[5] = (long ******)0x0;
                      ppppppplVar14[1] = (long ******)0x0;
                      *ppppppplVar14 = (long ******)0x0;
                      ppppppplVar14[2] = (long ******)ppppppplVar20;
                      *ppppppplVar13 = (long ******)ppppppplVar14;
                      ppppppplVar20 = ppppppplVar14;
                      if ((long *)*DAT_1023120e0 != (long *)0x0) {
                        ppppppplVar20 = (long *******)*ppppppplVar13;
                        DAT_1023120e0 = (long *)*DAT_1023120e0;
                      }
                      FUN_1001879a0(DAT_1023120e8,ppppppplVar20);
                      DAT_1023120f0 = DAT_1023120f0 + 1;
LAB_1001c6b58:
                      *(uint *)(ppppppplVar14 + 5) = uVar4;
                      ppppppplVar14[6] = pppppplVar2;
                      ppppppplVar14[7] = pppppplVar3;
                      goto LAB_1001c6e00;
                    }
                  }
                }
              }
              if (DAT_10230ffd0 < 1) goto LAB_1001c6e00;
              goto LAB_1001c6dd4;
            }
joined_r0x0001001c6a00:
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("AIRCTL","prl_client_app",1,
                            "Failed to fetch number for \"%s\" from element #%u, val=%p",
                            "ElementCookie",uVar21 & 0xffffffff,uVar17);
              uVar24 = uVar17;
            }
          }
        }
LAB_1001c6e00:
        bVar22 = uVar21 != lVar12 - 1U;
        uVar21 = uVar21 + 1;
      } while (bVar22);
    }
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("AIRCTL","prl_client_app",3,"Usage: total=%u, added=%u",lVar12,
                    DAT_1023120f0 & 0xffffffff,uVar24,uVar26,uVar28,uVar29);
    }
    uVar24 = DAT_1023120f0;
    _CFRelease(local_c8);
    uVar6 = 1;
    lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (uVar24 == 0) goto LAB_1001c6e6d;
  }
  DAT_1023120fa = uVar6;
  (*DAT_102312100)(2,DAT_102312108);
LAB_1001c6e9f:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

