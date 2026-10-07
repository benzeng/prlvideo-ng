
void FUN_100508ed0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_158;
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
  
  puVar3 = PTR__objc_msgSend_100ba25e8;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar7 = (*(code *)PTR__objc_msgSend_100ba25e8)(*param_1,PTR_s_representations_100bed878);
  local_158 = (*(code *)puVar3)(uVar7,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,
                                local_b8,0x10);
  if (local_158 != 0) {
    lVar1 = *local_e8;
    do {
      uVar9 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar7);
        }
        uVar17 = *(undefined8 *)(lStack_f0 + uVar9 * 8);
        iVar5 = (*(code *)puVar3)(uVar17,PTR_s_pixelsWide_100bed880);
        iVar6 = (*(code *)puVar3)(uVar17,PTR_s_pixelsHigh_100bed8a8);
        uVar8 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                                  PTR_s_graphicsContextWithBitmapImageRe_100bed8b0,uVar17);
        (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_saveGraphicsState_100bed8b8);
        (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_setCurrentContext__100bed8c0,uVar8);
        puVar4 = PTR_s_drawInRect_fromRect_operation_fr_100bed8c8;
        puVar2 = PTR__NSZeroRect_100ba2098;
        dVar10 = (double)iVar5;
        dVar11 = (double)iVar6;
        (*(code *)puVar3)(DAT_100b44c90,param_2,PTR_s_drawInRect_fromRect_operation_fr_100bed8c8,7);
        uVar17 = *(undefined8 *)(puVar2 + 0x18);
        uVar16 = *(undefined8 *)(puVar2 + 0x10);
        uVar14 = *(undefined8 *)puVar2;
        uVar15 = *(undefined8 *)(puVar2 + 8);
        uVar13 = 0;
        uVar12 = 0;
        (*(code *)puVar3)(DAT_100b44c90,param_3,puVar4,2);
        (*(code *)puVar3)(uVar8,PTR_s_flushGraphics_100bed8d0);
        (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_100bedc10,
                          PTR_s_restoreGraphicsState_100bed8d8);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_158);
      local_158 = (*(code *)PTR__objc_msgSend_100ba25e8)
                            (uVar7,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,
                             local_b8,0x10,param_6,uVar12,uVar13,dVar10,dVar11,uVar14,uVar15,uVar16,
                             uVar17);
    } while (local_158 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

