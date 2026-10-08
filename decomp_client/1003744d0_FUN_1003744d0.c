
void FUN_1003744d0(void)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  QArrayData *local_a8;
  undefined1 local_a0 [40];
  int local_78;
  QArrayData *local_70 [2];
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  int *local_40;
  undefined1 local_31;
  
  if (DAT_102310950 == (void *)0x0) {
    pvVar5 = operator_new(0x38);
    FUN_10036fc50(pvVar5,0);
    DAT_102310950 = pvVar5;
  }
  FUN_100376390(&local_40,(long)DAT_102310950 + 0x18);
  FUN_100376390(&local_60,&local_40);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_58;
      lVar2 = (*(undefined8 **)local_58)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar2 != 0)) && (piVar1[1] != 0)) {
          uVar6 = FUN_10036cca0(lVar2);
          if (DAT_102310950 == (void *)0x0) {
            pvVar5 = operator_new(0x38);
            FUN_10036fc50(pvVar5,0);
            DAT_102310950 = pvVar5;
          }
          pvVar5 = DAT_102310950;
          lVar9 = 0;
          if (piVar1[1] != 0) {
            lVar9 = lVar2;
          }
          FUN_10036bf70(&local_a8,lVar9);
          uVar3 = FUN_100323e20(uVar6);
          uVar4 = FUN_100325aa0(uVar6);
          FUN_100371ce0(local_a0,pvVar5,&local_a8,uVar3,uVar4,0);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100374657;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100374657:
          plVar7 = (long *)CHostDesktopWorkspacesController::instance();
          uVar3 = (**(code **)(*plVar7 + 0xb8))(plVar7,local_70);
          lVar9 = 0;
          if (piVar1[1] != 0) {
            lVar9 = lVar2;
          }
          uVar4 = 1;
          if (local_78 != 1) {
            uVar4 = uVar3;
          }
          (**(code **)(*plVar7 + 0x88))(plVar7,lVar9,uVar4);
          if (*(int *)local_70[0] != -1) {
            if (*(int *)local_70[0] != 0) {
              LOCK();
              *(int *)local_70[0] = *(int *)local_70[0] + -1;
              local_31 = *(int *)local_70[0] != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003746d0;
            }
            QArrayData::deallocate(local_70[0],2,8);
          }
        }
LAB_1003746d0:
        local_48 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      local_58 = local_58 + 2;
      uVar8 = local_48 ^ 1;
      bVar10 = local_48 != 1;
      local_48 = uVar8;
    } while ((bVar10) && (local_58 != local_50));
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100374743;
    }
    FUN_100376000(&local_60,local_60);
  }
LAB_100374743:
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_100376000(&local_40,local_40);
  }
  return;
}

