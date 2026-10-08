
QKeySequence * FUN_10071a6e0(QKeySequence *param_1,QKeySequence *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  QArrayData *local_a8;
  QKeySequence local_a0 [8];
  QArrayData *local_98;
  QKeySequence local_90 [8];
  Data *local_88;
  Data *local_80;
  Data *local_78;
  uint local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QKeySequence::QKeySequence(param_1,param_2);
  FUN_100188480(&local_48,param_3);
  uVar3 = FUN_10018f860(param_3);
  FUN_100719ad0(&local_40,&local_48,uVar3,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071a75f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10071a75f:
  if (DAT_102310998 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1006faf60(pvVar4);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar4;
  }
  FUN_1006fb6d0(local_68,DAT_102310998);
  FUN_100714f80(local_60,local_68,&local_40);
  FUN_1000fe670(local_68);
  FUN_1000ff290(&local_88,local_50);
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
    do {
      if (local_70 == 0) {
LAB_10071a957:
        local_80 = local_80 + 8;
        local_70 = 1;
      }
      else {
        uVar1 = *(undefined8 *)local_80;
        uVar5 = FUN_100714bb0(uVar1);
        if ((uVar5 & 2) == 0) goto LAB_10071a957;
        FUN_100188480(&local_98,param_3);
        FUN_1007196e0(local_90,uVar1,&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10071a86a;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_10071a86a:
        cVar2 = QKeySequence::isEmpty();
        iVar7 = 0;
        if ((cVar2 == '\0') && (cVar2 = QKeySequence::operator==(local_90,param_2), cVar2 != '\0'))
        {
          FUN_100188480(&local_a8,param_3);
          FUN_100719970(local_a0,uVar1,&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071a8ef;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_10071a8ef:
          cVar2 = QKeySequence::isEmpty();
          if (cVar2 == '\0') {
            QKeySequence::operator=(param_1,local_a0);
          }
          iVar7 = -2;
          QKeySequence::~QKeySequence(local_a0);
        }
        QKeySequence::~QKeySequence(local_90);
        if (iVar7 == 0) goto LAB_10071a957;
        local_80 = local_80 + 8;
        uVar6 = local_70 ^ 1;
        bVar8 = local_70 == 1;
        local_70 = uVar6;
        if (bVar8) break;
      }
    } while (local_80 != local_78);
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071a9bd;
    }
    FUN_1005596c0(&local_88,local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10,
                  local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10);
    QListData::dispose(local_88);
  }
LAB_10071a9bd:
  FUN_1000fec30(local_60);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

