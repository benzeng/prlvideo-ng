
void FUN_100dda900(QRegExp *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  QArrayData *local_a0;
  QArrayData *local_98;
  int local_90;
  int local_8c;
  QArrayData *local_88;
  QString local_80;
  uint *local_78;
  QArrayData *local_70;
  QRegExp local_68 [8];
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_48 [8];
  uint *local_40;
  undefined1 local_31;
  
  local_50 = (QArrayData *)QString::fromAscii_helper("%",1);
  QString::section(&local_58,param_1,&local_50,1,1,0);
  iVar3 = *(int *)(local_58 + 4);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dda97a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100dda97a:
  if (iVar3 == 0) goto LAB_100ddace5;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_70 = (QArrayData *)QString::fromAscii_helper("%.*%",4);
  QRegExp::QRegExp(local_68,&local_70,1,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100dda9e6;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100dda9e6:
  local_78 = (uint *)PTR_shared_null_1021e15e8;
  iVar3 = QString::indexOf(param_1,(int)local_68);
  if (-1 < iVar3) {
    iVar6 = 1;
    do {
      QString::section(&local_80,param_1,&local_50,iVar6,iVar6,0);
      QString::operator=(&local_60,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ddaa74;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100ddaa74:
      FUN_100ddaee0(&local_88,&local_60);
      iVar1 = *(int *)(local_88 + 4);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ddaab4;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100ddaab4:
      if (iVar1 != 0) {
        FUN_100ddaee0(&local_a0,&local_60);
        pQVar2 = local_a0;
        local_8c = *(int *)(local_60.field0_0x0 + 4) + 2;
        local_98 = local_a0;
        if (1 < *(int *)local_a0 + 1U) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + 1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
        }
        local_90 = iVar3;
        FUN_100ddb0e0(&local_78,&local_98);
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ddab48;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_100ddab48:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ddab81;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
      }
LAB_100ddab81:
      iVar3 = QString::indexOf(param_1,(int)local_68);
      iVar6 = iVar6 + 2;
    } while (-1 < iVar3);
  }
  uVar4 = *local_78;
  if (local_78[3] != local_78[2]) {
    do {
      if (1 < uVar4) {
        FUN_100ddb530(&local_78,local_78[1]);
      }
      uVar4 = local_78[3];
      iVar3 = *(int *)(*(long *)(local_78 + (long)(int)uVar4 * 2 + 2) + 8);
      uVar5 = *local_78;
      if (1 < uVar5) {
        FUN_100ddb530(&local_78,local_78[1]);
        uVar5 = *local_78;
        uVar4 = local_78[3];
      }
      uVar4 = *(uint *)(*(long *)(local_78 + (long)(int)uVar4 * 2 + 2) + 0xc);
      if (1 < uVar5) {
        FUN_100ddb530(&local_78,local_78[1]);
      }
      QString::replace((int)param_1,iVar3,(QString *)(ulong)uVar4);
      if (1 < *local_78) {
        FUN_100ddb530(&local_78,local_78[1]);
      }
      local_40 = local_78 + (long)(int)local_78[3] * 2 + 2;
      FUN_100ddb5e0(local_48,&local_78,&local_40);
      uVar4 = *local_78;
    } while (local_78[3] != local_78[2]);
  }
  if (uVar4 != 0xffffffff) {
    if (uVar4 != 0) {
      LOCK();
      *local_78 = *local_78 - 1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ddacac;
    }
    FUN_100ddb1c0(&local_78,local_78);
  }
LAB_100ddacac:
  QRegExp::~QRegExp(local_68);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ddace5;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100ddace5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return;
}

