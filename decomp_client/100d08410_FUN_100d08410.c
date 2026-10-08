
undefined1 FUN_100d08410(long *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QString::trimmed();
  uVar4 = 1;
  if (*(int *)(local_30 + 4) == 0) goto LAB_100d089ca;
  local_38 = (QArrayData *)QString::fromAscii_helper("#",1);
  cVar2 = QString::startsWith(&local_30,&local_38,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d08496;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d08496:
  if (cVar2 != '\0') goto LAB_100d089ca;
  local_40 = (QArrayData *)QString::fromAscii_helper("=",1);
  iVar3 = QString::indexOf(&local_30,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d084f9;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d084f9:
  if (iVar3 == -1) {
    uVar4 = 0;
    goto LAB_100d089ca;
  }
  QString::mid((int)&local_48,(int)&local_30);
  QString::trimmed();
  QString::operator=(&local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d0855d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d0855d:
  QString::mid((int)&local_58,(int)&local_30);
  QString::trimmed();
  QString::operator=(&local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d085c2;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100d085c2:
  cVar2 = QString::startsWith(&local_58,0x22,1);
  if ((cVar2 == '\0') || (cVar2 = QString::endsWith(&local_58,0x22,1), cVar2 == '\0')) {
    cVar2 = QString::startsWith(&local_58,0x22,1);
    if (cVar2 == '\0') {
      cVar2 = QString::endsWith(&local_58,0x22,1);
      if (cVar2 == '\0') goto LAB_100d08691;
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    QString::mid((int)&local_68,(int)&local_58);
    QString::operator=(&local_58,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d08691;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100d08691:
    local_70 = (QArrayData *)QString::fromAscii_helper(".",1);
    iVar3 = QString::indexOf(&local_48,&local_70,0,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100d086ec;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100d086ec:
    if (iVar3 == -1) {
      pcVar1 = *(code **)(*param_1 + 0x28);
      local_78 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_80 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_78,&local_80);
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d08937;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100d08937:
      uVar4 = 1;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d0896a;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
    else {
      QString::mid((int)&local_88,(int)&local_48);
      QString::mid((int)&local_90,(int)&local_48);
      QString::operator=(&local_48,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_21 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d0876a;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_100d0876a:
      pcVar1 = *(code **)(*param_1 + 0x20);
      local_98 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_a0 = local_88;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
      }
      local_a8 = (QArrayData *)local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      (*pcVar1)(param_1,&local_98,&local_a0,&local_a8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_21 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d08815;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100d08815:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_21 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d0884b;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100d0884b:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_21 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d08881;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100d08881:
      uVar4 = 1;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100d0896a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
  }
LAB_100d0896a:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d0899a;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100d0899a:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d089ca;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d089ca:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return uVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return uVar4;
}

