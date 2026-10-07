
undefined1 FUN_100420ba0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  pid_t pVar5;
  size_t sVar6;
  void *pvVar7;
  undefined1 uVar8;
  size_t sVar9;
  int iVar10;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QFileInfo local_f8 [8];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pVar5 = _getpid();
  pcVar4 = DAT_1011bbe30;
  if (DAT_1011bbe30 != (char *)0x0) {
    _strlen(DAT_1011bbe30);
  }
  QString::fromLocal8Bit_helper((char *)&local_48,(int)pcVar4);
  local_50 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
  local_58 = (QArrayData *)QString::fromAscii_helper(".",1);
  local_60 = (QArrayData *)QString::fromAscii_helper("-",1);
  QString::replace(&local_50,&local_58,&local_60,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420c73;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100420c73:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420ca3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100420ca3:
  puVar3 = PTR_shared_null_100ba20d0;
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if ((DAT_1011bbdd0 != 0) && (DAT_1011bbdc8 != (char *)0x0)) {
    local_80 = (QArrayData *)QString::fromAscii_helper("%1.",3);
    pcVar4 = DAT_1011bbdc8;
    iVar10 = -1;
    if (DAT_1011bbdc8 != (char *)0x0) {
      sVar6 = _strlen(DAT_1011bbdc8);
      iVar10 = (int)sVar6;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar10);
    QString::arg(&local_78,&local_80,&local_88,0,0x20);
    QString::operator=(&local_70,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100420d63;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100420d63:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100420d93;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100420d93:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100420dc3;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100420dc3:
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_31 = *(int *)local_50 != 0;
    UNLOCK();
  }
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
  QString::fromUtf8_helper((char *)&local_40,0xa352d7);
  QString::operator=(&local_90,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420e3b;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100420e3b:
  local_a8 = (QArrayData *)QString::fromAscii_helper("%1.",3);
  QString::arg(&local_a0,&local_a8,&local_50,0,0x20);
  QString::operator=(&local_98,&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420ebb;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100420ebb:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100420ef1;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100420ef1:
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1.%2.%3%4.%5%6.%7",0x12);
  QFileInfo::QFileInfo(local_f8,&local_48);
  QFileInfo::baseName();
  QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
  QString::arg(&local_d8,&local_e0,&local_90,0,0x20);
  QString::arg(&local_d0,&local_d8,&local_70,0,0x20);
  QString::arg(&local_c8,&local_d0,(long)pVar5,0,10,0x20);
  QString::arg(&local_c0,&local_c8,&local_98,0,0x20);
  local_100 = (QArrayData *)QString::fromAscii_helper("mac",3);
  QString::arg(&local_b8,&local_c0,&local_100,0,0x20);
  local_108 = (QArrayData *)QString::fromAscii_helper("dmp",3);
  QString::arg(&local_b0,&local_b8,&local_108,0,0x20);
  QString::operator=(&local_68,&local_b0);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042108f;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_10042108f:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004210c5;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1004210c5:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004210fb;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1004210fb:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421131;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100421131:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421167;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100421167:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042119d;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10042119d:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004211d3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1004211d3:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421209;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100421209:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042123f;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10042123f:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421275;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100421275:
  QFileInfo::~QFileInfo(local_f8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004212b7;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1004212b7:
  FUN_1006e1c30(&local_110);
  QString::toLocal8Bit();
  QString::toLocal8Bit();
  sVar6 = (size_t)*(int *)(local_118 + 4);
  sVar9 = (size_t)*(int *)(local_120 + 4);
  lVar1 = *(long *)(local_118 + 0x10);
  lVar2 = *(long *)(local_120 + 0x10);
  pvVar7 = _malloc(sVar9 + 1);
  *param_1 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    uVar8 = 0;
    FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t allocate enough for path name!");
  }
  else {
    _memcpy(pvVar7,local_120 + lVar2,sVar9);
    *(undefined1 *)((long)pvVar7 + sVar9) = 0;
    pvVar7 = _malloc(sVar6 + 1);
    *param_2 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      _free((void *)*param_1);
      *param_1 = 0;
      uVar8 = 0;
      FUN_1008e3970("","PrlBreakpad",0,"Error: can\'t allocate enough for file name!");
    }
    else {
      _memcpy(pvVar7,local_118 + lVar1,sVar6);
      *(undefined1 *)((long)pvVar7 + sVar6) = 0;
      uVar8 = 1;
    }
  }
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10042140a;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_10042140a:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421440;
    }
    QArrayData::deallocate(local_118,1,8);
  }
LAB_100421440:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421476;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100421476:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_31 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004214ac;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1004214ac:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004214e2;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1004214e2:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421512;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100421512:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421542;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100421542:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100421572;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100421572:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return uVar8;
}

