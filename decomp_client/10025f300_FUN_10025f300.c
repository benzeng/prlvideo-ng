
void FUN_10025f300(long *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  QWidget *pQVar4;
  long lVar5;
  QWidget *pQVar6;
  QWidget *pQVar7;
  bool bVar8;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  uint local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar3 = FUN_100370280();
  lVar5 = 0;
  if ((param_1[5] != 0) && (lVar5 = 0, *(int *)(param_1[5] + 4) != 0)) {
    lVar5 = param_1[6];
  }
  FUN_100188480(&local_30,lVar5);
  pQVar4 = (QWidget *)FUN_1003704b0(uVar3,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025f382;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10025f382:
  if (pQVar4 == (QWidget *)0x0) {
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    return;
  }
  FUN_10025db20(param_1);
  pQVar6 = (QWidget *)0x0;
  if ((param_1[7] != 0) && (pQVar6 = (QWidget *)0x0, *(int *)(param_1[7] + 4) != 0)) {
    pQVar6 = (QWidget *)param_1[8];
  }
  MacUtils::detachAllSheets((QWidget *)&local_58,pQVar6);
  FUN_10006b440(&local_50,(QWidget *)&local_58);
  local_48 = local_50 + (long)local_50[2] * 2 + 4;
  local_40 = local_50 + (long)local_50[3] * 2 + 4;
  local_38 = 1;
  if (*local_58 == -1) {
LAB_10025f430:
    do {
      if (local_48 == local_40) break;
      piVar1 = (int *)**(undefined8 **)local_48;
      pQVar6 = (QWidget *)(*(undefined8 **)local_48)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_21 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_38 != 0) {
        pQVar7 = (QWidget *)0x0;
        if ((piVar1 != (int *)0x0) && (pQVar7 = (QWidget *)0x0, piVar1[1] != 0)) {
          pQVar7 = pQVar6;
        }
        MacUtils::attachSheet(pQVar7,pQVar4);
        local_38 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_21 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar1);
        }
      }
      local_48 = local_48 + 2;
      uVar2 = local_38 ^ 1;
      bVar8 = local_38 != 1;
      local_38 = uVar2;
    } while (bVar8);
  }
  else {
    if (*local_58 == 0) {
LAB_10025f413:
      FUN_10006b5d0(&local_58,local_58);
    }
    else {
      LOCK();
      *local_58 = *local_58 + -1;
      local_21 = *local_58 != 0;
      UNLOCK();
      if (!(bool)local_21) goto LAB_10025f413;
    }
    if (local_38 != 0) goto LAB_10025f430;
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      local_21 = *local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025f4e4;
    }
    FUN_10006b5d0(&local_50,local_50);
  }
LAB_10025f4e4:
  if (((param_1[7] != 0) && (*(int *)(param_1[7] + 4) != 0)) && (param_1[8] != 0)) {
    QWidget::close();
  }
  uVar3 = 0x80000009;
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) &&
     (uVar3 = 0x80000009, param_1[6] != 0)) {
    uVar3 = 0;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,uVar3);
  return;
}

