
void FUN_100155b20(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  Data_conflict local_2b8;
  undefined4 local_2b0;
  QArrayData *local_2a8;
  QVariant local_2a0;
  QArrayData *local_290;
  Data_conflict local_288;
  undefined4 local_280;
  QArrayData *local_278;
  QVariant local_270;
  QArrayData *local_260;
  QString local_258;
  QVariant local_250;
  QArrayData *local_240;
  QVariant local_238;
  QVariant local_228;
  QArrayData *local_218;
  QVariant local_210;
  QVariant local_200;
  QArrayData *local_1f0;
  QVariant local_1e8;
  QVariant local_1d8;
  QArrayData *local_1c8;
  QVariant local_1c0;
  Data_conflict local_1b0;
  undefined4 local_1a8;
  QArrayData *local_1a0;
  QVariant local_198;
  QArrayData *local_188;
  Data_conflict local_180;
  undefined4 local_178;
  QArrayData *local_170;
  QVariant local_168;
  QArrayData *local_158;
  Data_conflict local_150;
  undefined4 local_148;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QString local_120;
  Data_conflict local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QVariant local_100;
  QArrayData *local_f0;
  Data_conflict local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  QArrayData *local_a8;
  QVariant local_a0;
  QArrayData *local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Login",5);
  QSettings::beginGroup((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100155b91;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100155b91:
  local_58 = (QArrayData *)QString::fromAscii_helper("Servers",7);
  iVar3 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100155be9;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100155be9:
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_78 = (QArrayData *)QString::fromAscii_helper("Server Name",0xb);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      QSettings::value((QString *)&local_70,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_70);
      QVariant::~QVariant((QVariant *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100155cb6;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100155cb6:
      local_a8 = (QArrayData *)QString::fromAscii_helper("Server Custom Name",0x12);
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      QSettings::value((QString *)&local_a0,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_a0);
      QVariant::~QVariant((QVariant *)&local_b8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100155d4e;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_100155d4e:
      local_d8 = (QArrayData *)QString::fromAscii_helper("Server Ip",9);
      local_e0 = 0x80000000;
      local_e8.field7 = 0;
      QSettings::value((QString *)&local_d0,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_d0);
      QVariant::~QVariant((QVariant *)&local_e8);
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100155dfb;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_100155dfb:
      local_108 = (QArrayData *)QString::fromAscii_helper("User Name",9);
      local_110 = 0x80000000;
      local_118.field7 = 0;
      QSettings::value((QString *)&local_100,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_100);
      QVariant::~QVariant((QVariant *)&local_118);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100155ea8;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100155ea8:
      local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_140 = (QArrayData *)QString::fromAscii_helper("Server Id",9);
      local_148 = 0x80000000;
      local_150.field7 = 0;
      QSettings::value((QString *)&local_138,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_138);
      QVariant::~QVariant((QVariant *)&local_150);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100155f63;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_100155f63:
      local_170 = (QArrayData *)QString::fromAscii_helper("Server Disp Id",0xe);
      local_178 = 0x80000000;
      local_180.field7 = 0;
      QSettings::value((QString *)&local_168,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_168);
      QVariant::~QVariant((QVariant *)&local_180);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015600d;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_10015600d:
      local_1a0 = (QArrayData *)QString::fromAscii_helper("Last Session Uuid",0x11);
      local_1a8 = 0x80000000;
      local_1b0.field7 = 0;
      QSettings::value((QString *)&local_198,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_198);
      QVariant::~QVariant((QVariant *)&local_1b0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001560b7;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_1001560b7:
      local_1c8 = (QArrayData *)QString::fromAscii_helper("Save Password",0xd);
      QVariant::QVariant(&local_1d8,false);
      QSettings::value((QString *)&local_1c0,&local_48);
      cVar1 = QVariant::toBool();
      QVariant::~QVariant(&local_1c0);
      QVariant::~QVariant(&local_1d8);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156157;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_100156157:
      iVar4 = QString::compare_helper
                        (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                         "localhost",0xffffffff,1);
      bVar10 = true;
      if (iVar4 != 0) {
        iVar4 = QString::compare_helper
                          (local_c0 + *(long *)(local_c0 + 0x10),*(undefined4 *)(local_c0 + 4),
                           "127.0.0.1",0xffffffff,1);
        bVar10 = iVar4 == 0;
      }
      local_1f0 = (QArrayData *)QString::fromAscii_helper("Use Local Login",0xf);
      QVariant::QVariant(&local_200,bVar10);
      QSettings::value((QString *)&local_1e8,&local_48);
      uVar2 = QVariant::toBool();
      QVariant::~QVariant(&local_1e8);
      QVariant::~QVariant(&local_200);
      if (*(int *)local_1f0 != -1) {
        if (*(int *)local_1f0 != 0) {
          LOCK();
          *(int *)local_1f0 = *(int *)local_1f0 + -1;
          local_31 = *(int *)local_1f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015624c;
        }
        QArrayData::deallocate(local_1f0,2,8);
      }
LAB_10015624c:
      local_218 = (QArrayData *)QString::fromAscii_helper("Connection Security",0x13);
      QVariant::QVariant(&local_228,1);
      QSettings::value((QString *)&local_210,&local_48);
      uVar5 = QVariant::toInt((bool *)&local_210);
      QVariant::~QVariant(&local_210);
      QVariant::~QVariant(&local_228);
      if (*(int *)local_218 != -1) {
        if (*(int *)local_218 != 0) {
          LOCK();
          *(int *)local_218 = *(int *)local_218 + -1;
          local_31 = *(int *)local_218 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001562ea;
        }
        QArrayData::deallocate(local_218,2,8);
      }
LAB_1001562ea:
      local_240 = (QArrayData *)QString::fromAscii_helper("Video compression type",0x16);
      QVariant::QVariant(&local_250,0x10001);
      QSettings::value((QString *)&local_238,&local_48);
      uVar6 = QVariant::toInt((bool *)&local_238);
      QVariant::~QVariant(&local_238);
      QVariant::~QVariant(&local_250);
      if (*(int *)local_240 != -1) {
        if (*(int *)local_240 != 0) {
          LOCK();
          *(int *)local_240 = *(int *)local_240 + -1;
          local_31 = *(int *)local_240 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156384;
        }
        QArrayData::deallocate(local_240,2,8);
      }
LAB_100156384:
      if (cVar1 != '\0') {
        local_278 = (QArrayData *)QString::fromAscii_helper("Server Id",9);
        local_280 = 0x80000000;
        local_288.field7 = 0;
        QSettings::value((QString *)&local_270,&local_48);
        QVariant::toString();
        local_2a8 = (QArrayData *)QString::fromAscii_helper("User Password",0xd);
        local_2b0 = 0x80000000;
        local_2b8.field7 = 0;
        QSettings::value((QString *)&local_2a0,&local_48);
        QVariant::toString();
        FUN_1009dfb70(&local_258,&local_260,&local_290);
        QString::operator=(&local_120,&local_258);
        if (*(int *)local_258.field0_0x0 != -1) {
          if (*(int *)local_258.field0_0x0 != 0) {
            LOCK();
            *(int *)local_258.field0_0x0 = *(int *)local_258.field0_0x0 + -1;
            local_31 = *(int *)local_258.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001564be;
          }
          QArrayData::deallocate((QArrayData *)local_258.field0_0x0,2,8);
        }
LAB_1001564be:
        if (*(int *)local_290 != -1) {
          if (*(int *)local_290 != 0) {
            LOCK();
            *(int *)local_290 = *(int *)local_290 + -1;
            local_31 = *(int *)local_290 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001564f4;
          }
          QArrayData::deallocate(local_290,2,8);
        }
LAB_1001564f4:
        QVariant::~QVariant(&local_2a0);
        QVariant::~QVariant((QVariant *)&local_2b8);
        if (*(int *)local_2a8 != -1) {
          if (*(int *)local_2a8 != 0) {
            LOCK();
            *(int *)local_2a8 = *(int *)local_2a8 + -1;
            local_31 = *(int *)local_2a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100156548;
          }
          QArrayData::deallocate(local_2a8,2,8);
        }
LAB_100156548:
        if (*(int *)local_260 != -1) {
          if (*(int *)local_260 != 0) {
            LOCK();
            *(int *)local_260 = *(int *)local_260 + -1;
            local_31 = *(int *)local_260 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10015657e;
          }
          QArrayData::deallocate(local_260,2,8);
        }
LAB_10015657e:
        QVariant::~QVariant(&local_270);
        QVariant::~QVariant((QVariant *)&local_288);
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_31 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001565d0;
          }
          QArrayData::deallocate(local_278,2,8);
        }
      }
LAB_1001565d0:
      uVar8 = FUN_100152280();
      lVar9 = FUN_100152380(uVar8,&local_60,&local_c0,&local_f0,&local_120,&local_128,&local_158,1);
      if (lVar9 == 0) {
        FUN_100df99c0("[SERVER_MNG]","prl_client_app",0,"(!)Error: Failed to add server");
      }
      else {
        FUN_100173ff0(lVar9,cVar1);
        FUN_100174630(lVar9,uVar2);
        FUN_1001747a0(lVar9,&local_188);
        FUN_1001747e0(lVar9,uVar5);
        FUN_10015a150(lVar9,&local_90);
        FUN_10015ab60(lVar9,uVar6);
      }
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001566da;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_1001566da:
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156717;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100156717:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10015674d;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_10015674d:
      if (*(int *)local_120.field0_0x0 != -1) {
        if (*(int *)local_120.field0_0x0 != 0) {
          LOCK();
          *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
          local_31 = *(int *)local_120.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156783;
        }
        QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
      }
LAB_100156783:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001567b9;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_1001567b9:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001567ef;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1001567ef:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156825;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100156825:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100156855;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100156855:
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  QSettings::endArray();
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

