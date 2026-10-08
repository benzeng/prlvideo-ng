
int FUN_100d6d450(undefined8 param_1,undefined4 param_2,undefined8 param_3,bool *param_4,int param_5
                 )

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined8 local_a0;
  QArrayData *local_98;
  undefined4 local_8c;
  QArrayData *local_88;
  QArrayData *local_80;
  int *local_78;
  long *local_70;
  long *local_68;
  undefined4 local_60;
  int *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_b8 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar5 = 0x8158018;
  iVar10 = 10;
  switch(param_5) {
  case 0:
    goto switchD_100d6d4b5_caseD_0;
  case 1:
  case 2:
  case 6:
  case 9:
    break;
  case 3:
    iVar10 = 0xc;
    break;
  case 4:
  case 5:
    iVar10 = 3;
    break;
  case 7:
  case 8:
  case 10:
    iVar10 = 0xb;
    break;
  case 0xb:
    iVar10 = 5;
    break;
  default:
    goto switchD_100d6d4b5_default;
  }
  iVar5 = QVariant::type();
  if (iVar5 == iVar10) {
switchD_100d6d4b5_caseD_0:
    uVar3 = QVariant::type();
    iVar5 = 0x8158018;
    switch(uVar3) {
    case 3:
      local_8c = QVariant::toUInt(param_4);
      QByteArray::QByteArray((QByteArray *)&local_98,(char *)&local_8c,4);
      QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_98,1,8);
      }
      break;
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
      goto switchD_100d6d4b5_default;
    case 5:
      local_a0 = QVariant::toULongLong(param_4);
      QByteArray::QByteArray((QByteArray *)&local_a8,(char *)&local_a0,8);
      QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_a8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
      break;
    case 10:
      QVariant::toString();
      if (*(int *)(local_48 + 4) != 0) {
        pcVar7 = (char *)QString::utf16();
        QByteArray::QByteArray((QByteArray *)&local_50,pcVar7,*(int *)(local_48 + 4) * 2 + 2);
        QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6d6d8;
          }
          QArrayData::deallocate(local_50,1,8);
        }
      }
LAB_100d6d6d8:
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_48,2,8);
      }
      break;
    case 0xb:
      QVariant::toStringList();
      local_78 = local_58;
      if (*local_58 != -1) {
        if (*local_58 == 0) {
          QListData::detach((int)&local_78);
          iVar5 = local_78[2];
          if (iVar5 != local_78[3]) {
            local_58 = local_58 + (long)local_58[2] * 2 + 4;
            piVar8 = local_78 + (long)iVar5 * 2 + 4;
            lVar6 = (long)local_78[3] * 8 + (long)iVar5 * -8;
            do {
              piVar1 = *(int **)local_58;
              *(int **)piVar8 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              piVar8 = piVar8 + 2;
              local_58 = local_58 + 2;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *local_58 = *local_58 + 1;
          local_31 = *local_58 != 0;
          UNLOCK();
        }
      }
      plVar9 = (long *)(local_78 + (long)local_78[2] * 2 + 4);
      local_68 = (long *)(local_78 + (long)local_78[3] * 2 + 4);
      local_70 = plVar9;
      if (local_78[2] != local_78[3]) {
        do {
          local_60 = 1;
          local_70 = plVar9;
          if (*(int *)(*plVar9 + 4) != 0) {
            pcVar7 = (char *)QString::utf16();
            QByteArray::QByteArray((QByteArray *)&local_80,pcVar7,*(int *)(*plVar9 + 4) * 2 + 2);
            QByteArray::append((QByteArray *)&local_40);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100d6d8d3;
              }
              QArrayData::deallocate(local_80,1,8);
            }
          }
LAB_100d6d8d3:
          plVar9 = local_70 + 1;
          local_70 = plVar9;
        } while (plVar9 != local_68);
      }
      local_60 = 1;
      FUN_100039a80(&local_78);
      if (*(uint *)(local_40 + 4) != 0) {
        QByteArray::QByteArray((QByteArray *)&local_88,2,'\0');
        QByteArray::append((QByteArray *)&local_40);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6d953;
          }
          QArrayData::deallocate(local_88,1,8);
        }
      }
LAB_100d6d953:
      FUN_100039a80(&local_58);
      break;
    case 0xc:
      QVariant::toByteArray();
      QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_b0);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
      break;
    default:
      goto switchD_100d6d536_default;
    }
    if (param_5 == 0) {
      iVar5 = QVariant::type();
      uVar4 = iVar5 - 3;
      param_5 = 0;
      if (uVar4 < 10) {
        iVar5 = 0x8158018;
        if ((0x385U >> (uVar4 & 0x1f) & 1) != 0) {
          param_5 = *(int *)(&DAT_101db2a70 + (long)(int)uVar4 * 4);
          goto LAB_100d6d9a2;
        }
      }
      else {
        iVar5 = 0x8158018;
      }
    }
    else {
LAB_100d6d9a2:
      pQVar2 = local_b8;
      local_b8 = local_40;
      local_40 = pQVar2;
      iVar5 = 0x8000000;
    }
  }
  else {
switchD_100d6d536_default:
    iVar5 = 0x8158018;
  }
switchD_100d6d4b5_default:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d6da10;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d6da10:
  if (iVar5 == 0x8000000) {
    if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f)
      ;
    }
    iVar5 = FUN_100d6c2d0(param_1,param_2,param_3,param_5,local_b8 + *(long *)(local_b8 + 0x10),
                          *(uint *)(local_b8 + 4));
  }
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return iVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
  return iVar5;
}

