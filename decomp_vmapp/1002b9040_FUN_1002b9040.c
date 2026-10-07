
ulong FUN_1002b9040(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("|",1);
  QString::section(&local_50,param_1,&local_58,0,3,0);
  uVar1 = *(uint *)local_58;
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002b90b8;
    }
    uVar5 = QArrayData::deallocate(local_58,2,8);
  }
LAB_1002b90b8:
  puVar7 = &DAT_1011c4ab8;
  uVar6 = 0;
  do {
    uVar5 = uVar5 & 0xffffffff;
    if (*(int *)(puVar7 + -3) != 0) {
      local_68 = (QArrayData *)QString::fromAscii_helper("|",1);
      QString::section(&local_60,puVar7,&local_68,0,3,0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b913d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1002b913d:
      iVar4 = QString::compare(&local_50,&local_60,0);
      bVar2 = false;
      if (iVar4 == 0) {
        QString::QString(&local_48,0x7c);
        QString::section(&local_70,param_1,&local_48,5,0xffffffff,0);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b91b2;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_1002b91b2:
        QString::QString(&local_40,0x7c);
        QString::section(&local_78,puVar7,&local_40,5,0xffffffff,0);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b920e;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_1002b920e:
        cVar3 = operator==(&local_70,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b924d;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_1002b924d:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002b927d;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1002b927d:
        bVar2 = false;
        if (cVar3 != '\0') {
          bVar2 = true;
          uVar5 = uVar6 & 0xffffffff;
        }
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002b92c0;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1002b92c0:
      uVar8 = uVar5;
      if (bVar2) break;
    }
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 6;
    uVar8 = 0xffffffff;
  } while (uVar6 < 0x3d);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return uVar8;
}

