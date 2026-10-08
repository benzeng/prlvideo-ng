
void FUN_10008a2f0(long param_1,char param_2)

{
  long lVar1;
  QString *pQVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QPixmap local_48 [39];
  undefined1 local_21;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setAntivirusInstalled__10226a0b8,param_2);
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (param_2 != '\x01') {
    return;
  }
  lVar1 = FUN_1007ef770(*(undefined8 *)(param_1 + 0x48));
  if (lVar1 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = FUN_1007ef770(*(undefined8 *)(param_1 + 0x48));
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setAntivirusInstalled__10226a0b8,lVar1 != 0);
  pQVar2 = (QString *)FUN_1007ef770(*(undefined8 *)(param_1 + 0x48));
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_100188480(&local_58,uVar3);
  CAntivirusInfo::productIconUrlForSize((int)&local_50,pQVar2);
  local_60 = (QArrayData *)QString::fromAscii_helper("qrc:/",5);
  local_68 = (QArrayData *)QString::fromAscii_helper(":/",2);
  uVar3 = QString::replace(&local_50,&local_60,&local_68,1);
  QPixmap::QPixmap(local_48,uVar3,0,0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008a43c;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10008a43c:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008a46c;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10008a46c:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008a49c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10008a49c:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10008a4cc;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10008a4cc:
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSImage_10226a7c0,PTR_s_imageWithQPixmap__1022691f8,local_48)
  ;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_setAntivirusIcon__10226a0c0,uVar4);
  QPixmap::~QPixmap(local_48);
  return;
}

