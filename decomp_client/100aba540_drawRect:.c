
/* Function Stack Size: 0x30 bytes */

void StatusView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  lVar2 = pressed;
  if (*(long *)(param_1 + statusItem) != 0) {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(long *)(param_1 + statusItem),PTR_s_drawStatusBarBackgroundInRect_wi_10226a458,
               (int)*(char *)(param_1 + pressed));
    if (*(long *)(param_1 + normalImage) != 0) {
      if ((*(char *)(param_1 + lVar2) == '\0') ||
         (lVar2 = *(long *)(param_1 + pressedImage), *(long *)(param_1 + pressedImage) == 0)) {
        lVar2 = *(long *)(param_1 + normalImage);
      }
      _objc_msgSend_stret((undefined *)&local_38,param_1,PTR_s_bounds_1022693a0);
      puVar1 = PTR__objc_msgSend_1021e1c68;
      dVar3 = (double)(*(code *)PTR__objc_msgSend_1021e1c68)(lVar2,PTR_s_size_102268ef8);
      (*(code *)puVar1)((local_28 - dVar3) * DAT_100e110f0 + local_38,
                        SUB84((local_20 - (double)CONCAT44(in_XMM1_Db,in_XMM1_Da)) * DAT_100e110f0 +
                              local_30,0),DAT_100e11050,lVar2,
                        PTR_s_drawAtPoint_fromRect_operation_f_102269580,2);
    }
  }
  return;
}

