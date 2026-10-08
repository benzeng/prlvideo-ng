
int FUN_100a52130(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  QString *pQVar3;
  undefined8 uVar4;
  int iVar5;
  QArrayData *local_30;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  if (((*(int *)(local_20.field0_0x0 + 4) != 5) || (*(int *)(local_20.field0_0x0 + 4) < 3)) ||
     (*(short *)(local_20.field0_0x0 + *(long *)(local_20.field0_0x0 + 0x10) + 4) != 0x2d))
  goto LAB_100a52227;
  local_28 = (QArrayData *)QString::fromAscii_helper("-",1);
  local_30 = (QArrayData *)QString::fromAscii_helper("_",1);
  pQVar3 = (QString *)QString::replace(&local_20,&local_28,&local_30,1);
  QString::operator=(&local_20,pQVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a521f7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100a521f7:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a52227;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100a52227:
  puVar1 = PTR__OBJC_CLASS___NSLocale_10226aa88;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00,
                     &local_20);
  iVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_windowsLocaleCodeFromLocaleIdent_10226a2b8,uVar4);
  iVar5 = 0x2040d;
  if (iVar2 != 0x40d) {
    iVar5 = iVar2;
  }
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return iVar5;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return iVar5;
}

