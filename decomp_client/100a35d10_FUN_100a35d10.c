
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_100a35d10(undefined4 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 ******ppppppuVar1;
  long *plVar2;
  long ******pppppplVar3;
  int iVar4;
  undefined8 ******ppppppuVar5;
  long ******pppppplVar6;
  long *******ppppppplVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  undefined8 *******pppppppuVar24;
  long *******ppppppplVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *******pppppppuVar29;
  QArrayData *local_178;
  QArrayData *local_170;
  undefined8 local_168;
  long lStack_160;
  long *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_120 [4];
  long *******local_110;
  long *******local_108;
  long local_100;
  long *******local_f8;
  long *******local_f0;
  long local_e8;
  undefined8 *******local_e0;
  undefined8 *******local_d8;
  long local_d0;
  undefined8 *******local_c8;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar28 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar28;
  lVar11 = FUN_100a49010();
  uVar26 = 4;
  if (lVar11 != 0) {
    local_e8 = 0;
    local_f8 = (long *******)&local_f8;
    local_f0 = (long *******)&local_f8;
    cVar9 = FUN_100a49080(param_2,param_3,&local_f8);
    uVar26 = 3;
    if (cVar9 != '\0') {
      local_110 = (long *******)&local_110;
      local_100 = 0;
      local_108 = local_110;
      ppppppuVar12 = operator_new(0x18);
      *(undefined4 *)(ppppppuVar12 + 1) = 1;
      *ppppppuVar12 = (undefined8 *****)&PTR_FUN_102237eb0;
      ppppppuVar12[2] = &local_110;
      pppppppuVar24 = &local_d8;
      local_d0 = 0;
      local_d8 = (undefined8 *******)0x0;
      local_e0 = pppppppuVar24;
      pppppppuVar13 = operator_new(0x30);
      *(undefined4 *)(pppppppuVar13 + 4) = 0x15;
      pppppppuVar13[5] = (undefined8 ******)0x0;
      pppppppuVar13[1] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      pppppppuVar13[2] = pppppppuVar24;
      local_e0 = pppppppuVar13;
      local_d8 = pppppppuVar13;
      FUN_1001879a0(pppppppuVar13,pppppppuVar13);
      local_d0 = local_d0 + 1;
      LOCK();
      *(int *)(ppppppuVar12 + 1) = *(int *)(ppppppuVar12 + 1) + 1;
      UNLOCK();
      ppppppuVar5 = pppppppuVar13[5];
      pppppppuVar13[5] = ppppppuVar12;
      pppppppuVar13 = local_d8;
      if (ppppppuVar5 != (undefined8 ******)0x0) {
        LOCK();
        ppppppuVar1 = ppppppuVar5 + 1;
        iVar4 = *(int *)ppppppuVar1;
        *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)(*ppppppuVar5)[2])();
          pppppppuVar13 = local_d8;
        }
      }
      while (pppppppuVar29 = pppppppuVar24, pppppppuVar13 != (undefined8 *******)0x0) {
        while (pppppppuVar24 = pppppppuVar13, *(uint *)(pppppppuVar24 + 4) < 0x17) {
          if (0x15 < *(uint *)(pppppppuVar24 + 4)) {
            local_c8 = pppppppuVar24;
            if (pppppppuVar24 != (undefined8 *******)0x0) goto LAB_100a35f86;
            pppppppuVar29 = &local_c8;
            goto LAB_100a35f1f;
          }
          pppppppuVar13 = (undefined8 *******)pppppppuVar24[1];
          if ((undefined8 *******)pppppppuVar24[1] == (undefined8 *******)0x0) {
            pppppppuVar29 = pppppppuVar24 + 1;
            goto LAB_100a35f1f;
          }
        }
        pppppppuVar13 = (undefined8 *******)*pppppppuVar24;
      }
LAB_100a35f1f:
      local_c8 = pppppppuVar24;
      pppppppuVar13 = operator_new(0x30);
      *(undefined4 *)(pppppppuVar13 + 4) = 0x16;
      pppppppuVar13[5] = (undefined8 ******)0x0;
      pppppppuVar13[1] = (undefined8 ******)0x0;
      *pppppppuVar13 = (undefined8 ******)0x0;
      pppppppuVar13[2] = pppppppuVar24;
      *pppppppuVar29 = pppppppuVar13;
      pppppppuVar24 = pppppppuVar13;
      if ((undefined8 *******)*local_e0 != (undefined8 *******)0x0) {
        local_e0 = (undefined8 *******)*local_e0;
        pppppppuVar24 = (undefined8 *******)*pppppppuVar29;
      }
      FUN_1001879a0(local_d8,pppppppuVar24);
      local_d0 = local_d0 + 1;
      pppppppuVar24 = pppppppuVar13;
LAB_100a35f86:
      LOCK();
      *(int *)(ppppppuVar12 + 1) = *(int *)(ppppppuVar12 + 1) + 1;
      UNLOCK();
      ppppppuVar5 = pppppppuVar24[5];
      pppppppuVar24[5] = ppppppuVar12;
      if (ppppppuVar5 != (undefined8 ******)0x0) {
        LOCK();
        ppppppuVar1 = ppppppuVar5 + 1;
        iVar4 = *(int *)ppppppuVar1;
        *(int *)ppppppuVar1 = *(int *)ppppppuVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)(*ppppppuVar5)[2])();
        }
      }
      cVar9 = FUN_100a47ef0(param_2,param_3,&local_e0);
      FUN_100a36e50(&local_e0,local_d8);
      LOCK();
      ppppppuVar5 = ppppppuVar12 + 1;
      iVar4 = *(int *)ppppppuVar5;
      *(int *)ppppppuVar5 = *(int *)ppppppuVar5 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)(*ppppppuVar12)[2])(ppppppuVar12);
      }
      ppppppplVar25 = local_110;
      uVar26 = 3;
      if (cVar9 != '\0') {
        if (local_100 != 0) {
          pppppplVar6 = *local_108;
          pppppplVar6[1] = (long *****)local_110[1];
          *local_110[1] = (long *****)pppppplVar6;
          local_f8[1] = (long ******)local_108;
          *local_108 = (long ******)local_f8;
          local_f8 = ppppppplVar25;
          ppppppplVar25[1] = (long ******)&local_f8;
          local_e8 = local_100 + local_e8;
          local_100 = 0;
        }
        if (local_e8 != 0) {
          cVar9 = FUN_100a47c10(param_2,param_3,local_120);
          uVar26 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
          uVar14 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar26,PTR_s_init_102268ca8);
          uVar26 = FUN_100a48d10(&local_f8);
          uVar26 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (lVar11,PTR_s_sharingServicesForItems__10226a250,uVar26);
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = (long *)0x0;
          uStack_150 = 0;
          local_168 = 0;
          lStack_160 = 0;
          uVar15 = (*(code *)PTR__objc_msgSend_1021e1c68)
                             (uVar26,PTR_s_countByEnumeratingWithState_obje_102269048,&local_168,
                              local_b8,0x10);
          if (uVar15 != 0) {
            lVar28 = *local_158;
            do {
              uVar27 = 0;
              do {
                if (*local_158 != lVar28) {
                  _objc_enumerationMutation(uVar26);
                }
                uVar19 = *(undefined8 *)(lStack_160 + uVar27 * 8);
                plVar16 = operator_new(0x68);
                plVar2 = plVar16 + 1;
                *(undefined4 *)(plVar16 + 1) = 1;
                *plVar16 = (long)&PTR_FUN_1022810d0;
                plVar16[0xc] = 0;
                plVar16[0xb] = 0;
                plVar16[10] = 0;
                plVar16[7] = 0;
                plVar16[6] = 0;
                plVar16[5] = 0;
                plVar16[4] = 0;
                plVar16[3] = 0;
                plVar16[2] = 0;
                puVar8 = PTR__OBJC_CLASS___NSString_10226a7c8;
                uVar17 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_title_102268f30);
                _objc_msgSend_stret((undefined *)&local_170,(ID)puVar8,
                                    PTR_s_QStringWithString__1022696d0,uVar17);
                puVar8 = PTR__OBJC_CLASS___NSString_10226a7c8;
                if (*(int *)(local_170 + 4) != 0) {
                  uVar17 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                     (uVar19,PTR_s_menuItemTitle_10226a258);
                  _objc_msgSend_stret((undefined *)&local_178,(ID)puVar8,
                                      PTR_s_QStringWithString__1022696d0,uVar17);
                  if (*(int *)(local_178 + 4) != 0) {
                    uVar17 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_image_102269560);
                    uVar17 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,PTR_s_size_102268ef8);
                    if (cVar9 != '\0') {
                      uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_image_102269560);
                      (*(code *)PTR__objc_msgSend_1021e1c68)
                                ((double)local_120[0],uVar18,PTR_s_setSize__10226a260);
                    }
                    uVar18 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_image_102269560);
                    lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                       (uVar18,PTR_s_toCGImage__10226a268,*param_1);
                    if (cVar9 != '\0') {
                      uVar19 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar19,PTR_s_image_102269560);
                      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar17,uVar19,PTR_s_setSize__10226a260)
                      ;
                    }
                    if (lVar11 != 0) {
                      uVar19 = _CGImageGetDataProvider(lVar11);
                      lVar20 = _CGDataProviderCopyData(uVar19);
                      if (lVar20 != 0) {
                        uVar10 = FUN_100a49000(&local_170);
                        *(undefined4 *)((long)plVar16 + 0xc) = uVar10;
                        FUN_100a36a90(plVar16 + 2,local_170 + *(long *)(local_170 + 0x10),
                                      (long)*(int *)(local_170 + 4));
                        FUN_100a36a90(plVar16 + 5,local_178 + *(long *)(local_178 + 0x10),
                                      (long)*(int *)(local_178 + 4));
                        uVar10 = _CGImageGetWidth(lVar11);
                        *(undefined4 *)(plVar16 + 8) = uVar10;
                        uVar10 = _CGImageGetHeight(lVar11);
                        *(undefined4 *)((long)plVar16 + 0x44) = uVar10;
                        *(undefined4 *)(plVar16 + 9) = 1;
                        lVar21 = _CFDataGetBytePtr(lVar20);
                        lVar22 = _CFDataGetLength(lVar20);
                        FUN_100a36ca0(plVar16 + 10,lVar21,lVar22 + lVar21);
                        plVar23 = operator_new(0x18);
                        plVar23[2] = (long)plVar16;
                        LOCK();
                        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                        UNLOCK();
                        plVar23[1] = (long)param_4;
                        lVar21 = *param_4;
                        *plVar23 = lVar21;
                        *(long **)(lVar21 + 8) = plVar23;
                        *param_4 = (long)plVar23;
                        param_4[2] = param_4[2] + 1;
                        _CFRelease(lVar20);
                      }
                      _CFRelease(lVar11);
                    }
                  }
                  if (*(int *)local_178 != -1) {
                    if (*(int *)local_178 != 0) {
                      LOCK();
                      *(int *)local_178 = *(int *)local_178 + -1;
                      local_b9 = *(int *)local_178 != 0;
                      UNLOCK();
                      if ((bool)local_b9) goto LAB_100a364a6;
                    }
                    QArrayData::deallocate(local_178,2,8);
                  }
                }
LAB_100a364a6:
                if (*(int *)local_170 != -1) {
                  if (*(int *)local_170 != 0) {
                    LOCK();
                    *(int *)local_170 = *(int *)local_170 + -1;
                    local_b9 = *(int *)local_170 != 0;
                    UNLOCK();
                    if ((bool)local_b9) goto LAB_100a364e2;
                  }
                  QArrayData::deallocate(local_170,2,8);
                }
LAB_100a364e2:
                LOCK();
                lVar11 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < uVar15);
              uVar15 = (*(code *)PTR__objc_msgSend_1021e1c68)
                                 (uVar26,PTR_s_countByEnumeratingWithState_obje_102269048,&local_168
                                  ,local_b8,0x10);
            } while (uVar15 != 0);
          }
          uVar26 = 1;
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_drain_10226a5d8);
        }
      }
      if (local_100 != 0) {
        pppppplVar6 = *local_108;
        pppppplVar6[1] = (long *****)local_110[1];
        *local_110[1] = (long *****)pppppplVar6;
        local_100 = 0;
        ppppppplVar25 = local_108;
        while ((long ********)ppppppplVar25 != &local_110) {
          ppppppplVar7 = (long *******)ppppppplVar25[1];
          pppppplVar6 = ppppppplVar25[2];
          if (pppppplVar6 != (long ******)0x0) {
            LOCK();
            pppppplVar3 = pppppplVar6 + 1;
            iVar4 = *(int *)pppppplVar3;
            *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (*(code *)(*pppppplVar6)[2])();
            }
          }
          operator_delete(ppppppplVar25);
          ppppppplVar25 = ppppppplVar7;
        }
      }
      lVar28 = *(long *)PTR____stack_chk_guard_1021e1840;
    }
    if (local_e8 != 0) {
      pppppplVar6 = *local_f0;
      pppppplVar6[1] = (long *****)local_f8[1];
      *local_f8[1] = (long *****)pppppplVar6;
      local_e8 = 0;
      ppppppplVar25 = local_f0;
      while ((long ********)ppppppplVar25 != &local_f8) {
        ppppppplVar7 = (long *******)ppppppplVar25[1];
        pppppplVar6 = ppppppplVar25[2];
        if (pppppplVar6 != (long ******)0x0) {
          LOCK();
          pppppplVar3 = pppppplVar6 + 1;
          iVar4 = *(int *)pppppplVar3;
          *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (*(code *)(*pppppplVar6)[2])();
          }
        }
        operator_delete(ppppppplVar25);
        ppppppplVar25 = ppppppplVar7;
      }
    }
  }
  if (lVar28 == local_38) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

