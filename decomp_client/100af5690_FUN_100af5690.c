
undefined8 FUN_100af5690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QString::QString(&local_58,0x7c);
  QString::section(&local_68,param_2,&local_58,1,1,0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af5705;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100af5705:
  sVar3 = QString::toUInt((bool *)&local_68,(int)&local_59);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af574a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100af574a:
  QString::QString(&local_50,0x7c);
  QString::section(&local_70,param_2,&local_50,2,2,0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af57a8;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100af57a8:
  sVar4 = QString::toUInt((bool *)&local_70,(int)&local_5a);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af57ed;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100af57ed:
  QString::QString(&local_48,0x7c);
  QString::section(&local_78,param_3,&local_48,1,1,0);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af584b;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100af584b:
  sVar5 = QString::toUInt((bool *)&local_78,(int)&local_5b);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af5890;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100af5890:
  QString::QString(&local_40,0x7c);
  QString::section(&local_80,param_3,&local_40,2,2,0);
  piVar1 = (int *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      local_31 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100af58ee;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_40.field0_0x0._1_7_,local_40.field0_0x0._0_1_),2,8);
  }
LAB_100af58ee:
  sVar6 = QString::toUInt((bool *)&local_80,(int)&local_5c);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) goto LAB_100af5932;
      local_40.field0_0x0._0_1_ = 0;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100af5932:
  uVar7 = 0;
  if ((((local_59 != '\0') && (local_5a != '\0')) && (local_5b != '\0')) &&
     ((uVar7 = 0, local_5c != '\0' && (sVar5 == sVar3)))) {
    if (sVar4 == sVar6) {
      uVar7 = 1;
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
      do {
        if (((&DAT_101cdaba0)[uVar11 + 1] == sVar3) && (uVar12 != 10)) {
          iVar10 = 0;
          bVar2 = 0;
          bVar8 = 0;
          do {
            if ((&DAT_101cdaba0)[uVar11 + 2 + iVar10] == sVar4) {
              bVar2 = 1;
              bVar9 = bVar8;
            }
            else {
              bVar9 = 1;
              if ((&DAT_101cdaba0)[uVar11 + 2 + iVar10] != sVar6) {
                bVar9 = bVar8;
              }
            }
            if ((bool)(bVar2 & bVar9)) {
              return 1;
            }
            iVar10 = iVar10 + 1;
            bVar8 = bVar9;
          } while (iVar10 < (int)((ushort)(&DAT_101cdaba0)[uVar12] - 2));
        }
        uVar11 = (ushort)(&DAT_101cdaba0)[uVar12] + uVar11;
        uVar12 = (ulong)uVar11;
        uVar7 = 0;
      } while (uVar11 < 0xd);
    }
  }
  return uVar7;
}

