
void FUN_1007d7d10(undefined8 param_1,long *param_2,int param_3,char param_4)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [12];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  undefined1 local_90 [12];
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::fromUtf8_helper((char *)&local_50,0x1e19007);
  QString::append(&local_50);
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e19018);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d7dcf;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007d7dcf:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d7dff;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007d7dff:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d7e2f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007d7e2f:
  local_78 = (Data *)*param_2;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar5 = (long)*(int *)(local_78 + 8);
      lVar1 = *param_2;
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_78 + lVar5 * 8) &&
         (lVar6 = *(int *)(local_78 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar5 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      QMetaObject::indexOfEnumerator("");
      auVar8 = QMetaObject::enumerator(0x221f740);
      local_90 = auVar8;
      pcVar2 = (char *)QMetaEnum::valueToKey((int)local_90);
      iVar7 = -1;
      if (pcVar2 != (char *)0x0) {
        sVar3 = _strlen(pcVar2);
        iVar7 = (int)sVar3;
      }
      local_80 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
      pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
      QString::append(&local_98);
      QString::append(&local_48);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d7fb2;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1007d7fb2:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d7fdf;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1007d7fdf:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d800f;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1007d800f:
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d8060;
    }
    QListData::dispose(local_78);
  }
LAB_1007d8060:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::number((int)&local_a8,param_3);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QString::append(&local_a0);
  QString::append(&local_48);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d80f9;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1007d80f9:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d812f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007d812f:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d815a;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1007d815a:
  if (3 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",4,
                  "key to save funnel = %s \n success = %d \n source type = %d",
                  local_b0 + *(long *)(local_b0 + 0x10),param_4,param_3);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d81e0;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
  }
LAB_1007d81e0:
  pcVar2 = "0";
  if (param_4 != '\0') {
    pcVar2 = "1";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar2,1);
  FUN_1007d29c0();
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d824c;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1007d824c:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

