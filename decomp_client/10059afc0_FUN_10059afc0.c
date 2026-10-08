
undefined1 FUN_10059afc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QStringList *pQVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  QStringList *pQVar10;
  undefined1 uVar11;
  QWidget *pQVar12;
  undefined1 local_190 [16];
  undefined4 local_180;
  QArrayData *local_178;
  int *local_170 [4];
  QVariant local_150 [2];
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  AnonymousUnion0 local_f0;
  QHostAddress local_e8 [8];
  QHostAddress local_e0 [8];
  QHostAddress local_d8 [15];
  undefined1 local_c9;
  undefined1 local_c8 [144];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100599810(local_e8,param_1 + 0x28);
  puVar4 = PTR_shared_null_1021e15e8;
  local_f0.field1 = (Data *)PTR_shared_null_1021e15e8;
  QHostAddress::toString();
  cVar5 = FUN_10010ec60(&local_f8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_c9 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_10059b060;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10059b060:
  pQVar12 = (QWidget *)0x3ac7;
  if (cVar5 != '\0') {
    QHostAddress::toString();
    cVar5 = FUN_10010ec60(&local_100);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_c9 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_10059b0cb;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_10059b0cb:
    pQVar12 = (QWidget *)0x3ac8;
    if (cVar5 != '\0') {
      QHostAddress::toString();
      cVar5 = FUN_10010ec60(&local_108);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_c9 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_10059b136;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_10059b136:
      pQVar12 = (QWidget *)0x3ac9;
      if (cVar5 != '\0') {
        QHostAddress::toString();
        iVar6 = FUN_10059d020(&local_110,0);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_c9 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_c9) goto LAB_10059b1a3;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_10059b1a3:
        pQVar12 = (QWidget *)0x3aca;
        if (iVar6 != 0) {
          QHostAddress::toString();
          iVar6 = FUN_10059d020(&local_118,0);
          if (*(int *)local_118 != -1) {
            if (*(int *)local_118 != 0) {
              LOCK();
              *(int *)local_118 = *(int *)local_118 + -1;
              local_c9 = *(int *)local_118 != 0;
              UNLOCK();
              if ((bool)local_c9) goto LAB_10059b210;
            }
            QArrayData::deallocate(local_118,2,8);
          }
LAB_10059b210:
          pQVar12 = (QWidget *)0x3acb;
          if (iVar6 != 0) {
            QHostAddress::toString();
            iVar6 = FUN_10059d020(&local_120,0);
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_c9 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_c9) goto LAB_10059b27d;
              }
              QArrayData::deallocate(local_120,2,8);
            }
LAB_10059b27d:
            pQVar12 = (QWidget *)0x3acc;
            if (iVar6 != 0) {
              QHostAddress::toString();
              iVar6 = FUN_10059d020(&local_128,3);
              if (*(int *)local_128 != -1) {
                if (*(int *)local_128 != 0) {
                  LOCK();
                  *(int *)local_128 = *(int *)local_128 + -1;
                  local_c9 = *(int *)local_128 != 0;
                  UNLOCK();
                  if ((bool)local_c9) goto LAB_10059b2ed;
                }
                QArrayData::deallocate(local_128,2,8);
              }
LAB_10059b2ed:
              pQVar12 = (QWidget *)0x3acd;
              if (iVar6 != 0) {
                QHostAddress::toString();
                iVar6 = FUN_10059d020(&local_130,3);
                if (*(int *)local_130 != -1) {
                  if (*(int *)local_130 != 0) {
                    LOCK();
                    *(int *)local_130 = *(int *)local_130 + -1;
                    local_c9 = *(int *)local_130 != 0;
                    UNLOCK();
                    if ((bool)local_c9) goto LAB_10059b35d;
                  }
                  QArrayData::deallocate(local_130,2,8);
                }
LAB_10059b35d:
                pQVar12 = (QWidget *)0x3ace;
                if (iVar6 != 0) {
                  FUN_10014aa30(local_c8,0xa000001,0xa000003,0xff000000);
                  uVar7 = QHostAddress::toIPv4Address();
                  uVar8 = QHostAddress::toIPv4Address();
                  uVar9 = QHostAddress::toIPv4Address();
                  iVar6 = FUN_10014ac10(local_c8,uVar7,uVar8,uVar9);
                  pQVar12 = (QWidget *)0x3ac7;
                  switch(iVar6) {
                  case 0:
                    FUN_10059bfc0(param_1);
                    uVar11 = 0;
                    goto LAB_10059b5b0;
                  default:
                    QString::number((int)&local_138,iVar6);
                    FUN_1000341d0(&local_f0,&local_138);
                    pQVar12 = (QWidget *)0x80015276;
                    if (*(int *)local_138 != -1) {
                      if (*(int *)local_138 != 0) {
                        LOCK();
                        *(int *)local_138 = *(int *)local_138 + -1;
                        local_c9 = *(int *)local_138 != 0;
                        UNLOCK();
                        if ((bool)local_c9) break;
                      }
                      QArrayData::deallocate(local_138,2,8);
                    }
                    break;
                  case 3:
                  case 4:
                    break;
                  case 5:
                  case 6:
                    pQVar12 = (QWidget *)0x3ac8;
                    break;
                  case 7:
                  case 8:
                    pQVar12 = (QWidget *)0x3ac9;
                    break;
                  case 9:
                  case 0xb:
                    pQVar12 = (QWidget *)0x3acf;
                    break;
                  case 10:
                    pQVar12 = (QWidget *)0x3ad0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_178 = (QArrayData *)QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
  local_180 = 0x80000000;
  local_190._8_8_ = (QObject *)0x0;
  FUN_100a1c600(local_170,uVar2,&local_178,local_190 + 8);
  QVariant::~QVariant((QVariant *)(local_190 + 8));
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_c9 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_10059b510;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_10059b510:
  iVar6 = CMessageManager::instance();
  pQVar3 = *(QStringList **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10);
  pQVar10 = (QStringList *)0x0;
  if ((pQVar3 != (QStringList *)0x0) &&
     (pQVar10 = (QStringList *)0x0, (*(byte *)((long)pQVar3[1].field0_0x0.field1 + 0x20) & 1) != 0))
  {
    pQVar10 = pQVar3;
  }
  local_190._0_8_ = puVar4;
  CMessageManager::showMessageBox
            (iVar6,pQVar12,pQVar10,(QStringList *)&local_f0.field0,(CSlotInfo *)local_190,
             SUB81(local_170,0));
  FUN_100039a80(local_190);
  QVariant::~QVariant(local_150);
  if (local_170[0] != (int *)0x0) {
    LOCK();
    *local_170[0] = *local_170[0] + -1;
    local_c9 = *local_170[0] != 0;
    UNLOCK();
    if ((!(bool)local_c9) && (local_170[0] != (int *)0x0)) {
      operator_delete(local_170[0]);
    }
  }
  uVar11 = 1;
LAB_10059b5b0:
  FUN_100039a80(&local_f0);
  QHostAddress::~QHostAddress(local_d8);
  QHostAddress::~QHostAddress(local_e0);
  QHostAddress::~QHostAddress(local_e8);
  if (lVar1 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

