
undefined8 FUN_100725230(undefined8 param_1)

{
  undefined *puVar1;
  Data *pDVar2;
  int iVar3;
  undefined8 uVar4;
  QKeySequence *pQVar5;
  long lVar6;
  QKeySequence local_c8 [8];
  Data *local_c0;
  undefined4 local_b4;
  QKeySequence local_b0 [8];
  Data *local_a8;
  undefined4 local_9c;
  QKeySequence local_98 [8];
  Data *local_90;
  undefined4 local_84;
  QKeySequence local_80 [8];
  Data *local_78;
  undefined4 local_6c;
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  Data *local_58;
  undefined4 local_4c;
  QKeySequence local_48 [8];
  Data *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  if ((DAT_1023123c8 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023123c8), iVar3 != 0)) {
    DAT_1023123c0 = PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_100726750,&DAT_1023123c0,0x100000000);
    ___cxa_guard_release(&DAT_1023123c8);
  }
  if (*(int *)(DAT_1023123c0 + 0x14) != 0) goto LAB_10072578a;
  local_38 = 0x14;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_38);
  puVar1 = PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  QKeySequence::QKeySequence(local_48,0x41);
  FUN_100560a10(&local_40,local_48);
  FUN_100707070(uVar4,&local_40);
  QKeySequence::~QKeySequence(local_48);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072535a;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_40 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10072535a:
  local_4c = 0x5b;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_4c);
  local_58 = (Data *)puVar1;
  QKeySequence::QKeySequence(local_60,0x40000a7,0,0,0);
  FUN_100560a10(&local_58,local_60);
  QKeySequence::QKeySequence(local_68,0x4000027,0,0,0);
  FUN_100560a10(&local_58,local_68);
  FUN_100707070(uVar4,&local_58);
  QKeySequence::~QKeySequence(local_68);
  QKeySequence::~QKeySequence(local_60);
  pDVar2 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072543a;
    }
    iVar3 = *(int *)(local_58 + 0xc);
    if (iVar3 != *(int *)(local_58 + 8)) {
      lVar6 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_58 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10072543a:
  local_6c = 0x5c;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_6c);
  local_78 = (Data *)puVar1;
  QKeySequence::QKeySequence(local_80,0x4000048,0,0,0);
  FUN_100560a10(&local_78,local_80);
  FUN_100707070(uVar4,&local_78);
  QKeySequence::~QKeySequence(local_80);
  pDVar2 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007254fa;
    }
    iVar3 = *(int *)(local_78 + 0xc);
    if (iVar3 != *(int *)(local_78 + 8)) {
      lVar6 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_78 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1007254fa:
  local_84 = 0x5d;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_84);
  local_90 = (Data *)puVar1;
  QKeySequence::QKeySequence(local_98,0xc000048,0,0,0);
  FUN_100560a10(&local_90,local_98);
  FUN_100707070(uVar4,&local_90);
  QKeySequence::~QKeySequence(local_98);
  pDVar2 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007255ca;
    }
    iVar3 = *(int *)(local_90 + 0xc);
    if (iVar3 != *(int *)(local_90 + 8)) {
      lVar6 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_90 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1007255ca:
  local_9c = 0x58;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_9c);
  local_a8 = (Data *)puVar1;
  QKeySequence::QKeySequence(local_b0,0x400004d,0,0,0);
  FUN_100560a10(&local_a8,local_b0);
  FUN_100707070(uVar4,&local_a8);
  QKeySequence::~QKeySequence(local_b0);
  pDVar2 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007256aa;
    }
    iVar3 = *(int *)(local_a8 + 0xc);
    if (iVar3 != *(int *)(local_a8 + 8)) {
      lVar6 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_a8 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1007256aa:
  local_b4 = 0x25;
  uVar4 = FUN_100721670(&DAT_1023123c0,&local_b4);
  local_c0 = (Data *)puVar1;
  QKeySequence::QKeySequence(local_c8,0x14000046,0,0,0);
  FUN_100560a10(&local_c0,local_c8);
  FUN_100707070(uVar4,&local_c0);
  QKeySequence::~QKeySequence(local_c8);
  pDVar2 = local_c0;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10072578a;
    }
    iVar3 = *(int *)(local_c0 + 0xc);
    if (iVar3 != *(int *)(local_c0 + 8)) {
      lVar6 = (long)*(int *)(local_c0 + 8) * 8 + (long)iVar3 * -8;
      pQVar5 = (QKeySequence *)(local_c0 + (long)iVar3 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(pQVar5);
        pQVar5 = pQVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10072578a:
  FUN_100726790(param_1,&DAT_1023123c0);
  return param_1;
}

