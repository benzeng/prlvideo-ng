
/* Function Stack Size: 0x18 bytes */

char PDDeviceBarButtonItem::performDropPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char cVar8;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar5 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar2 = _deviceActionSet;
  lVar6 = PDBarButtonItem::_vm;
  if (*(long *)(param_1 + PDBarButtonItem::_vm) == 0) {
    cVar8 = '\0';
  }
  else if (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) == 0) {
    cVar8 = '\0';
  }
  else if (*(long *)(PDBarButtonItem::_vm + 8 + param_1) == 0) {
    cVar8 = '\0';
  }
  else if (*(long *)(param_1 + _deviceActionSet) == 0) {
    cVar8 = '\0';
  }
  else if (*(int *)(*(long *)(param_1 + _deviceActionSet) + 4) == 0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\0';
    if ((lVar5 != 0) && (*(long *)(_deviceActionSet + 8 + param_1) != 0)) {
      uVar3 = FUN_1007bd980();
      lVar1 = *(long *)(param_1 + lVar2);
      uVar7 = 0;
      if ((lVar1 != 0) && (uVar7 = 0, *(int *)(lVar1 + 4) != 0)) {
        uVar7 = *(undefined8 *)(lVar2 + 8 + param_1);
      }
      uVar4 = FUN_1007bd990(uVar7);
      lVar2 = *(long *)(param_1 + lVar6);
      uVar7 = 0;
      if ((lVar2 != 0) && (uVar7 = 0, *(int *)(lVar2 + 4) != 0)) {
        uVar7 = *(undefined8 *)(lVar6 + 8 + param_1);
      }
      lVar6 = FUN_10018f120(uVar7,uVar3,uVar4);
      if (lVar6 == 0) {
        cVar8 = '\0';
      }
      else {
        if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
          local_40 = (QArrayData *)0x0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_40,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                              PTR_s_QStringWithString__1022696d0,lVar5);
        }
        FUN_100148d00(lVar6,&local_40,0);
        cVar8 = '\x01';
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10002547c;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
    }
  }
LAB_10002547c:
  (*(code *)PTR__objc_release_1021e1c70)(lVar5);
  return cVar8;
}

