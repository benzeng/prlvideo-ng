
bool FUN_1005b17e0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  QArrayData *pQVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  QArrayData *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  undefined4 local_58;
  QArrayData *local_50;
  undefined *local_48;
  int *local_40;
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  (**(code **)(*(long *)*param_1 + 0x178))(&local_38);
  QDir::QDir((QDir *)&local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b183c;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1005b183c:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("*.cache",7);
  local_48 = PTR_shared_null_100ba2188;
  local_50 = pQVar3;
  FUN_10000c490(&local_48,&local_50);
  QDir::entryList(&local_40,&local_30,&local_48,2,0xffffffff);
  FUN_100013180(&local_48);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b18bc;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1005b18bc:
  local_70 = local_40;
  if (*local_40 != -1) {
    if (*local_40 == 0) {
      QListData::detach((int)&local_70);
      iVar6 = local_70[2];
      if (iVar6 != local_70[3]) {
        local_40 = local_40 + (long)local_40[2] * 2 + 4;
        piVar5 = local_70 + (long)iVar6 * 2 + 4;
        lVar4 = (long)local_70[3] * 8 + (long)iVar6 * -8;
        do {
          piVar1 = *(int **)local_40;
          *(int **)piVar5 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_21 = *piVar1 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_40 = local_40 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_40 = *local_40 + 1;
      local_21 = *local_40 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  iVar6 = 2;
  if (local_70[2] != local_70[3]) {
    do {
      local_58 = 1;
      cVar2 = QDir::remove(&local_30);
      if (cVar2 == '\0') {
        QString::toUtf8();
        FUN_1008e3970("","vdisk",0,"Unable to remove [%s]",local_78 + *(long *)(local_78 + 0x10));
        iVar6 = 1;
        if (*(int *)local_78 == -1) break;
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) break;
        }
        QArrayData::deallocate(local_78,1,8);
        break;
      }
      local_68 = local_68 + 2;
      local_58 = 1;
    } while (local_68 != local_60);
  }
  FUN_100013180(&local_70);
  FUN_100013180(&local_40);
  QDir::~QDir((QDir *)&local_30);
  return iVar6 == 2;
}

