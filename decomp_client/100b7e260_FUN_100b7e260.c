
undefined8 FUN_100b7e260(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 local_f8;
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
  QString local_a0;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  int *local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0x80011000;
  }
  uVar4 = FUN_100b8f730();
  cVar2 = FUN_100b8f780(uVar4,param_1);
  if (cVar2 != '\0') {
    return 0x80011015;
  }
  uVar4 = FUN_100b8f730();
  cVar2 = FUN_100b8fac0(uVar4,param_1);
  if (cVar2 != '\0') {
    return 0x80011062;
  }
  if (7 < *(uint *)(param_1 + 0x1c)) {
    return 0x80011003;
  }
  if ((0x83U >> (*(uint *)(param_1 + 0x1c) & 0x1f) & 1) == 0) {
    return 0x80011003;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (0xe < iVar3) {
    if (iVar3 != 0xf) goto switchD_100b7e303_default;
    goto LAB_100b7e36b;
  }
  switch(iVar3) {
  case 0:
    break;
  case 1:
  case 2:
    return 0x80011002;
  case 3:
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp"
                    ,0x214,"GetProtected");
    }
    if (*(int *)(param_1 + 0x80) == 0) {
      return 0x80011002;
    }
    if (1 < *(int *)(param_1 + 0x18) - 9U) {
      return 0x80011002;
    }
    break;
  case -1:
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","v.m_ver != s_nInvalidVer",
                  "Pd4License.cpp",0x3f,"operator<");
    iVar3 = *(int *)(param_1 + 0x18);
  default:
switchD_100b7e303_default:
    if ((iVar3 != 4) && (iVar3 < 5 || iVar3 == 0xf)) {
      return 0x80011002;
    }
LAB_100b7e36b:
    cVar2 = FUN_100b7f6a0(param_1);
    if ((cVar2 == '\0') && (cVar2 = FUN_100b7f860(param_1), cVar2 == '\0')) {
      return 0x80011002;
    }
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    return 0x80011011;
  }
  if ((*(uint *)(param_1 + 0x20) < 7) && ((0x46U >> (*(uint *)(param_1 + 0x20) & 0x1f) & 1) != 0)) {
    return 0x80011004;
  }
  if (((*(int *)(param_1 + 0x24) == 0) || (*(int *)(param_1 + 0x68) != 0)) ||
     (cVar2 = FUN_100d93e60(), cVar2 != '\0')) goto LAB_100b7ee12;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("en_US",5);
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 1:
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("cs_CZ",5);
    cVar2 = operator==(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
    break;
  case 2:
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("de_DE",5);
    cVar2 = operator==(&local_38,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    break;
  case 3:
  case 10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    if ((DAT_1023142a0 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023142a0), iVar3 != 0)) {
      local_50 = (int *)PTR_shared_null_1021e15e8;
      local_58 = (QArrayData *)QString::fromAscii_helper("en_US",5);
      FUN_1000341d0(&local_50,&local_58);
      local_60 = (QArrayData *)QString::fromAscii_helper("en_GB",5);
      FUN_1000341d0(&local_50,&local_60);
      local_68 = (QArrayData *)QString::fromAscii_helper("en_EU",5);
      FUN_1000341d0(&local_50,&local_68);
      local_70 = (QArrayData *)QString::fromAscii_helper("en_AU",5);
      FUN_1000341d0(&local_50,&local_70);
      local_78 = (QArrayData *)QString::fromAscii_helper("en_CA",5);
      FUN_1000341d0(&local_50,&local_78);
      local_80 = (QArrayData *)QString::fromAscii_helper("en_SG",5);
      FUN_1000341d0(&local_50,&local_80);
      local_88 = (QArrayData *)QString::fromAscii_helper("en_NL",5);
      FUN_1000341d0(&local_50,&local_88);
      pQVar5 = (QArrayData *)QString::fromAscii_helper("en_SE",5);
      local_90 = pQVar5;
      FUN_1000341d0(&local_50,&local_90);
      DAT_102314298 = local_50;
      if (*local_50 != -1) {
        if (*local_50 == 0) {
          QListData::detach(0x2314298);
          iVar3 = DAT_102314298[2];
          if (iVar3 != DAT_102314298[3]) {
            piVar7 = local_50 + (long)local_50[2] * 2 + 4;
            piVar8 = DAT_102314298 + (long)iVar3 * 2 + 4;
            lVar6 = (long)DAT_102314298[3] * 8 + (long)iVar3 * -8;
            do {
              piVar1 = *(int **)piVar7;
              *(int **)piVar8 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_29 = *piVar1 != 0;
                UNLOCK();
              }
              piVar8 = piVar8 + 2;
              piVar7 = piVar7 + 2;
              lVar6 = lVar6 + -8;
              pQVar5 = local_90;
            } while (lVar6 != 0);
          }
        }
        else {
          LOCK();
          *local_50 = *local_50 + 1;
          local_29 = *local_50 != 0;
          UNLOCK();
        }
      }
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          pQVar5 = local_90;
          if ((bool)local_29) goto LAB_100b7ec62;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_100b7ec62:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ec8e;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100b7ec8e:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ecba;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100b7ecba:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ece6;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100b7ece6:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ed12;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100b7ed12:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ed3e;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100b7ed3e:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ed6a;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100b7ed6a:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b7ed96;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100b7ed96:
      FUN_100039a80(&local_50);
      ___cxa_atexit(FUN_1002b5b40,&DAT_102314298,0x100000000);
      ___cxa_guard_release(&DAT_1023142a0);
    }
    cVar2 = QtPrivate::QStringList_contains(&DAT_102314298,&local_38,1);
    break;
  case 4:
    local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("es_ES",5);
    cVar2 = operator==(&local_38,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_29 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
    break;
  case 5:
    local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("fr_FR",5);
    cVar2 = operator==(&local_38,&local_a0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_29 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
    break;
  case 6:
    local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("it_IT",5);
    cVar2 = operator==(&local_38,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_29 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
    break;
  case 7:
    local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ja_JP",5);
    cVar2 = operator==(&local_38,&local_b0);
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_29 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
    break;
  case 8:
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pl_PL",5);
    cVar2 = operator==(&local_38,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
    break;
  case 9:
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ru_RU",5);
    cVar2 = operator==(&local_38,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
    break;
  case 0xb:
    local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("zh_CN",5);
    cVar2 = operator==(&local_38,&local_c8);
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_29 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
    break;
  case 0xc:
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("zh_TW",5);
    cVar2 = operator==(&local_38,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_29 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
    break;
  case 0xd:
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("hu_HU",5);
    cVar2 = operator==(&local_38,&local_d8);
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_29 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
    break;
  case 0xe:
    local_e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ro_RO",5);
    cVar2 = operator==(&local_38,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_29 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
    break;
  case 0xf:
    local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ko_KR",5);
    cVar2 = operator==(&local_38,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_29 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
    break;
  case 0x10:
    local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("pt_BR",5);
    cVar2 = operator==(&local_38,&local_f0);
    if (*(int *)local_f0.field0_0x0 != -1) {
      if (*(int *)local_f0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
        local_29 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) break;
      }
      QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
    }
    break;
  default:
    goto switchD_100b7e471_default;
  }
  if (cVar2 == '\0') {
switchD_100b7e471_default:
    if (*(int *)local_38.field0_0x0 == -1) {
      return 0x80011005;
    }
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return 0x80011005;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    return 0x80011005;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b7ee12;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100b7ee12:
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x226,"IsDateExpired");
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar6 = QDate::currentDate();
    if (*(long *)(param_1 + 0x60) < lVar6) {
      cVar2 = FUN_100b8eff0(param_1);
      if (cVar2 != '\0') {
        return 0x80011074;
      }
      cVar2 = FUN_100b8f110(param_1,1);
      if (cVar2 != '\0') {
        return 0x80011074;
      }
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                      "Pd4License.cpp",0x208,"GetVolume");
      }
      if (*(int *)(param_1 + 0x7c) != 0) {
        if (*(char *)(param_1 + 8) == '\0') {
          FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed",
                        "Pd4License.cpp",0x1cc,"GetTrial");
        }
        if (*(int *)(param_1 + 0x68) == 0) {
          return 0x80011077;
        }
      }
      return 0x80011001;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      local_f8 = QDate::currentDate();
      lVar6 = QDate::addDays((longlong)&local_f8);
      if (lVar6 < *(long *)(param_1 + 0x58)) {
        return 0x80011014;
      }
    }
  }
  return 0;
}

