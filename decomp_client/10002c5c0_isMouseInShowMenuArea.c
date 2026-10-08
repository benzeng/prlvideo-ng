
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

char PDFullScreenMouseHandler::isMouseInShowMenuArea(ID param_1,SEL param_2)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  char cVar6;
  undefined8 in_R9;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_XMM1_Qa;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double dStack_120;
  undefined8 local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSEvent_10226a8b0,PTR_s_mouseLocation_102269808);
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long *)0x0;
  uStack_e0 = 0;
  local_f8 = 0;
  lStack_f0 = 0;
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSScreen_10226a8e8,PTR_s_screens_102269810);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar2)(uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,
                            local_b8,0x10);
  puVar2 = PTR_s_frame_102268b50;
  if (uVar5 != 0) {
    lVar1 = *local_e8;
    do {
      uVar7 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar4);
        }
        self = *(ID *)(lStack_f0 + uVar7 * 8);
        if (self == 0) {
          local_108 = 0;
          uStack_100 = 0;
          local_118 = 0;
          dStack_110 = 0.0;
          local_128 = 0;
          dStack_120 = 0.0;
          local_138 = 0;
          uStack_130 = 0;
          local_168 = 0;
          uStack_160 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_188 = 0;
          uStack_180 = 0;
          local_198 = 0;
          uStack_190 = 0;
          dVar9 = 0.0;
          uVar10 = 0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_118,self,puVar2);
          dVar9 = dStack_110;
          _objc_msgSend_stret((undefined *)&local_138,self,puVar2);
          dVar9 = dVar9 + dStack_120;
          _objc_msgSend_stret((undefined *)&local_178,self,puVar2);
          uVar10 = local_178;
          _objc_msgSend_stret((undefined *)&local_198,self,puVar2);
        }
        local_150 = dVar9 + _DAT_100e11170;
        local_140 = 0x3ff0000000000000;
        local_158 = uVar10;
        local_148 = local_188;
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0(uVar10,local_150,local_188,DAT_100e11050,uVar8,in_XMM1_Qa,"",
                        "prl_client_app",4,
                        "rect.x == %f, rect.y == %f, rect width == %f, rect height == %f, pos.x == %f, pos.y == %f"
                       );
        }
        uVar10 = local_158;
        dVar9 = local_150;
        uVar11 = local_148;
        uVar12 = local_140;
        cVar3 = _NSPointInRect(uVar8);
        cVar6 = '\x01';
        if (cVar3 != '\0') goto LAB_10002c8c4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
      uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_f8,local_b8,
                         0x10,in_R9,uVar10,dVar9,uVar11,uVar12);
    } while (uVar5 != 0);
  }
  cVar6 = '\0';
LAB_10002c8c4:
  (*(code *)PTR__objc_release_1021e1c70)(uVar4);
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return cVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

