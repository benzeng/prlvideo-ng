
undefined8 FUN_100708320(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  QKeySequence *this;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  Data *pDVar6;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_1005607f0(&local_68);
  pDVar6 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
  local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
  local_60 = pDVar6;
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    do {
      local_50 = 1;
      local_60 = pDVar6;
      if (*(int *)(local_48.field0_0x0 + 4) != 0) {
        QString::fromUtf8_helper((char *)&local_40,0x1e31adc);
        QString::append(&local_48);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007083e9;
          }
          QArrayData::deallocate(local_40,2,8);
        }
      }
LAB_1007083e9:
      FUN_1007170a0(&local_70,pDVar6,1);
      QString::append(&local_48);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100708434;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100708434:
      pDVar6 = local_60 + 8;
      local_60 = pDVar6;
    } while (pDVar6 != local_58);
  }
  local_50 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007084ba;
    }
    iVar1 = *(int *)(local_68 + 0xc);
    if (iVar1 != *(int *)(local_68 + 8)) {
      lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_68 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_68);
  }
LAB_1007084ba:
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("Shortcut Info\nSequences: %1 \nEnabled: %2 \nHidden: %3",0x34);
  QString::arg(&local_80,&local_88,&local_48,0,0x20);
  uVar2 = *(uint *)(param_2 + 8) & 2;
  pcVar3 = "false";
  pcVar4 = "false";
  if (uVar2 != 0) {
    pcVar4 = "true";
  }
  local_90 = (QArrayData *)QString::fromAscii_helper(pcVar4,5 - (uVar2 >> 1));
  QString::arg(&local_78,&local_80,&local_90,0,0x20);
  uVar2 = *(uint *)(param_2 + 8) & 4;
  if (uVar2 != 0) {
    pcVar3 = "true";
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(pcVar3,5 - (uVar2 >> 2));
  QString::arg(param_1,&local_78,&local_98,0,0x20);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007085aa;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1007085aa:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007085da;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1007085da:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708610;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100708610:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708640;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100708640:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100708670;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100708670:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

