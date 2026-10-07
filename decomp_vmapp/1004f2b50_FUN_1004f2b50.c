
undefined1 FUN_1004f2b50(undefined8 param_1,QString *param_2)

{
  QString QVar1;
  undefined2 uVar2;
  int iVar3;
  ssize_t sVar4;
  long lVar5;
  QArrayData *pQVar6;
  bool bVar7;
  QArrayData *local_268;
  QArrayData *local_260;
  QString local_258;
  QString local_250;
  long local_248 [3];
  short local_230 [263];
  undefined1 local_21;
  
  QString::toUtf8_helper(&local_250);
  iVar3 = _open((char *)(local_250.field0_0x0 + *(long *)(local_250.field0_0x0 + 0x10)),0x110);
  if (iVar3 == -1) {
    bVar7 = false;
  }
  else {
    sVar4 = _read(iVar3,local_248,0x220);
    _close(iVar3);
    if (sVar4 < 0x220) {
      bVar7 = false;
    }
    else {
      bVar7 = local_248[0] == 1;
    }
  }
  if (*(int *)local_250.field0_0x0 != -1) {
    if (*(int *)local_250.field0_0x0 != 0) {
      LOCK();
      *(int *)local_250.field0_0x0 = *(int *)local_250.field0_0x0 + -1;
      local_21 = *(int *)local_250.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004f2c02;
    }
    QArrayData::deallocate((QArrayData *)local_250.field0_0x0,1,8);
  }
LAB_1004f2c02:
  if (!bVar7) {
    return 0;
  }
  lVar5 = 0;
  while (((local_230[lVar5] != 0 && (local_230[lVar5 + 1] != 0)) && (local_230[lVar5 + 2] != 0))) {
    if ((local_230[lVar5 + 3] == 0) || (lVar5 = lVar5 + 4, 0x103 < lVar5)) break;
  }
  QString::fromUtf16((ushort *)&local_258,(int)local_230);
  QString::lastIndexOf(&local_258,0x5c,0xffffffff,1);
  QString::mid((int)&local_260,(int)&local_258);
  QVar1.field0_0x0 = local_258.field0_0x0;
  local_258.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_260;
  local_260 = (QArrayData *)QVar1.field0_0x0;
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_21 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004f2cff;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1004f2cff:
  if ((1 < *(uint *)local_258.field0_0x0) || (*(long *)(local_258.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData
              ((uint)&local_258,(bool)((char)*(uint *)(local_258.field0_0x0 + 4) + '\x01'));
  }
  lVar5 = (long)(int)*(uint *)(local_258.field0_0x0 + 4) * 2;
  if (lVar5 != 0) {
    pQVar6 = (QArrayData *)(local_258.field0_0x0 + *(long *)(local_258.field0_0x0 + 0x10));
    do {
      uVar2 = FUN_100541f50(*(undefined2 *)pQVar6);
      *(undefined2 *)pQVar6 = uVar2;
      pQVar6 = pQVar6 + 2;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  QString::normalized(&local_268,&local_258,0,0);
  QVar1.field0_0x0 = local_258.field0_0x0;
  local_258.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_268;
  local_268 = (QArrayData *)QVar1.field0_0x0;
  if (*(int *)QVar1.field0_0x0 != -1) {
    if (*(int *)QVar1.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar1.field0_0x0 = *(int *)QVar1.field0_0x0 + -1;
      local_21 = *(int *)QVar1.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004f2db7;
    }
    QArrayData::deallocate((QArrayData *)QVar1.field0_0x0,2,8);
  }
LAB_1004f2db7:
  QString::operator=(param_2,&local_258);
  if (*(int *)local_258.field0_0x0 != -1) {
    if (*(int *)local_258.field0_0x0 != 0) {
      LOCK();
      *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_258.field0_0x0 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
  }
  return 1;
}

