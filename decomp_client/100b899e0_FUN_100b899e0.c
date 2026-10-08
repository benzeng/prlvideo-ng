
undefined8 * FUN_100b899e0(undefined8 *param_1,long param_2,char param_3)

{
  long lVar1;
  QString *this;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QString local_220;
  QString local_218;
  QArrayData *local_210;
  QString local_208;
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  QString local_1c0;
  QString local_1b8;
  QArrayData *local_1b0;
  QString local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QString local_190;
  QString local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QString local_168;
  QString local_160;
  QArrayData *local_158;
  undefined8 local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  undefined1 local_b8 [8];
  QString aQStack_b0 [2];
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
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x613,"GetLicenseQueryItems");
  }
  *param_1 = PTR_shared_null_1021e15e8;
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_b8 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("I",1);
  QString::operator=((QString *)local_b8,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_31 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89ac5;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b89ac5:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_a0,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_a0 + 0x10) + (int)local_a0
                   );
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b89b37;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100b89b37:
  local_d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x1c0,"GetIdentifier");
  }
  QString::arg(&local_c8,&local_d0,*(undefined4 *)(param_2 + 0x30),0,10,0x20);
  this = (QString *)(local_b8 + 8);
  QString::operator=(this,&local_c8);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89c07;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100b89c07:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89c3d;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b89c3d:
  FUN_1001c44c0(param_1,local_b8);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("P",1);
  QString::operator=((QString *)local_b8,&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89cad;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100b89cad:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_98,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_98 + 0x10) + (int)local_98
                   );
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b89d1f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
LAB_100b89d1f:
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x1b4,"GetProduct");
  }
  QString::arg(&local_e0,&local_e8,(long)*(int *)(param_2 + 0x1c),0,10,0x20);
  QString::operator=(this,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_31 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89de9;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100b89de9:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_31 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89e1f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b89e1f:
  FUN_1001c44c0(param_1,local_b8);
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("V",1);
  QString::operator=((QString *)local_b8,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_31 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89e8f;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100b89e8f:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_90,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_90 + 0x10) + (int)local_90
                   );
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b89f01;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_100b89f01:
  local_100 = (QArrayData *)QString::fromAscii_helper("%1",2);
  local_110 = (QArrayData *)QString::fromAscii_helper("prl_version",0xb);
  lVar1 = param_2 + 0x10;
  FUN_100b7c5b0(&local_108,lVar1,&local_110);
  iVar2 = QString::toInt((bool *)&local_108,0);
  QString::arg(&local_f8,&local_100,(long)iVar2,0,10,0x20);
  QString::operator=(this,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89fc7;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100b89fc7:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b89ffd;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100b89ffd:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a033;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100b8a033:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a069;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b8a069:
  FUN_1001c44c0(param_1,local_b8);
  local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("E",1);
  QString::operator=((QString *)local_b8,&local_118);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a0d9;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100b8a0d9:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_88,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_88 + 0x10) + (int)local_88
                   );
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8a13f;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100b8a13f:
  local_128 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_120,&local_128,*(undefined4 *)(param_2 + 0x38),0,10,0x20);
  QString::operator=(this,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_31 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a1c0;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100b8a1c0:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_31 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a1f6;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100b8a1f6:
  FUN_1001c44c0(param_1,local_b8);
  local_130.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("S",1);
  QString::operator=((QString *)local_b8,&local_130);
  if (*(int *)local_130.field0_0x0 != -1) {
    if (*(int *)local_130.field0_0x0 != 0) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
      local_31 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a266;
    }
    QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
  }
LAB_100b8a266:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_80,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_80 + 0x10) + (int)local_80
                   );
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8a2cc;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100b8a2cc:
  local_140 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x286,"GetStartDate");
  }
  local_150 = *(undefined8 *)(param_2 + 0x58);
  QDate::toString(&local_148,&local_150,1);
  local_158 = (QArrayData *)QString::fromAscii_helper("-",1);
  uVar4 = QString::remove(&local_148,&local_158,1);
  QString::arg(&local_138,&local_140,uVar4,0,0x20);
  QString::operator=(this,&local_138);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_31 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a3e2;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_100b8a3e2:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_31 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a418;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100b8a418:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a44e;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100b8a44e:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a484;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100b8a484:
  FUN_1001c44c0(param_1,local_b8);
  local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("U",1);
  QString::operator=((QString *)local_b8,&local_160);
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a4f4;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_100b8a4f4:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_78,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_78 + 0x10) + (int)local_78
                   );
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8a55a;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100b8a55a:
  local_170 = (QArrayData *)QString::fromAscii_helper("%1",2);
  local_180 = (QArrayData *)QString::fromAscii_helper("valid_unit",10);
  FUN_100b7c5b0(&local_178,lVar1,&local_180);
  uVar3 = QString::toUInt((bool *)&local_178,0);
  QString::arg(&local_168,&local_170,uVar3,0,10,0x20);
  QString::operator=(this,&local_168);
  if (*(int *)local_168.field0_0x0 != -1) {
    if (*(int *)local_168.field0_0x0 != 0) {
      LOCK();
      *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
      local_31 = *(int *)local_168.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a61b;
    }
    QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
  }
LAB_100b8a61b:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_31 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a651;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100b8a651:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      local_31 = *(int *)local_180 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a687;
    }
    QArrayData::deallocate(local_180,2,8);
  }
LAB_100b8a687:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a6bd;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100b8a6bd:
  FUN_1001c44c0(param_1,local_b8);
  local_188.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("G",1);
  QString::operator=((QString *)local_b8,&local_188);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_31 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a72d;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100b8a72d:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_70,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_70 + 0x10) + (int)local_70
                   );
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8a793;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100b8a793:
  local_198 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x29e,"GetValidPeriod");
  }
  QString::arg(&local_190,&local_198,*(undefined4 *)(param_2 + 0x44),0,10,0x20);
  QString::operator=(this,&local_190);
  if (*(int *)local_190.field0_0x0 != -1) {
    if (*(int *)local_190.field0_0x0 != 0) {
      LOCK();
      *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
      local_31 = *(int *)local_190.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a85c;
    }
    QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
  }
LAB_100b8a85c:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a892;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100b8a892:
  FUN_1001c44c0(param_1,local_b8);
  local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("O",1);
  QString::operator=((QString *)local_b8,&local_1a0);
  if (*(int *)local_1a0.field0_0x0 != -1) {
    if (*(int *)local_1a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
      local_31 = *(int *)local_1a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8a902;
    }
    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
  }
LAB_100b8a902:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_68,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_68 + 0x10) + (int)local_68
                   );
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8a968;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100b8a968:
  local_1b0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x23a,"GetPlatform");
  }
  QString::arg(&local_1a8,&local_1b0,(long)*(int *)(param_2 + 0x20),0,10,0x20);
  QString::operator=(this,&local_1a8);
  if (*(int *)local_1a8.field0_0x0 != -1) {
    if (*(int *)local_1a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
      local_31 = *(int *)local_1a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8aa32;
    }
    QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
  }
LAB_100b8aa32:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      local_31 = *(int *)local_1b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8aa68;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100b8aa68:
  FUN_1001c44c0(param_1,local_b8);
  local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("L",1);
  QString::operator=((QString *)local_b8,&local_1b8);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_31 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8aad8;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_100b8aad8:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_60,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_60 + 0x10) + (int)local_60
                   );
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8ab3e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_100b8ab3e:
  local_1c8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x246,"GetLanguage");
  }
  QString::arg(&local_1c0,&local_1c8,(long)*(int *)(param_2 + 0x24),0,10,0x20);
  QString::operator=(this,&local_1c0);
  if (*(int *)local_1c0.field0_0x0 != -1) {
    if (*(int *)local_1c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
      local_31 = *(int *)local_1c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8ac08;
    }
    QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
  }
LAB_100b8ac08:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8ac3e;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100b8ac3e:
  FUN_1001c44c0(param_1,local_b8);
  local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("D",1);
  QString::operator=((QString *)local_b8,&local_1d0);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_31 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8acae;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_100b8acae:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_58,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_58 + 0x10) + (int)local_58
                   );
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8ad14;
      }
      QArrayData::deallocate(local_58,2,8);
    }
  }
LAB_100b8ad14:
  local_1e0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x252,"GetDistributor");
  }
  QString::arg(&local_1d8,&local_1e0,(long)*(int *)(param_2 + 0x28),0,10,0x20);
  QString::operator=(this,&local_1d8);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_31 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8adde;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_100b8adde:
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_31 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8ae14;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100b8ae14:
  FUN_1001c44c0(param_1,local_b8);
  local_1e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("T",1);
  QString::operator=((QString *)local_b8,&local_1e8);
  if (*(int *)local_1e8.field0_0x0 != -1) {
    if (*(int *)local_1e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
      local_31 = *(int *)local_1e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8ae84;
    }
    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
  }
LAB_100b8ae84:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_50,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_50 + 0x10) + (int)local_50
                   );
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8aeea;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100b8aeea:
  local_1f8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x27a,"GetType");
  }
  QString::arg(&local_1f0,&local_1f8,*(undefined4 *)(param_2 + 0x3c),0,10,0x20);
  QString::operator=(this,&local_1f0);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_31 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8afb3;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_100b8afb3:
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8afe9;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100b8afe9:
  FUN_1001c44c0(param_1,local_b8);
  local_200.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("F",1);
  QString::operator=((QString *)local_b8,&local_200);
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_31 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b059;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_100b8b059:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_48,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_48 + 0x10) + (int)local_48
                   );
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8b0bf;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100b8b0bf:
  local_210 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x25e,"GetFlags");
  }
  QString::arg(&local_208,&local_210,*(undefined4 *)(param_2 + 0x34),0,10,0x20);
  QString::operator=(this,&local_208);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_31 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b188;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_100b8b188:
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_31 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b1be;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100b8b1be:
  FUN_1001c44c0(param_1,local_b8);
  local_218.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("C",1);
  QString::operator=((QString *)local_b8,&local_218);
  if (*(int *)local_218.field0_0x0 != -1) {
    if (*(int *)local_218.field0_0x0 != 0) {
      LOCK();
      *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
      local_31 = *(int *)local_218.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b22e;
    }
    QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
  }
LAB_100b8b22e:
  if (param_3 != '\0') {
    QString::fromUtf8_helper((char *)&local_40,0x1e1d1bc);
    QString::insert((int)local_b8,(QChar *)0x0,(int)*(undefined8 *)(local_40 + 0x10) + (int)local_40
                   );
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b8b294;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100b8b294:
  local_228 = (QArrayData *)QString::fromAscii_helper("%1",2);
  local_238 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  FUN_100b7c5b0(&local_230,lVar1,&local_238);
  uVar3 = QString::toUInt((bool *)&local_230,0);
  QString::arg(&local_220,&local_228,uVar3,0,10,0x20);
  QString::operator=(this,&local_220);
  if (*(int *)local_220.field0_0x0 != -1) {
    if (*(int *)local_220.field0_0x0 != 0) {
      LOCK();
      *(int *)local_220.field0_0x0 = *(int *)local_220.field0_0x0 + -1;
      local_31 = *(int *)local_220.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b355;
    }
    QArrayData::deallocate((QArrayData *)local_220.field0_0x0,2,8);
  }
LAB_100b8b355:
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b38b;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_100b8b38b:
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b3c1;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_100b8b3c1:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b3f7;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_100b8b3f7:
  FUN_1001c44c0(param_1,local_b8);
  if (*(int *)aQStack_b0[0].field0_0x0 != -1) {
    if (*(int *)aQStack_b0[0].field0_0x0 != 0) {
      LOCK();
      *(int *)aQStack_b0[0].field0_0x0 = *(int *)aQStack_b0[0].field0_0x0 + -1;
      local_31 = *(int *)aQStack_b0[0].field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b8b43c;
    }
    QArrayData::deallocate((QArrayData *)aQStack_b0[0].field0_0x0,2,8);
  }
LAB_100b8b43c:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      UNLOCK();
      if (*(int *)local_b8 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_b8,2,8);
  }
  return param_1;
}

