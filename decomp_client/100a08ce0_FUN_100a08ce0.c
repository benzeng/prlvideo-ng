
QVariant * FUN_100a08ce0(QVariant *param_1,long *param_2,uint *param_3,char *param_4)

{
  uint uVar1;
  QMapNodeBase *pQVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  QVariant *this;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  ulong uVar9;
  double dVar10;
  uint local_d4;
  QString local_d0;
  QString local_c8;
  QArrayData *local_c0;
  undefined *local_b8;
  QVariant local_b0;
  undefined *local_a0;
  undefined *local_98;
  uint local_8c;
  QMapNodeBase *local_88;
  QVariant local_80;
  QMapNodeBase *local_70;
  QMapNodeBase *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QMapNodeBase *local_48;
  QMapNodeBase *local_40;
  uint local_34;
  
  local_d4 = *param_3;
  uVar4 = FUN_100a0bfd0(param_2,&local_d4);
  switch(uVar4) {
  case 1:
    local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
    FUN_100a0bfd0(param_2,param_3);
    do {
      while( true ) {
        local_34 = *param_3;
        iVar5 = FUN_100a0bfd0(param_2,&local_34);
        if (iVar5 != 6) break;
        FUN_100a0bfd0(param_2,param_3);
      }
      if (iVar5 == 2) {
        FUN_100a0bfd0(param_2,param_3);
        QVariant::QVariant(param_1,(QMap *)&local_40);
        break;
      }
      if (iVar5 == 0) {
        *param_4 = '\0';
        local_48 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
        QVariant::QVariant(param_1,(QMap *)&local_48);
        pQVar2 = local_48;
        if (*(int *)local_48 == -1) break;
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_48 != 0);
          if (*(int *)local_48 != 0) break;
        }
        if (*(long *)(local_48 + 0x10) != 0) {
          FUN_100037d60();
          QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar2);
        break;
      }
      FUN_100a0bca0(&local_60,param_2,param_3,param_4);
      QVariant::toString();
      QVariant::~QVariant(&local_60);
      if (*param_4 == '\0') {
        local_68 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
        QVariant::QVariant(param_1,(QMap *)&local_68);
        pQVar2 = local_68;
        if (*(int *)local_68 == -1) {
          bVar8 = true;
        }
        else {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            UNLOCK();
            local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_68 != 0);
            if (*(int *)local_68 != 0) {
              bVar8 = true;
              goto LAB_100a0902a;
            }
          }
          bVar8 = true;
          if (*(long *)(local_68 + 0x10) != 0) {
            FUN_100037d60();
            QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)pQVar2);
        }
      }
      else {
        iVar5 = FUN_100a0bfd0(param_2,param_3);
        if (iVar5 == 5) {
          FUN_100a08ce0(&local_80,param_2,param_3,param_4);
          if (*param_4 == '\0') {
            local_88 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
            QVariant::QVariant(param_1,(QMap *)&local_88);
            pQVar2 = local_88;
            if (*(int *)local_88 == -1) {
              bVar8 = true;
            }
            else {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                UNLOCK();
                local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_88 != 0);
                if (*(int *)local_88 != 0) {
                  bVar8 = true;
                  goto LAB_100a09021;
                }
              }
              bVar8 = true;
              if (*(long *)(local_88 + 0x10) != 0) {
                FUN_100037d60();
                QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
              }
              QMapDataBase::freeData((QMapDataBase *)pQVar2);
            }
          }
          else {
            this = (QVariant *)FUN_10008c590(&local_40,&local_50);
            bVar8 = false;
            QVariant::operator=(this,&local_80);
          }
LAB_100a09021:
          QVariant::~QVariant(&local_80);
        }
        else {
          *param_4 = '\0';
          local_70 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
          QVariant::QVariant(param_1,(QMap *)&local_70);
          pQVar2 = local_70;
          if (*(int *)local_70 == -1) {
            bVar8 = true;
          }
          else {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              UNLOCK();
              local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_70 != 0);
              if (*(int *)local_70 != 0) {
                bVar8 = true;
                goto LAB_100a0902a;
              }
            }
            bVar8 = true;
            if (*(long *)(local_70 + 0x10) != 0) {
              FUN_100037d60();
              QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
            }
            QMapDataBase::freeData((QMapDataBase *)pQVar2);
          }
        }
      }
LAB_100a0902a:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_50 != 0);
          if (*(int *)local_50 != 0) goto LAB_100a09060;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100a09060:
    } while (!bVar8);
    pQVar2 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) {
          return param_1;
        }
      }
      if (*(long *)(local_40 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar2,(int)*(undefined8 *)(pQVar2 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar2);
    }
    break;
  default:
    *param_4 = '\0';
    goto LAB_100a09077;
  case 3:
    local_98 = PTR_shared_null_1021e15e8;
    FUN_100a0bfd0(param_2,param_3);
    do {
      while( true ) {
        local_8c = *param_3;
        iVar5 = FUN_100a0bfd0(param_2,&local_8c);
        if (iVar5 != 6) break;
        FUN_100a0bfd0(param_2,param_3);
      }
      if (iVar5 == 4) {
        FUN_100a0bfd0(param_2,param_3);
        QVariant::QVariant(param_1,(QList *)&local_98);
        break;
      }
      if (iVar5 == 0) {
        *param_4 = '\0';
        local_a0 = PTR_shared_null_1021e15e8;
        QVariant::QVariant(param_1,(QList *)&local_a0);
        FUN_100035ea0(&local_a0);
        break;
      }
      FUN_100a08ce0(&local_b0,param_2,param_3,param_4);
      cVar3 = *param_4;
      if (cVar3 == '\0') {
        local_b8 = PTR_shared_null_1021e15e8;
        QVariant::QVariant(param_1,(QList *)&local_b8);
        FUN_100035ea0((QList *)&local_b8);
      }
      else {
        FUN_10012ae80(&local_98,&local_b0);
      }
      QVariant::~QVariant(&local_b0);
    } while (cVar3 != '\0');
    FUN_100035ea0(&local_98);
    break;
  case 7:
    FUN_100a0bca0(param_1,param_2,param_3,param_4);
    break;
  case 8:
    FUN_100a0c1c0(param_2,param_3);
    uVar1 = *param_3;
    uVar9 = (ulong)uVar1;
    if ((int)uVar1 < *(int *)(*param_2 + 4)) {
      uVar9 = (ulong)(int)uVar1;
      do {
        local_c0 = (QArrayData *)QString::fromAscii_helper("0123456789+-.eE",0xf);
        iVar5 = QString::indexOf(&local_c0,
                                 *(undefined2 *)(*param_2 + *(long *)(*param_2 + 0x10) + uVar9 * 2),
                                 0,1);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            UNLOCK();
            local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_c0 != 0);
            if (*(int *)local_c0 != 0) goto LAB_100a09242;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100a09242:
      } while ((iVar5 != -1) && (uVar9 = uVar9 + 1, (long)uVar9 < (long)*(int *)(*param_2 + 4)));
    }
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::mid((int)&local_d0,(int)param_2);
    QString::operator=(&local_c8,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        UNLOCK();
        local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_d0.field0_0x0 != 0);
        if (*(int *)local_d0.field0_0x0 != 0) goto LAB_100a092cf;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_100a092cf:
    *param_3 = (uint)uVar9;
    iVar5 = QString::indexOf(&local_c8,0x2e,0,1);
    if (iVar5 == -1) {
      cVar3 = QString::startsWith(&local_c8,0x2d,1);
      if (cVar3 == '\0') {
        uVar7 = QString::toULongLong((bool *)&local_c8,0);
        QVariant::QVariant(param_1,uVar7);
      }
      else {
        lVar6 = QString::toLongLong((bool *)&local_c8,0);
        QVariant::QVariant(param_1,lVar6);
      }
    }
    else {
      dVar10 = (double)QString::toDouble((bool *)&local_c8);
      QVariant::QVariant(param_1,dVar10);
    }
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        UNLOCK();
        local_d4 = CONCAT31(local_d4._1_3_,*(int *)local_c8.field0_0x0 != 0);
        if (*(int *)local_c8.field0_0x0 != 0) {
          return param_1;
        }
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
    break;
  case 9:
    FUN_100a0bfd0(param_2,param_3);
    bVar8 = true;
    goto LAB_100a09331;
  case 10:
    FUN_100a0bfd0(param_2);
    bVar8 = false;
LAB_100a09331:
    QVariant::QVariant(param_1,bVar8);
    break;
  case 0xb:
    FUN_100a0bfd0(param_2,param_3);
LAB_100a09077:
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  return param_1;
}

