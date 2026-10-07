
undefined8 FUN_100419540(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QRegExp local_48 [8];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_50 = (QArrayData *)
             QString::fromAscii_helper(":features:read:(\\S+):([0-9a-f]+),([0-9a-f]+)",0x2c);
  QRegExp::QRegExp(local_48,&local_50,1,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004195b1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004195b1:
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar2 = *param_2;
  lVar8 = 0;
  pcVar9 = (char *)(*(long *)(lVar2 + 0x10) + lVar2);
  if ((pcVar9 != (char *)0x0) && (*(uint *)(lVar2 + 4) != 0)) {
    lVar8 = 0;
    do {
      if (pcVar9[lVar8] == '\0') break;
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(lVar2 + 4));
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(pcVar9,(int)lVar8);
  iVar5 = QRegExp::indexIn(local_48,&local_60,0,0);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100419639;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100419639:
  if (iVar5 < 0) {
    pQVar3 = (QArrayData *)*param_2;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    uVar10 = 0;
    FUN_1008e3970("","gdbstub",0,"invalid Xfer command %s",pQVar3 + *(long *)(pQVar3 + 0x10));
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100419cc9;
      }
      QArrayData::deallocate(pQVar3,1,8);
    }
  }
  else {
    FUN_100416dc0(param_1);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x18 + (ulong)uVar6 * 4);
    QRegExp::cap((int)&local_68);
    local_70 = (QArrayData *)QString::fromAscii_helper("target.xml",10);
    cVar4 = QString::startsWith(&local_68,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004196d0;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1004196d0:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100419700;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100419700:
    uVar1 = *(undefined4 *)(param_1 + 0x98);
    if (cVar4 == '\0') {
      QRegExp::cap((int)&local_98);
      QString::toUtf8();
      FUN_100415120(&local_88,uVar1,local_90 + *(long *)(local_90 + 0x10));
      QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_88);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_29 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004198a4;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1004198a4:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004198da;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_1004198da:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100419910;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
    else {
      local_80 = *(QArrayData **)(param_1 + 0x628);
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
      }
      FUN_100414f50(&local_78,uVar1,&local_80);
      QByteArray::operator=((QByteArray *)&local_58,(QByteArray *)&local_78);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100419778;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_100419778:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_29 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100419910;
        }
        QArrayData::deallocate(local_80,2,8);
      }
    }
LAB_100419910:
    QRegExp::cap((int)&local_a0);
    uVar6 = QString::toUInt((bool *)&local_a0,0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_29 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100419971;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100419971:
    QRegExp::cap((int)&local_a8);
    iVar5 = QString::toUInt((bool *)&local_a8,0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_29 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004199d2;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_1004199d2:
    if (uVar6 < *(uint *)(local_58 + 4)) {
      if (uVar6 + iVar5 < *(uint *)(local_58 + 4)) {
        QByteArray::QByteArray((QByteArray *)&local_d0,"m",-1);
        QByteArray::mid((int)&local_d8,(int)&local_58);
        local_38 = local_d0;
        if (1 < *(int *)local_d0 + 1U) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + 1;
          local_29 = *(int *)local_d0 != 0;
          UNLOCK();
        }
        puVar7 = (undefined8 *)QByteArray::append((QByteArray *)&local_38);
        local_c8 = (QArrayData *)*puVar7;
        if (1 < *(int *)local_c8 + 1U) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + 1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
        }
        if (*(int *)local_38 != -1) {
          if (*(int *)local_38 != 0) {
            LOCK();
            *(int *)local_38 = *(int *)local_38 + -1;
            local_29 = *(int *)local_38 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419a97;
          }
          QArrayData::deallocate(local_38,1,8);
        }
LAB_100419a97:
        FUN_100419170(param_1,&local_c8);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_29 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419adc;
          }
          QArrayData::deallocate(local_c8,1,8);
        }
LAB_100419adc:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_29 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419b12;
          }
          QArrayData::deallocate(local_d8,1,8);
        }
LAB_100419b12:
        uVar10 = 1;
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_29 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419cc9;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
      }
      else {
        QByteArray::QByteArray((QByteArray *)&local_b8,"l",-1);
        QByteArray::mid((int)&local_c0,(int)&local_58);
        local_40 = local_b8;
        if (1 < *(int *)local_b8 + 1U) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + 1;
          local_29 = *(int *)local_b8 != 0;
          UNLOCK();
        }
        puVar7 = (undefined8 *)QByteArray::append((QByteArray *)&local_40);
        local_b0 = (QArrayData *)*puVar7;
        if (1 < *(int *)local_b0 + 1U) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + 1;
          local_29 = *(int *)local_b0 != 0;
          UNLOCK();
        }
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_29 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419c12;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100419c12:
        FUN_100419170(param_1,&local_b0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_29 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419c57;
          }
          QArrayData::deallocate(local_b0,1,8);
        }
LAB_100419c57:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_29 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419c8d;
          }
          QArrayData::deallocate(local_c0,1,8);
        }
LAB_100419c8d:
        uVar10 = 1;
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_29 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100419cc9;
          }
          QArrayData::deallocate(local_b8,1,8);
        }
      }
    }
    else {
      uVar10 = 1;
      FUN_10041a500(param_1);
    }
  }
LAB_100419cc9:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100419cf9;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100419cf9:
  QRegExp::~QRegExp(local_48);
  return uVar10;
}

