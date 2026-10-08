
undefined1 FUN_1002d01d0(long param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  QVariant *pQVar7;
  long *plVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int local_40;
  undefined1 local_31;
  
  FUN_100221b80(&local_60);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = local_58[2];
      if (iVar1 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar9 = local_58 + (long)iVar1 * 2 + 4;
        lVar6 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_60 = local_60 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100039a80(&local_60);
  if ((local_40 != 0) && (local_50 != local_48)) {
    do {
      piVar9 = local_50;
      pQVar7 = (QVariant *)FUN_10008c590(param_1 + 0x30,local_50);
      uVar11 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar11 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
      }
      plVar8 = (long *)FUN_10018c2b0(uVar11);
      pcVar3 = *(code **)(*plVar8 + 0x80);
      local_88 = *(QArrayData **)piVar9;
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      (*pcVar3)(&local_80,plVar8,&local_88);
      bVar4 = (bool)QVariant::toBool();
      QVariant::QVariant(&local_70,bVar4);
      cVar5 = QVariant::cmp(pQVar7);
      QVariant::~QVariant(&local_70);
      QVariant::~QVariant(&local_80);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1002d03a1;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1002d03a1:
      uVar10 = 1;
      if (cVar5 == '\0') goto LAB_1002d03c7;
      local_50 = local_50 + 2;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  uVar10 = 0;
LAB_1002d03c7:
  FUN_100039a80(&local_58);
  return uVar10;
}

