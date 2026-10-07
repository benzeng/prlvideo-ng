
undefined1 FUN_10055e660(QString *param_1,undefined4 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  QArrayData *pQVar7;
  long *local_f0;
  QArrayData *local_e0;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QTypedArrayData<unsigned_short> *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  long local_90 [2];
  long local_80;
  int local_78 [17];
  undefined1 local_31;
  
  QFile::QFile((QFile *)local_90,param_1);
  cVar4 = QFile::open((QFile *)local_90,3);
  if (cVar4 == '\0') {
    uVar5 = 0;
    goto LAB_10055ebba;
  }
  local_78[0] = -1;
  FUN_1000d6220(local_90,local_78);
  iVar6 = 0;
  if (((local_78[0] == 0x65526153) && (iVar6 = FUN_1000d6260(local_90,param_2,&local_80), iVar6 < 1)
      ) && (*(int *)(*param_3 + 4) == 0)) {
    uVar5 = 1;
    goto LAB_10055eba6;
  }
  QString::toUtf8();
  iVar1 = *(int *)(local_98 + 4);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10055e73f;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_10055e73f:
  if (iVar6 != iVar1 + 1) {
    (**(code **)(local_90[0] + 0x70))(local_90);
    uVar5 = FUN_10055de80(param_1,param_2,param_3);
    goto LAB_10055ebba;
  }
  cVar4 = (**(code **)(local_90[0] + 0x88))(local_90,local_80 + -0x10);
  if (cVar4 == '\0') {
    local_a8 = param_1->field0_0x0;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    pQVar7 = local_a0 + *(long *)(local_a0 + 0x10);
    local_b8 = (QArrayData *)*param_3;
    if (1 < *(int *)local_b8 + 1U) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","StatesUtils",0,"writeStringOption failed. sav [%s], str [%s], optid %u",pQVar7
                  ,local_b0 + *(long *)(local_b0 + 0x10),param_2);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055eac6;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_10055eac6:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055eafc;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_10055eafc:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055eb32;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_10055eb32:
    if (*(int *)local_a8 == -1) {
      uVar5 = 0;
    }
    else {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) {
          uVar5 = 0;
          goto LAB_10055eba6;
        }
      }
      QArrayData::deallocate((QArrayData *)local_a8,2,8);
      uVar5 = 0;
    }
  }
  else {
    QString::toUtf8();
    if ((1 < *(uint *)local_c0) || (*(long *)(local_c0 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_c0,*(uint *)(local_c0 + 4) + 1,*(uint *)(local_c0 + 8) >> 0x1f)
      ;
    }
    pQVar7 = local_c0;
    lVar2 = *(long *)(local_c0 + 0x10);
    QString::toUtf8();
    cVar4 = FUN_1000d6450(local_90,param_2,pQVar7 + lVar2,*(int *)(local_c8 + 4) + 1);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055e82c;
      }
      QArrayData::deallocate(local_c8,1,8);
    }
LAB_10055e82c:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055e862;
      }
      QArrayData::deallocate(local_c0,1,8);
    }
LAB_10055e862:
    uVar5 = 1;
    if (cVar4 == '\0') {
      pQVar7 = (QArrayData *)param_1->field0_0x0;
      if (1 < *(int *)pQVar7 + 1U) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + 1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      lVar2 = *(long *)(local_d0 + 0x10);
      pQVar3 = (QArrayData *)*param_3;
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      FUN_1008e3970("","StatesUtils",0,"writeStringOption failed. sav [%s], str [%s], optid %u",
                    local_d0 + lVar2,local_e0 + *(long *)(local_e0 + 0x10),param_2);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055e93f;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_10055e93f:
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_31 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055e975;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_10055e975:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10055e9ab;
        }
        QArrayData::deallocate(local_d0,1,8);
      }
LAB_10055e9ab:
      if (*(int *)pQVar7 == -1) {
        uVar5 = 0;
      }
      else {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) {
            uVar5 = 0;
            goto LAB_10055eba6;
          }
        }
        QArrayData::deallocate(pQVar7,2,8);
        uVar5 = 0;
      }
    }
  }
LAB_10055eba6:
  local_f0 = local_90;
  (**(code **)(local_90[0] + 0x70))(local_f0);
LAB_10055ebba:
  QFile::~QFile((QFile *)local_90);
  return uVar5;
}

