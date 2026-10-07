
void FUN_100509490(ID *param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_118;
  undefined8 uStack_110;
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
  uVar4 = (*(code *)puVar2)(uVar3,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,
                            local_b8,0x10);
  puVar2 = PTR_s_pixelsWide_100bed880;
  if (uVar4 != 0) {
    lVar1 = *local_e8;
    do {
      uVar6 = 0;
      do {
        if (*local_e8 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        lVar5 = (*(code *)PTR__objc_msgSend_100ba25e8)
                          (*(undefined8 *)(lStack_f0 + uVar6 * 8),puVar2);
        if (param_2 <= lVar5) goto LAB_10050960c;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_100bed4b8,&local_f8,local_b8,
                         0x10);
    } while (uVar4 != 0);
  }
  if (*param_1 == 0) {
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_118,*param_1,PTR_s_toQImageWithSize__100bed858,
                        SUB84((double)param_2,0),SUB84((double)param_2,0));
  }
  FUN_100508640(param_1,&local_118);
  QImage::~QImage((QImage *)&local_118);
LAB_10050960c:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

