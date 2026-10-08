
void FUN_100a226f0(undefined8 param_1,undefined8 param_2)

{
  string local_d8;
  undefined1 local_d7 [15];
  int local_c8;
  QSslCertificate local_c0 [8];
  QArrayData *local_b8;
  QSslCertificate local_b0 [8];
  QArrayData *local_a8;
  QSslCertificate local_a0 [8];
  QArrayData *local_98;
  QSslCertificate local_90 [8];
  QArrayData *local_88;
  QSslCertificate local_80 [8];
  QArrayData *local_78;
  QSslCertificate local_70 [8];
  QArrayData *local_68;
  QSslCertificate local_60 [8];
  QArrayData *local_58;
  QSslCertificate local_50 [8];
  QArrayData *local_48;
  QSslCertificate local_40 [8];
  QArrayData *local_38;
  QSslCertificate local_30 [8];
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100a23810(&local_38);
  QSslCertificate::QSslCertificate(local_30,&local_38,1);
  FUN_100a22f20(local_30,param_2);
  QSslCertificate::~QSslCertificate(local_30);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22763;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100a22763:
  FUN_100a23840(&local_48);
  QSslCertificate::QSslCertificate(local_40,&local_48,1);
  FUN_100a22f20(local_40,param_2);
  QSslCertificate::~QSslCertificate(local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a227c5;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100a227c5:
  FUN_100a23870(&local_58);
  QSslCertificate::QSslCertificate(local_50,&local_58,1);
  FUN_100a22f20(local_50,param_2);
  QSslCertificate::~QSslCertificate(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22827;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100a22827:
  FUN_100a238a0(&local_68);
  QSslCertificate::QSslCertificate(local_60,&local_68,1);
  FUN_100a22f20(local_60,param_2);
  QSslCertificate::~QSslCertificate(local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22889;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100a22889:
  FUN_100a238d0(&local_78);
  QSslCertificate::QSslCertificate(local_70,&local_78,1);
  FUN_100a22f20(local_70,param_2);
  QSslCertificate::~QSslCertificate(local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a228eb;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100a228eb:
  FUN_100a23900(&local_88);
  QSslCertificate::QSslCertificate(local_80,&local_88,1);
  FUN_100a22f20(local_80,param_2);
  QSslCertificate::~QSslCertificate(local_80);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a2294d;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100a2294d:
  FUN_100a23930(&local_98);
  QSslCertificate::QSslCertificate(local_90,&local_98,1);
  FUN_100a22f20(local_90,param_2);
  QSslCertificate::~QSslCertificate(local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a229c1;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_100a229c1:
  FUN_100a23960(&local_a8);
  QSslCertificate::QSslCertificate(local_a0,&local_a8,1);
  FUN_100a22f20(local_a0,param_2);
  QSslCertificate::~QSslCertificate(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_19 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22a35;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100a22a35:
  FUN_100a23990(&local_b8);
  QSslCertificate::QSslCertificate(local_b0,&local_b8,1);
  FUN_100a22f20(local_b0,param_2);
  QSslCertificate::~QSslCertificate(local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22aa9;
    }
    QArrayData::deallocate(local_b8,1,8);
  }
LAB_100a22aa9:
  FUN_100ab5900(&local_d8);
  if (((byte)local_d8 & 1) == 0) {
    local_c8 = (int)local_d7;
  }
  QByteArray::fromRawData((char *)&local_28,local_c8);
  QSslCertificate::QSslCertificate(local_c0,&local_28,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100a22b26;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100a22b26:
  FUN_100a22f20(local_c0,param_2);
  QSslCertificate::~QSslCertificate(local_c0);
  std::string::~string(&local_d8);
  return;
}

