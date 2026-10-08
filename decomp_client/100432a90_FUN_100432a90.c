
QFont * FUN_100432a90(QFont *param_1,long param_2,int *param_3,uint param_4)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined **ppuVar5;
  bool bVar6;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QFileIconProvider local_80 [16];
  QArrayData *local_70;
  QIcon local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QFont local_48 [16];
  QString local_38;
  undefined1 local_29;
  
  if ((((*param_3 < 0) || (iVar1 = param_3[1], iVar1 < 0)) || (*(long *)(param_3 + 4) == 0)) ||
     (*(int *)(**(long **)(param_2 + 0x10) + 0xc) - *(int *)(**(long **)(param_2 + 0x10) + 8) <=
      *param_3)) goto switchD_100432b7b_default;
  if (param_4 == 6) {
    if (iVar1 != 3) {
      FontUtils::getViewFont(SUB81(local_48,0));
    }
    else {
      FontUtils::getSmallFont(SUB81(local_48,0));
    }
    QFont::operator_cast_to_QVariant(param_1);
    if (iVar1 == 3) {
      QFont::~QFont(local_48);
      return param_1;
    }
    QFont::~QFont(local_48);
    return param_1;
  }
  if (param_4 == 3) {
    if (iVar1 == 2) {
      CVmSharedFolder::getPath();
    }
    else {
      local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
    }
    QVariant::QVariant((QVariant *)param_1,&local_38);
    if (*(int *)local_38.field0_0x0 == -1) {
      return param_1;
    }
    local_98.field0_0x0 = local_38.field0_0x0;
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
LAB_100432bda:
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
  else {
    switch(iVar1) {
    case 0:
      if (param_4 == 2) {
        uVar2 = CVmSharedFolder::isEnabled();
LAB_100432ca3:
        QVariant::QVariant((QVariant *)param_1,(bool)uVar2);
        return param_1;
      }
      if (param_4 == 10) {
        bVar3 = CVmSharedFolder::isEnabled();
        QVariant::QVariant((QVariant *)param_1,(uint)bVar3 * 2);
        return param_1;
      }
      break;
    case 1:
      if ((param_4 & 0xfffffffd) == 0) {
        CVmSharedFolder::getName();
        QVariant::QVariant((QVariant *)param_1,&local_50);
        if (*(int *)local_50.field0_0x0 == -1) {
          return param_1;
        }
        local_98.field0_0x0 = local_50.field0_0x0;
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_50.field0_0x0 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        goto LAB_100432bda;
      }
      break;
    case 2:
      if (param_4 == 2) {
        CVmSharedFolder::getPath();
        QVariant::QVariant((QVariant *)param_1,&local_90);
        if (*(int *)local_90.field0_0x0 == -1) {
          return param_1;
        }
        local_98.field0_0x0 = local_90.field0_0x0;
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_90.field0_0x0 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
      }
      else if (param_4 == 1) {
        CVmSharedFolder::getPath();
        cVar4 = FUN_100da0de0(&local_70);
        bVar6 = cVar4 == '\0';
        if (bVar6) {
          CVmSharedFolder::getPath();
          FUN_10011cd00(local_68,&local_88);
        }
        else {
          QFileIconProvider::QFileIconProvider(local_80);
          QFileIconProvider::icon(local_68,local_80,5);
        }
        QIcon::operator_cast_to_QVariant((QIcon *)param_1);
        if (bVar6) {
          QIcon::~QIcon(local_68);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_29 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100432e62;
            }
            QArrayData::deallocate(local_88,2,8);
          }
        }
LAB_100432e62:
        if (!bVar6) {
          QIcon::~QIcon(local_68);
          QFileIconProvider::~QFileIconProvider(local_80);
        }
        if (*(int *)local_70 == -1) {
          return param_1;
        }
        local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          UNLOCK();
          if (*(int *)local_70 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
      }
      else {
        if (param_4 != 0) break;
        CVmSharedFolder::getPath();
        MacUtils::getLocalizedFileName(&local_58);
        QVariant::QVariant((QVariant *)param_1,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100432dae;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
LAB_100432dae:
        if (*(int *)local_60 == -1) {
          return param_1;
        }
        local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
      }
      goto LAB_100432bda;
    case 3:
      if (param_4 == 2) {
        uVar2 = CVmSharedFolder::isReadOnly();
        goto LAB_100432ca3;
      }
      if (param_4 == 0) {
        cVar4 = CVmSharedFolder::isReadOnly();
        if (cVar4 == '\0') {
          ppuVar5 = &PTR_s_Read___Write_10226e918;
        }
        else {
          ppuVar5 = &PTR_s_Read_only_10226e910;
        }
        QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,(int)*ppuVar5);
        QVariant::QVariant((QVariant *)param_1,&local_98);
        if (*(int *)local_98.field0_0x0 == -1) {
          return param_1;
        }
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_98.field0_0x0 != 0) {
            return param_1;
          }
          local_29 = 0;
        }
        goto LAB_100432bda;
      }
    }
switchD_100432b7b_default:
    *(undefined4 *)(param_1 + 8) = 0x80000000;
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}

