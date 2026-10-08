
QString * FUN_100743d60(QString *param_1)

{
  QString *this;
  QString *pQVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  undefined1 local_a0 [8];
  QString local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  uint local_58;
  Data *local_50;
  undefined *local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_100742c20(&local_40);
  puVar2 = PTR_shared_null_1021e1288;
  local_48 = PTR_shared_null_1021e1288;
  FUN_1002f6080(param_1,&local_48);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100743dc6;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100743dc6:
  if (*(int *)(local_40 + 4) == 0) goto LAB_100744248;
  FUN_100744ee0(&local_50,&local_40);
  if (1 < *(uint *)local_50) {
    FUN_100745250(&local_50,*(uint *)(local_50 + 4));
  }
  pQVar1 = *(QString **)(local_50 + (long)(int)*(uint *)(local_50 + 8) * 8 + 0x10);
  QString::operator=(param_1,pQVar1);
  QString::operator=(param_1 + 1,pQVar1 + 1);
  QString::operator=(param_1 + 2,pQVar1 + 2);
  QString::operator=(param_1 + 3,pQVar1 + 3);
  QString::operator=(param_1 + 4,pQVar1 + 4);
  QString::operator=(param_1 + 5,pQVar1 + 5);
  QString::operator=(param_1 + 6,pQVar1 + 6);
  QString::operator=(param_1 + 7,pQVar1 + 7);
  QString::operator=(param_1 + 8,pQVar1 + 8);
  QString::operator=(param_1 + 9,pQVar1 + 9);
  FUN_100283c40(param_1 + 10,pQVar1 + 10);
  this = param_1 + 0xb;
  QString::operator=(this,pQVar1 + 0xb);
  QString::operator=(param_1 + 0xc,pQVar1 + 0xc);
  QString::operator=(param_1 + 0xd,pQVar1 + 0xd);
  QString::operator=(param_1 + 0xe,pQVar1 + 0xe);
  QString::operator=(param_1 + 0xf,pQVar1 + 0xf);
  FUN_100745690(&local_70,&local_50);
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  local_58 = 1;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      lVar4 = *(long *)local_68;
      FUN_100283580(&local_f0);
      local_98.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x58);
      if (1 < *(int *)local_98.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
      }
      local_90.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x60);
      if (1 < *(int *)local_90.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
      }
      local_88.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x68);
      if (1 < *(int *)local_88.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
      }
      local_80.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x70);
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar4 + 0x78);
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        cVar3 = FUN_10073dd70(&local_f0);
        if (cVar3 != '\0') {
          lVar4 = QString::toLongLong((bool *)this,0);
          lVar5 = QString::toLongLong((bool *)&local_98,0);
          if (lVar4 < lVar5) {
            QString::operator=(param_1,&local_f0);
            QString::operator=(param_1 + 1,&local_e8);
            QString::operator=(param_1 + 2,&local_e0);
            QString::operator=(param_1 + 3,&local_d8);
            QString::operator=(param_1 + 4,&local_d0);
            QString::operator=(param_1 + 5,&local_c8);
            QString::operator=(param_1 + 6,&local_c0);
            QString::operator=(param_1 + 7,&local_b8);
            QString::operator=(param_1 + 8,&local_b0);
            QString::operator=(param_1 + 9,&local_a8);
            FUN_100283c40(param_1 + 10,local_a0);
            QString::operator=(this,&local_98);
            QString::operator=(param_1 + 0xc,&local_90);
            QString::operator=(param_1 + 0xd,&local_88);
            QString::operator=(param_1 + 0xe,&local_80);
            QString::operator=(param_1 + 0xf,&local_78);
          }
        }
        local_58 = 0;
      }
      FUN_100252c80(&local_98);
      FUN_100252e70(&local_f0);
      local_68 = local_68 + 8;
      uVar6 = local_58 ^ 1;
      bVar7 = local_58 != 1;
      local_58 = uVar6;
    } while ((bVar7) && (local_68 != local_60));
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100744204;
    }
    FUN_1007454a0(&local_70,local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10,
                  local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10);
    QListData::dispose(local_70);
  }
LAB_100744204:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100744248;
    }
    FUN_1007454a0(&local_50,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                  local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10);
    QListData::dispose(local_50);
  }
LAB_100744248:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_1005bfc90();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return param_1;
}

