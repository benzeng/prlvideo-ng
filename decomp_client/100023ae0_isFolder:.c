
/* Function Stack Size: 0x18 bytes */

char PDBarButtonItem::isFolder_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 uVar2;
  QString local_38;
  QFileInfo local_30 [15];
  undefined1 local_21;
  
  uVar2 = (*(code *)PTR__objc_retain_1021e1c78)(param_3);
  if (PTR__OBJC_CLASS___NSString_10226a7c8 == (undefined *)0x0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_38,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                        PTR_s_QStringWithString__1022696d0,uVar2);
  }
  QFileInfo::QFileInfo(local_30,&local_38);
  cVar1 = QFileInfo::isDir();
  QFileInfo::~QFileInfo(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100023b73;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100023b73:
  (*(code *)PTR__objc_release_1021e1c70)(uVar2);
  return cVar1;
}

