
undefined8 FUN_100dba8d0(undefined8 param_1)

{
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
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
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_c8 = (QArrayData *)
             QString::fromAscii_helper
                       ("%1%2%3%4   %5%6%7%8%9%10%11%12%13%14%15%16%17%18%19%20%21%22\n",0x3d);
  local_d0 = (QArrayData *)QString::fromAscii_helper("PID",3);
  QString::arg(&local_c0,&local_c8,&local_d0,0xfffffff6,0x20);
  local_d8 = (QArrayData *)QString::fromAscii_helper("COMMAND",7);
  QString::arg(&local_b8,&local_c0,&local_d8,0xffffffee,0x20);
  local_e0 = (QArrayData *)QString::fromAscii_helper("%CPU",4);
  QString::arg(&local_b0,&local_b8,&local_e0,0xfffffff8,0x20);
  local_e8 = (QArrayData *)QString::fromAscii_helper("TIME",4);
  QString::arg(&local_a8,&local_b0,&local_e8,0xe,0x20);
  local_f0 = (QArrayData *)QString::fromAscii_helper("PROC_STAT",9);
  QString::arg(&local_a0,&local_a8,&local_f0,0xfffffff6,0x20);
  local_f8 = (QArrayData *)QString::fromAscii_helper("THRDS_STAT",10);
  QString::arg(&local_98,&local_a0,&local_f8,0xfffffff4,0x20);
  local_100 = (QArrayData *)QString::fromAscii_helper("UID",3);
  QString::arg(&local_90,&local_98,&local_100,0xfffffff6,0x20);
  local_108 = (QArrayData *)QString::fromAscii_helper("USER",4);
  QString::arg(&local_88,&local_90,&local_108,0xffffffee,0x20);
  local_110 = (QArrayData *)QString::fromAscii_helper("SANDBOX",7);
  QString::arg(&local_80,&local_88,&local_110,0xfffffff6,0x20);
  local_118 = (QArrayData *)QString::fromAscii_helper("PGRP",4);
  QString::arg(&local_78,&local_80,&local_118,0xfffffff6,0x20);
  local_120 = (QArrayData *)QString::fromAscii_helper("PPID",4);
  QString::arg(&local_70,&local_78,&local_120,0xfffffff6,0x20);
  local_128 = (QArrayData *)QString::fromAscii_helper("WQ",2);
  QString::arg(&local_68,&local_70,&local_128,0xfffffff6,0x20);
  local_130 = (QArrayData *)QString::fromAscii_helper("THREADS",7);
  QString::arg(&local_60,&local_68,&local_130,0xfffffff4,0x20);
  local_138 = (QArrayData *)QString::fromAscii_helper("FAULTS",6);
  QString::arg(&local_58,&local_60,&local_138,0xfffffff6,0x20);
  local_140 = (QArrayData *)QString::fromAscii_helper("COW",3);
  QString::arg(&local_50,&local_58,&local_140,0xfffffff6,0x20);
  local_148 = (QArrayData *)QString::fromAscii_helper("MSGSENT",7);
  QString::arg(&local_48,&local_50,&local_148,0xfffffff6,0x20);
  local_150 = (QArrayData *)QString::fromAscii_helper("MSGRECV",7);
  QString::arg(&local_40,&local_48,&local_150,0xfffffff6,0x20);
  local_158 = (QArrayData *)QString::fromAscii_helper("SYSBSD",6);
  QString::arg(&local_38,&local_40,&local_158,0xfffffff6,0x20);
  local_160 = (QArrayData *)QString::fromAscii_helper("SYSMACH",7);
  QString::arg(&local_30,&local_38,&local_160,0xfffffff6,0x20);
  local_168 = (QArrayData *)QString::fromAscii_helper("CSW",3);
  QString::arg(&local_28,&local_30,&local_168,0xfffffff6,0x20);
  local_170 = (QArrayData *)QString::fromAscii_helper("PAGEINS",7);
  QString::arg(&local_20,&local_28,&local_170,0xfffffff6,0x20);
  local_178 = (QArrayData *)QString::fromAscii_helper("PATH",4);
  QString::arg(param_1,&local_20,&local_178,0,0x20);
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_11 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbae10;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100dbae10:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbae40;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100dbae40:
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_11 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbae76;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_100dbae76:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbaea6;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100dbaea6:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_11 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbaedc;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100dbaedc:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbaf0c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100dbaf0c:
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_11 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbaf42;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100dbaf42:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbaf72;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100dbaf72:
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      local_11 = *(int *)local_158 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbafa8;
    }
    QArrayData::deallocate(local_158,2,8);
  }
LAB_100dbafa8:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbafd8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100dbafd8:
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_11 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb00e;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100dbb00e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_11 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb03e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100dbb03e:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_11 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb074;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100dbb074:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_11 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb0a4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100dbb0a4:
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_11 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb0da;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100dbb0da:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb10a;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100dbb10a:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_11 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb140;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100dbb140:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_11 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb170;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100dbb170:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_11 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb1a6;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100dbb1a6:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_11 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb1d6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100dbb1d6:
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_11 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb20c;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_100dbb20c:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_11 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb23c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100dbb23c:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_11 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb272;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100dbb272:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_11 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb2a2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100dbb2a2:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_11 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb2d8;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100dbb2d8:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_11 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb308;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100dbb308:
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_11 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb33e;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_100dbb33e:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_11 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb36e;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100dbb36e:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_11 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb3a4;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_100dbb3a4:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_11 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb3da;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100dbb3da:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_11 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb410;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100dbb410:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_11 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb446;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100dbb446:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_11 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb47c;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100dbb47c:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_11 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb4b2;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100dbb4b2:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_11 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb4e8;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100dbb4e8:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_11 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb51e;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100dbb51e:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_11 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb554;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100dbb554:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_11 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb58a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100dbb58a:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_11 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb5c0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100dbb5c0:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_11 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb5f6;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100dbb5f6:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_11 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb62c;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100dbb62c:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_11 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb662;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100dbb662:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_11 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100dbb698;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100dbb698:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return param_1;
}

