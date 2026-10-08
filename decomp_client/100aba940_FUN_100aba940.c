
bool FUN_100aba940(long param_1,char param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ID self;
  undefined8 in_R9;
  bool bVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  bVar6 = true;
  if (**(long **)(param_1 + 8) == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSStatusBar_10226aac0,
                              PTR_s_systemStatusBar_10226a460);
    if ((param_2 == '\0') ||
       (cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar4,PTR_s_respondsToSelector__102269d98,
                           PTR_s__statusItemWithLength_withPriori_10226a468), cVar2 == '\0')) {
      lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (DAT_101cd7048,uVar4,PTR_s_statusItemWithLength__10226a470);
    }
    else {
      lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (DAT_101cd7048,uVar4,PTR_s__statusItemWithLength_withPriori_10226a468,
                         0x7ffffffe);
    }
    bVar6 = lVar5 != 0;
    if (bVar6) {
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_retain_102269a88);
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setHighlightMode__10226a478,0);
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setTitle__102268ee8,&cf___);
      self = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR_StatusView_10226aac8,PTR_s_new_102269070);
      *(long *)(self + StatusView::cppItem) = param_1;
      *(long *)(self + StatusView::statusItem) = lVar5;
      (*(code *)PTR__objc_msgSend_1021e1c68)(lVar5,PTR_s_setView__102269110,self);
      _objc_msgSend_stret((undefined *)&local_50,self,PTR_s_bounds_1022693a0);
      (*(code *)PTR__objc_msgSend_1021e1c68)
                (self,PTR_s_addTrackingRect_owner_userData_a_10226a480,self,0,0,in_R9,local_50,
                 local_48,local_40,local_38);
      (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_setEnabled__102268dc8,1);
      (*(code *)PTR__objc_msgSend_1021e1c68)(self,PTR_s_release_1022699b8);
      **(long **)(param_1 + 8) = lVar5;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  }
  return bVar6;
}

