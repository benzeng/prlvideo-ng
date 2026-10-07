
undefined1 FUN_1004f0d10(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  ssize_t sVar4;
  long lVar5;
  bool bVar6;
  QArrayData *local_260;
  QString local_258;
  long local_250 [3];
  short local_238 [260];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("/$R~",4);
  iVar3 = QString::lastIndexOf(param_1,&local_28,0xffffffff,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004f0d7b;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1004f0d7b:
  if (iVar3 < 0) {
    return 0;
  }
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = FUN_1004f08d0(param_1,&local_30);
  if (cVar1 != '\0') {
    QString::toUtf8_helper(&local_258);
    iVar3 = _open((char *)(local_258.field0_0x0 + *(long *)(local_258.field0_0x0 + 0x10)),0x110);
    if (iVar3 == -1) {
      bVar6 = false;
    }
    else {
      sVar4 = _read(iVar3,local_250,0x220);
      _close(iVar3);
      if (sVar4 < 0x220) {
        bVar6 = false;
      }
      else {
        bVar6 = local_250[0] == 1;
      }
    }
    if (*(int *)local_258.field0_0x0 != -1) {
      if (*(int *)local_258.field0_0x0 != 0) {
        LOCK();
        *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
        local_19 = *(int *)local_258.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1004f0e42;
      }
      QArrayData::deallocate((QArrayData *)local_258.field0_0x0,1,8);
    }
LAB_1004f0e42:
    if (bVar6) {
      lVar5 = 0;
      while (((local_238[lVar5] != 0 && (local_238[lVar5 + 1] != 0)) && (local_238[lVar5 + 2] != 0))
            ) {
        if ((local_238[lVar5 + 3] == 0) || (lVar5 = lVar5 + 4, 0x103 < lVar5)) break;
      }
      QString::fromUtf16((ushort *)&local_260,(int)local_238);
      uVar2 = QString::startsWith(&local_260,&DAT_1011bc180,1);
      if (*(int *)local_260 != -1) {
        if (*(int *)local_260 != 0) {
          LOCK();
          *(int *)local_260 = *(int *)local_260 + -1;
          local_19 = *(int *)local_260 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1004f0e9f;
        }
        QArrayData::deallocate(local_260,2,8);
      }
      goto LAB_1004f0e9f;
    }
  }
  uVar2 = 0;
LAB_1004f0e9f:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar2;
}

