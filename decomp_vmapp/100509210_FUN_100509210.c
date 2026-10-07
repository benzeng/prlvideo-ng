
void FUN_100509210(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 in_R9;
  ulong uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong local_120;
  undefined8 local_f8;
  long lStack_f0;
  long *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_100ba25e8;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar3 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
  local_120 = (*(code *)puVar2)(uVar3,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,
                                local_b8,0x10);
  if (local_120 != 0) {
    lVar1 = *local_e8;
    do {
      uVar7 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        uVar6 = *(undefined8 *)(lStack_f0 + uVar7 * 8);
        uVar4 = (*(code *)puVar2)(uVar6,PTR_s_pixelsWide_100bed880);
        uVar5 = (*(code *)puVar2)(uVar6,PTR_s_pixelsHigh_100bed8a8);
        uVar6 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                                  PTR_s_graphicsContextWithBitmapImageRe_100bed8b0,uVar6);
        (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_saveGraphicsState_100bed8b8);
        (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_setCurrentContext__100bed8c0,uVar6);
        iVar9 = (int)uVar4;
        dVar10 = (double)((int)(((uint)(iVar9 >> 0x1f) >> 0x1e) + iVar9) >> 2);
        iVar8 = (int)uVar5;
        dVar11 = (double)((int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2);
        dVar12 = (double)((int)(((uint)(uVar4 >> 0x1f) & 1) + iVar9) >> 1);
        dVar13 = (double)((int)(((uint)(uVar5 >> 0x1f) & 1) + iVar8) >> 1);
        (*(code *)puVar2)(param_2,PTR_s_drawInRect__100bed8e0);
        (*(code *)puVar2)(uVar6,PTR_s_flushGraphics_100bed8d0);
        (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_restoreGraphicsState_100bed8d8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_120);
      local_120 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (uVar3,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,
                             local_b8,0x10,in_R9,dVar10,dVar11,dVar12,dVar13);
    } while (local_120 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

