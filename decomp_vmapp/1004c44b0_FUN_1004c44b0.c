
undefined1 FUN_1004c44b0(QString *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  QTypedArrayData<unsigned_short> *pQVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar2 = _CFPreferencesCopyAppValue(&cf_NSNavLastRootDirectory,&cf_com_getdropbox_dropbox);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = _CFStringGetTypeID();
  lVar4 = _CFGetTypeID(lVar2);
  if (lVar3 != lVar4) {
    uVar9 = 0;
    goto LAB_1004c464a;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("/Dropbox",8);
  local_38 = pQVar5;
  uVar6 = _CFStringGetLength(lVar2);
  uVar10 = *(int *)(pQVar5 + 4) + (int)uVar6;
  pQVar7 = param_1->field0_0x0;
  uVar11 = (uint)param_1;
  if ((1 < *(uint *)pQVar7) || (uVar8 = *(uint *)(pQVar7 + 8), (uVar8 & 0x7fffffff) <= uVar10)) {
    if ((int)uVar10 <= (int)*(uint *)(pQVar7 + 4)) {
      uVar10 = *(uint *)(pQVar7 + 4);
    }
    QString::reallocData(uVar11,(bool)((char)uVar10 + '\x01'));
    pQVar7 = param_1->field0_0x0;
    uVar8 = *(uint *)(pQVar7 + 8);
  }
  if (-1 < (int)uVar8) {
    *(uint *)(pQVar7 + 8) = uVar8 | 0x80000000;
  }
  QString::resize(uVar11);
  pQVar7 = param_1->field0_0x0;
  if ((1 < *(uint *)pQVar7) || (*(long *)(pQVar7 + 0x10) != 0x18)) {
    QString::reallocData(uVar11,(bool)((char)*(uint *)(pQVar7 + 4) + '\x01'));
    pQVar7 = param_1->field0_0x0;
  }
  _CFStringGetCharacters(lVar2,0,uVar6,pQVar7 + *(long *)(pQVar7 + 0x10));
  QString::append(param_1);
  cVar1 = QString::startsWith(param_1,0x7e,1);
  if (cVar1 != '\0') {
    FUN_100507c20(&local_40);
    QString::replace(uVar11,0,(QString *)0x1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004c4610;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_1004c4610:
  uVar9 = 1;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004c464a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004c464a:
  _CFRelease(lVar2);
  return uVar9;
}

