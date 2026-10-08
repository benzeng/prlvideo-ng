
void FUN_100a493e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long ****pppplVar1;
  long lVar2;
  undefined8 uVar3;
  long ****pppplVar4;
  long *****ppppplVar5;
  undefined *self;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *****ppppplVar14;
  QString QVar15;
  ulong uVar16;
  QString local_120;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long ****local_d8;
  long ****local_d0;
  long local_c8;
  int local_c0;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if ((DAT_102313868 == '\0') && (iVar7 = ___cxa_guard_acquire(&DAT_102313868), iVar7 != 0)) {
    DAT_102313860 = _objc_getClass("NSSharingService");
    ___cxa_guard_release(&DAT_102313868);
  }
  lVar2 = DAT_102313860;
  if (DAT_102313860 != 0) {
    local_c0 = 0;
    cVar6 = FUN_100a47aa0(param_2,param_3,&local_c0);
    if (cVar6 != '\0') {
      local_c8 = 0;
      local_d8 = (long ****)&local_d8;
      local_d0 = (long ****)&local_d8;
      cVar6 = FUN_100a49080(param_2,param_3,&local_d8);
      if (cVar6 != '\0') {
        if (local_c8 == 0) goto LAB_100a4977f;
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_init_102268ca8);
        uVar10 = FUN_100a48d10(&local_d8);
        uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (lVar2,PTR_s_sharingServicesForItems__10226a250,uVar10);
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = (long *)0x0;
        uStack_100 = 0;
        local_118 = 0;
        lStack_110 = 0;
        uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                           (uVar11,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,
                            local_b8,0x10);
        if (uVar12 != 0) {
          lVar2 = *local_108;
          do {
            uVar16 = 0;
            do {
              if (*local_108 != lVar2) {
                _objc_enumerationMutation(uVar11);
              }
              self = PTR__OBJC_CLASS___NSString_10226a7c8;
              uVar3 = *(undefined8 *)(lStack_110 + uVar16 * 8);
              uVar13 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_title_102268f30);
              _objc_msgSend_stret((undefined *)&local_120,(ID)self,
                                  PTR_s_QStringWithString__1022696d0,uVar13);
              QVar15.field0_0x0 = local_120.field0_0x0;
              iVar7 = 3;
              if (*(int *)(local_120.field0_0x0 + 4) != 0) {
                iVar7 = 0;
                iVar8 = qHash(&local_120,0);
                if (iVar8 == local_c0) {
                  if (param_1 != 0) {
                    (*(code *)PTR__objc_msgSend_1021e1c68)
                              (uVar3,PTR_s_setDelegate__102268f50,param_1);
                  }
                  (*(code *)PTR__objc_msgSend_1021e1c68)
                            (uVar3,PTR_s_performWithItems__10226a280,uVar10);
                  iVar7 = 1;
                  QVar15.field0_0x0 = local_120.field0_0x0;
                }
              }
              if (*(int *)QVar15.field0_0x0 != -1) {
                if (*(int *)QVar15.field0_0x0 != 0) {
                  LOCK();
                  *(int *)QVar15.field0_0x0 = *(int *)QVar15.field0_0x0 + -1;
                  local_b9 = *(int *)QVar15.field0_0x0 != 0;
                  UNLOCK();
                  QVar15.field0_0x0 = local_120.field0_0x0;
                  if ((bool)local_b9) goto LAB_100a49696;
                }
                QArrayData::deallocate((QArrayData *)QVar15.field0_0x0,2,8);
              }
LAB_100a49696:
              if ((iVar7 != 0) && (iVar7 != 3)) goto LAB_100a496e6;
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar12);
            uVar12 = (*(code *)PTR__objc_msgSend_1021e1c68)
                               (uVar11,PTR_s_countByEnumeratingWithState_obje_102269048,&local_118,
                                local_b8,0x10);
          } while (uVar12 != 0);
        }
LAB_100a496e6:
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_drain_10226a5d8);
      }
      if (local_c8 != 0) {
        pppplVar4 = (long ****)*local_d0;
        pppplVar4[1] = local_d8[1];
        *local_d8[1] = (long **)pppplVar4;
        local_c8 = 0;
        ppppplVar14 = (long *****)local_d0;
        while (ppppplVar14 != &local_d8) {
          ppppplVar5 = (long *****)ppppplVar14[1];
          pppplVar4 = ppppplVar14[2];
          if (pppplVar4 != (long ****)0x0) {
            LOCK();
            pppplVar1 = pppplVar4 + 1;
            iVar7 = *(int *)pppplVar1;
            *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (*(code *)(*pppplVar4)[2])();
            }
          }
          operator_delete(ppppplVar14);
          ppppplVar14 = ppppplVar5;
        }
      }
    }
  }
LAB_100a4977f:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

