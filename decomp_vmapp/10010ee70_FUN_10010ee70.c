
undefined8 FUN_10010ee70(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  QArrayData *pQVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  int local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QCoreApplication::applicationDirPath();
  QString::fromUtf8_helper((char *)&local_40,0x9f6d6c);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010eede;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10010eede:
  pQVar3 = (QArrayData *)QString::fromAscii_helper("/libMonitor",0xb);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_21 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar3;
  QString::fromUtf8_helper((char *)&local_38,0xa320a0);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010ef56;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10010ef56:
  QString::append(&local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010ef93;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10010ef93:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010efbe;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10010efbe:
  QString::fromUtf8_helper((char *)&local_30,0x9f6d82);
  QString::append(&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10010f010;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10010f010:
  QString::toLatin1();
  lVar4 = _dlopen(local_58 + *(long *)(local_58 + 0x10),4);
  param_1[4] = lVar4;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
LAB_10010f054:
      QArrayData::deallocate(local_58,1,8);
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_10010f054;
    }
    lVar4 = param_1[4];
  }
  if (lVar4 == 0) {
    QString::toLatin1();
    pQVar3 = local_60;
    lVar4 = *(long *)(local_60 + 0x10);
    uVar6 = _dlerror();
    FUN_1008e3970("","vm",0,"Can\'t open monitor library \"%s\" (%s)",pQVar3 + lVar4,uVar6);
    uVar6 = 0x80000195;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10010f1f9;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    goto LAB_10010f1f9;
  }
  pcVar5 = (code *)_dlsym(lVar4,"MonOpen");
  if (pcVar5 != (code *)0x0) {
    local_88 = param_1 + 5;
    param_1[6] = *(long *)(param_1[2] + 0x1940);
    local_78 = param_1[3];
    local_70 = param_2;
    iVar1 = (*pcVar5)(&local_88);
    if (-1 < iVar1) {
      if (local_68 == 2) {
        *(undefined4 *)(param_1 + 1) = 4;
        uVar2 = 3;
LAB_10010f17c:
        pcVar7 = (&PTR_s_SelfContext_100ba9440)[(int)uVar2];
      }
      else {
        if (local_68 == 1) {
          *(undefined4 *)(param_1 + 1) = 3;
          uVar2 = 2;
          goto LAB_10010f17c;
        }
        uVar2 = (int)param_1[1] - 1;
        if (uVar2 < 4) goto LAB_10010f17c;
        pcVar7 = "Unknown";
      }
      uVar6 = 0;
      FUN_1008e3970("","vm",0,"VMM mode %s",pcVar7);
      param_1[7] = local_80;
      if (local_80 != 0) goto LAB_10010f1f9;
    }
  }
  uVar6 = _dlerror();
  FUN_1008e3970("","vm",0,"Failed to load monitor (%s, %p)",uVar6,param_1[7]);
  (**(code **)(*param_1 + 0x30))(param_1,0);
  uVar6 = 0x80000195;
LAB_10010f1f9:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar6;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar6;
}

