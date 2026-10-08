
undefined8 * FUN_100b90a60(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  QArrayData *pQVar3;
  undefined2 uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("^[0-9]{3}-[0-9]{5}-[0-9]{5}-[0-9]{5}-[0-9]{5}-[0-9]{5}$",0x37);
  QRegExp::QRegExp((QRegExp *)&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b90ad0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b90ad0:
  puVar5 = PTR_shared_null_1021e1288;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  QString::trimmed();
  cVar1 = QRegExp::exactMatch(&local_40);
  if (cVar1 == '\0') {
LAB_100b90ca0:
    *param_1 = puVar5;
  }
  else {
    local_60 = (QArrayData *)QString::fromAscii_helper("-",1);
    QString::remove(&local_58,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b90b59;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100b90b59:
    if (*(int *)(local_58 + 4) != 0x1c) goto LAB_100b90ca0;
    iVar6 = 0;
    lVar7 = 0x1b;
    while( true ) {
      if (lVar7 < *(int *)(local_58 + 4)) {
        uVar2 = *(ushort *)(local_58 + lVar7 * 2 + *(long *)(local_58 + 0x10));
      }
      else {
        uVar2 = 0;
      }
      if ((9 < uVar2 - 0x30) &&
         ((uVar2 < 0x80 || (cVar1 = QChar::isNumber_helper((uint)uVar2), cVar1 == '\0')))) break;
      if ((iVar6 != 0) && (iVar6 == (iVar6 / 5) * 5)) {
        pQVar3 = (QArrayData *)QString::fromAscii_helper("-",1);
        QString::insert((int)&local_50,(QChar *)0x0,
                        (int)*(undefined8 *)(pQVar3 + 0x10) + (int)pQVar3);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_31 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b90c40;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
      }
LAB_100b90c40:
      if (lVar7 < *(int *)(local_58 + 4)) {
        uVar4 = *(undefined2 *)(local_58 + lVar7 * 2 + *(long *)(local_58 + 0x10));
      }
      else {
        uVar4 = 0;
      }
      QString::insert(&local_50,0,uVar4);
      if (lVar7 < 1) break;
      lVar7 = lVar7 + -1;
      iVar6 = iVar6 + 1;
    }
    puVar5 = PTR_shared_null_1021e1288;
    if (*(int *)(local_50 + 4) != 0x21) goto LAB_100b90ca0;
    *param_1 = local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b90cd3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b90cd3:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b90d03;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b90d03:
  QRegExp::~QRegExp((QRegExp *)&local_40);
  return param_1;
}

