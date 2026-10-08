
undefined8 FUN_100221d20(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  Data_conflict local_140;
  undefined4 local_138;
  QArrayData *local_130;
  int *local_128 [4];
  QVariant local_108 [2];
  QLocale local_f0 [8];
  QString local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QVariant local_80;
  QArrayData *local_70;
  QVariant local_68;
  QArrayData *local_58;
  _func_void_Node_ptr *local_50;
  QVariant local_48;
  QArrayData *local_38;
  QVariant local_30;
  undefined1 local_19;
  
  FUN_10061abe0(&local_30,*(undefined8 *)(param_1 + 0x18),0);
  iVar4 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  if (iVar4 == -0x7ffef000) {
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    pcVar6 = "Error(!): License not valid.";
LAB_100221dc8:
    FUN_100df99c0("","prl_client_app",2,pcVar6);
    return 0x80000009;
  }
  cVar3 = FUN_10061b500(*(undefined8 *)(param_1 + 0x18),0x4000);
  if (cVar3 != '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    pcVar6 = "Error(!): Logging not available for non prlLicense.";
    goto LAB_100221dc8;
  }
  FUN_10061abe0(&local_48,*(undefined8 *)(param_1 + 0x18),0x10);
  QVariant::toString();
  QVariant::~QVariant(&local_48);
  if (*(int *)(local_38 + 4) == 0) {
    uVar7 = 0x80000009;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Error(!): Logging not available - empty binary license.")
      ;
    }
    goto LAB_100222366;
  }
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Register Installed Software %d.",
                  *(undefined4 *)(param_1 + 0x20));
  }
  puVar2 = PTR_s__location__102280a70;
  local_50 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  iVar4 = -1;
  if (PTR_s__location__102280a70 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s__location__102280a70);
    iVar4 = (int)sVar5;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  QVariant::QVariant(&local_68,5);
  FUN_10007af00(&local_50,&local_58,&local_68);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100221ed2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100221ed2:
  puVar2 = PTR_s__command__102280a68;
  iVar4 = -1;
  if (PTR_s__command__102280a68 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s__command__102280a68);
    iVar4 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar4);
  local_90 = (QArrayData *)QString::fromAscii_helper("licenses/%1/mark",0x10);
  QString::arg(&local_88,&local_90,&local_38,0,0x20);
  QVariant::QVariant(&local_80,&local_88);
  FUN_10007af00(&local_50,&local_70,&local_80);
  QVariant::~QVariant(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_19 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100221f88;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100221f88:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100221fbe;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100221fbe:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100221fee;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100221fee:
  local_98 = (QArrayData *)QString::fromAscii_helper("marker",6);
  QVariant::QVariant(&local_a8,*(int *)(param_1 + 0x20));
  FUN_10007af00(&local_50,&local_98,&local_a8);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10022206f;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10022206f:
  local_b0 = (QArrayData *)QString::fromAscii_helper("ProductVersion",0xe);
  local_c8.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("12.2.1-41615",0xc);
  QVariant::QVariant(&local_c0,&local_c8);
  FUN_10007af00(&local_50,&local_b0,&local_c0);
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_19 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10022210b;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10022210b:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100222141;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100222141:
  local_d0 = (QArrayData *)QString::fromAscii_helper("ProductLocale",0xd);
  QLocale::QLocale(local_f0);
  QLocale::name();
  QVariant::QVariant(&local_e0,&local_e8);
  FUN_10007af00(&local_50,&local_d0,&local_e0);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_19 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002221e4;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1002221e4:
  QLocale::~QLocale(local_f0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_19 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100222226;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100222226:
  local_130 = (QArrayData *)
              QString::fromAscii_helper
                        ("1onSoftwareRegistrationRequestFinished(PRL_RESULT, const QVariant&)",0x43)
  ;
  local_138 = 0x80000000;
  local_140.field7 = 0;
  FUN_100a1c600(local_128,param_1,&local_130,&local_140);
  QVariant::~QVariant((QVariant *)&local_140);
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_19 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002222b2;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_1002222b2:
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_100a0c410(2,&local_50,local_128,0);
  QVariant::~QVariant(local_108);
  if (local_128[0] != (int *)0x0) {
    LOCK();
    *local_128[0] = *local_128[0] + -1;
    local_19 = *local_128[0] != 0;
    UNLOCK();
    if ((!(bool)local_19) && (local_128[0] != (int *)0x0)) {
      operator_delete(local_128[0]);
    }
  }
  uVar7 = 0;
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_19 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100222366;
    }
    QHashData::free_helper(local_50);
  }
LAB_100222366:
  if (*(int *)local_38 == -1) {
    return uVar7;
  }
  if (*(int *)local_38 != 0) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    UNLOCK();
    if (*(int *)local_38 != 0) {
      return uVar7;
    }
    local_19 = 0;
  }
  QArrayData::deallocate(local_38,2,8);
  return uVar7;
}

