
/* WARNING: Removing unreachable block (ram,0x0001007784c6) */
/* WARNING: Removing unreachable block (ram,0x0001007784d4) */
/* WARNING: Removing unreachable block (ram,0x0001007784e0) */

void FUN_100778350(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *pQVar3;
  Data *pDVar4;
  long lVar5;
  uint in_stack_ffffffffffffff0c;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [24];
  QVariant local_80;
  QArrayData *local_70;
  int *local_68 [4];
  QVariant local_48 [2];
  undefined1 local_29;
  
  FUN_100774880();
  local_70 = (QArrayData *)QString::fromAscii_helper("1updateLastShown()",0x12);
  local_80.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_80.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_68,param_1,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007783db;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007783db:
  iVar2 = CMessageManager::instance();
  local_98._16_8_ = PTR_shared_null_1021e1288;
  local_98._8_8_ = PTR_shared_null_1021e15e8;
  local_98._0_8_ = PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)
           QString::fromAscii_helper("http://parallels.github.io/vagrant-parallels/",0x2d);
  local_a0 = pQVar3;
  FUN_1000341d0(local_98,&local_a0);
  local_b0 = 0x80000000;
  local_b8.field7 = 0;
  local_a8 = 1;
  CMessageManager::showMessageBox
            (iVar2,(QString *)0x3c76,(QStringList *)(local_98 + 0x10),(QStringList *)(local_98 + 8),
             (CSlotInfo *)local_98,SUB81(local_68,0),
             (QWidget *)((ulong)in_stack_ffffffffffffff0c << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_b8);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778512;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100778512:
  uVar1 = local_98._0_8_;
  if (*(int *)local_98._0_8_ != -1) {
    if (*(int *)local_98._0_8_ != 0) {
      LOCK();
      *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
      local_29 = *(int *)local_98._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007785a1;
    }
    iVar2 = *(int *)(local_98._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_98._0_8_ + 8)) {
      lVar5 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_98._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_100778580:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_100778580;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007785a1:
  uVar1 = local_98._8_8_;
  if (*(int *)local_98._8_8_ != -1) {
    if (*(int *)local_98._8_8_ != 0) {
      LOCK();
      *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
      local_29 = *(int *)local_98._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778631;
    }
    iVar2 = *(int *)(local_98._8_8_ + 0xc);
    if (iVar2 != *(int *)(local_98._8_8_ + 8)) {
      lVar5 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar4 = (Data *)(local_98._8_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar3 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar3 == 0) {
LAB_100778610:
          QArrayData::deallocate(pQVar3,2,8);
        }
        else if (*(int *)pQVar3 != -1) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar3 = *(QArrayData **)pDVar4;
            goto LAB_100778610;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_100778631:
  if (*(int *)local_98._16_8_ != -1) {
    if (*(int *)local_98._16_8_ != 0) {
      LOCK();
      *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
      local_29 = *(int *)local_98._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778661;
    }
    QArrayData::deallocate((QArrayData *)local_98._16_8_,2,8);
  }
LAB_100778661:
  QVariant::~QVariant(local_48);
  if (local_68[0] != (int *)0x0) {
    LOCK();
    *local_68[0] = *local_68[0] + -1;
    local_29 = *local_68[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_68[0] != (int *)0x0)) {
      operator_delete(local_68[0]);
    }
  }
  return;
}

