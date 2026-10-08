
void FUN_10071c800(long param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long *plVar9;
  QArrayData *pQVar10;
  long lVar11;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  long *local_98;
  QKeySequence local_90 [8];
  QKeySequence local_88 [8];
  int *local_80;
  int *local_78;
  int *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar11 = *(long *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar11 + 8);
  if (iVar1 != *(int *)(lVar11 + 0xc)) {
    plVar9 = (long *)(lVar11 + 0x10 + (long)iVar1 * 8);
    lVar11 = (long)*(int *)(lVar11 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 8))();
      }
      plVar9 = plVar9 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  FUN_100721b30(param_1 + 0x38);
  cVar2 = FUN_10071f870(param_1);
  if (cVar2 == '\0') {
    return;
  }
  uVar5 = FUN_100152280();
  lVar11 = param_1 + 0x18;
  lVar6 = FUN_1001548f0(uVar5,lVar11);
  if (lVar6 == 0) {
    return;
  }
  uVar4 = FUN_10018f860(lVar6);
  FUN_100719ad0(&local_40,lVar11,uVar4,0);
  if (DAT_102310998 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_1006faf60(pvVar7);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar7;
  }
  FUN_1006fb6d0(local_60,DAT_102310998);
  FUN_100714f80(local_58,local_60,&local_40);
  FUN_1000fe670(local_60);
  FUN_1000ff290(&local_80,local_48);
  local_78 = local_80 + (long)local_80[2] * 2 + 4;
  local_70 = local_80 + (long)local_80[3] * 2 + 4;
  if (local_80[2] != local_80[3]) {
    do {
      local_68 = 1;
      uVar5 = *(undefined8 *)local_78;
      uVar8 = FUN_100714bb0(uVar5);
      if ((uVar8 & 2) != 0) {
        FUN_1007196e0(local_88,uVar5,lVar11);
        FUN_100719970(local_90,uVar5,lVar11);
        cVar2 = QKeySequence::isEmpty();
        if ((cVar2 == '\0') && (cVar2 = QKeySequence::isEmpty(), cVar2 == '\0')) {
          plVar9 = operator_new(0x20);
          local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
          uVar3 = FUN_10071c5d0(param_1,&local_a0);
          uVar5 = FUN_10071fac0(param_1,uVar3);
          FUN_100724730(plVar9,uVar5);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10071ca17;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_10071ca17:
          local_98 = plVar9;
          cVar2 = FUN_100724780(plVar9,local_88,local_90);
          if (cVar2 == '\0') {
            FUN_1007170a0(&local_b0,local_88,1);
            QString::toUtf8();
            pQVar10 = local_a8 + *(long *)(local_a8 + 0x10);
            FUN_1007170a0(&local_c0,local_90,1);
            QString::toUtf8();
            FUN_100df99c0("","prl_client_app",0,
                          "Remap key action %s => %s was not added into hook (already exist or some other reason)."
                          ,pQVar10,local_b8 + *(long *)(local_b8 + 0x10));
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071cb0c;
              }
              QArrayData::deallocate(local_b8,1,8);
            }
LAB_10071cb0c:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071cb42;
              }
              QArrayData::deallocate(local_c0,2,8);
            }
LAB_10071cb42:
            if (*(int *)local_a8 != -1) {
              if (*(int *)local_a8 != 0) {
                LOCK();
                *(int *)local_a8 = *(int *)local_a8 + -1;
                local_31 = *(int *)local_a8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071cb7b;
              }
              QArrayData::deallocate(local_a8,1,8);
            }
LAB_10071cb7b:
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10071cbb1;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
LAB_10071cbb1:
            (**(code **)(*plVar9 + 8))(plVar9);
          }
          else {
            FUN_100722840(param_1 + 0x38,&local_98);
          }
        }
        QKeySequence::~QKeySequence(local_90);
        QKeySequence::~QKeySequence(local_88);
      }
      local_78 = local_78 + 2;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  if (*local_80 != -1) {
    if (*local_80 != 0) {
      LOCK();
      *local_80 = *local_80 + -1;
      local_31 = *local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10071cc18;
    }
    FUN_1000feb90(&local_80,local_80);
  }
LAB_10071cc18:
  FUN_1000fec30(local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

