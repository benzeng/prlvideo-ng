
/* Function Stack Size: 0x18 bytes */

char PDSharedFoldersBarButtonItem::performDropPath_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  lVar2 = PDBarButtonItem::_vm;
  if (*(long *)(param_1 + PDBarButtonItem::_vm) == 0) {
    cVar3 = '\0';
  }
  else if (*(int *)(*(long *)(param_1 + PDBarButtonItem::_vm) + 4) == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\0';
    if ((lVar4 != 0) && (cVar3 = '\0', *(long *)(PDBarButtonItem::_vm + 8 + param_1) != 0)) {
      FUN_10018c2b0();
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmTools();
      CVmTools::getVmSharing();
      CVmSharing::getHostSharing();
      cVar3 = CVmHostSharing::isUserDefinedFoldersEnabled();
      if (cVar3 == '\0') {
        cVar3 = '\0';
      }
      else {
        lVar1 = *(long *)(param_1 + lVar2);
        uVar5 = 0;
        if ((lVar1 != 0) && (uVar5 = 0, *(int *)(lVar1 + 4) != 0)) {
          uVar5 = *(undefined8 *)(lVar2 + 8 + param_1);
        }
        if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
          local_40 = (QArrayData *)0x0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_40,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                              PTR_s_QStringWithString__1022696d0,lVar4);
        }
        FUN_10018fd80(uVar5,&local_40);
        cVar3 = '\x01';
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000260b8;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
    }
  }
LAB_1000260b8:
  (*(code *)PTR__objc_release_1021e1c70)(lVar4);
  return cVar3;
}

