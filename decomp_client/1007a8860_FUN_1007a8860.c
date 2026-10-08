
long * FUN_1007a8860(long param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  plVar8 = *(long **)(param_1 + 8);
  local_40 = (Data *)plVar8[3];
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar5 = (long)*(int *)(local_40 + 8);
      lVar6 = plVar8[3];
      plVar8 = (long *)(long)*(int *)(lVar6 + 8);
      if (((Data *)(lVar6 + (long)plVar8 * 8) != local_40 + lVar5 * 8) &&
         (lVar7 = *(int *)(local_40 + 0xc) - lVar5, lVar7 != 0 && lVar5 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar5 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)plVar8 * 8),lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      plVar8 = (long *)(long)*(int *)(local_40 + 8);
      if ((local_40 + (long)plVar8 * 8 != local_60 + lVar6 * 8) &&
         (lVar5 = *(int *)(local_60 + 0xc) - lVar6, lVar5 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_40 + (long)plVar8 * 8 + 0x10,lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    iVar9 = 1;
    do {
      local_48 = 1;
      plVar8 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222c830);
      if ((plVar8 != (long *)0x0) && ((*(byte *)(plVar8[5] + 9) & 0x80) != 0)) {
        auVar10 = (**(code **)(*plVar8 + 0x1a8))(plVar8);
        iVar1 = *(int *)(plVar8[5] + 0x14);
        iVar2 = *(int *)(plVar8[5] + 0x18);
        _local_70 = CONCAT44(auVar10._4_4_ + iVar2,auVar10._0_4_ + iVar1);
        _local_68 = CONCAT44(auVar10._12_4_ + iVar2,iVar1 + auVar10._8_4_);
        cVar3 = QRect::contains((QPoint *)&local_70,param_2);
        if (((cVar3 != '\0') &&
            ((lVar6 = (**(code **)(*plVar8 + 0x1a0))(plVar8), *(int *)(lVar6 + 0x28) == 2 ||
             (lVar6 = (**(code **)(*plVar8 + 0x1a0))(plVar8), *(int *)(lVar6 + 0x28) == 7)))) &&
           ((piVar4 = (int *)(**(code **)(*plVar8 + 0x1a0))(plVar8), *piVar4 != 0 ||
            (lVar6 = (**(code **)(*plVar8 + 0x1a0))(plVar8), *(int *)(lVar6 + 4) != 0))))
        goto LAB_1007a8a73;
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  iVar9 = 2;
LAB_1007a8a73:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007a8a99;
    }
    QListData::dispose(local_60);
  }
LAB_1007a8a99:
  if (iVar9 == 2) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return plVar8;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return plVar8;
}

