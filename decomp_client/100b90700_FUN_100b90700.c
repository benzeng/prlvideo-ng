
undefined8 * FUN_100b90700(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  QArrayData *pQVar4;
  long lVar5;
  undefined2 uVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QString::trimmed();
  local_50 = (QArrayData *)QString::fromAscii_helper("-",1);
  QString::remove(&local_48,&local_50,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b9077f;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b9077f:
  if (*(int *)(local_48 + 4) < 0x1e) {
    uVar3 = QString::fromAscii_helper("",0);
    *param_1 = uVar3;
  }
  else {
    lVar5 = 0;
    do {
      if (lVar5 < *(int *)(local_48 + 4)) {
        uVar2 = *(ushort *)(local_48 + lVar5 * 2 + *(long *)(local_48 + 0x10));
      }
      else {
        uVar2 = 0;
      }
      if (((uVar2 - 0x30 < 10) || (uVar2 - 0x41 < 0x3a && 5 < uVar2 - 0x5b)) ||
         ((0x7f < uVar2 && (cVar1 = QChar::isLetterOrNumber_helper((uint)uVar2), cVar1 != '\0')))) {
        if (((int)lVar5 != 0) && ((int)lVar5 % 6 == 0)) {
          pQVar4 = (QArrayData *)QString::fromAscii_helper("-",1);
          QString::append(&local_40);
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              local_31 = *(int *)pQVar4 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b908a0;
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
        }
LAB_100b908a0:
        if (lVar5 < *(int *)(local_48 + 4)) {
          uVar6 = *(undefined2 *)(local_48 + lVar5 * 2 + *(long *)(local_48 + 0x10));
        }
        else {
          uVar6 = 0;
        }
        QString::append(&local_40,uVar6);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < 0x1e);
    *param_1 = local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b9091f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b9091f:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

