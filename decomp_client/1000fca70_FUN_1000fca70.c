
void FUN_1000fca70(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  QKeySequence local_60 [8];
  QArrayData *local_58;
  QIcon local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined1 local_31;
  
  local_38 = param_2;
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 0x10);
  if (lVar7 == 0) {
    return;
  }
  uVar6 = FUN_1006915d0();
  lVar7 = FUN_100691620(uVar6,param_2,lVar7);
  if (lVar7 == 0) {
    return;
  }
  if (*(uint *)(DAT_102312080 + 4) != 0) {
    uVar11 = *(uint *)((long)DAT_102312080 + 0x24) ^ param_2;
    for (puVar8 = *(undefined8 **)
                   (DAT_102312080[1] + ((ulong)uVar11 % (ulong)*(uint *)(DAT_102312080 + 4)) * 8);
        puVar8 != DAT_102312080; puVar8 = (undefined8 *)*puVar8) {
      if ((*(uint *)(puVar8 + 1) == uVar11) && (*(uint *)((long)puVar8 + 0xc) == param_2)) {
        if (puVar8 != DAT_102312080) {
          piVar9 = (int *)FUN_1000fdff0(&DAT_102312080,&local_38);
          local_40 = *piVar9;
          uVar11 = 0x300;
          goto LAB_1000fcb97;
        }
        break;
      }
    }
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = 0;
  do {
    while (iVar2 = *(int *)(lVar7 + 0x18), iVar2 < (int)param_2) {
      plVar1 = (long *)(lVar7 + 0x10);
      lVar7 = *plVar1;
      if (*plVar1 == 0) {
        if (lVar10 == 0) {
          return;
        }
        iVar2 = *(int *)(lVar10 + 0x18);
        goto LAB_1000fcb6d;
      }
    }
    plVar1 = (long *)(lVar7 + 8);
    lVar10 = lVar7;
    lVar7 = *plVar1;
  } while (*plVar1 != 0);
LAB_1000fcb6d:
  if ((int)param_2 < iVar2) {
    return;
  }
  piVar9 = (int *)FUN_1000fded0(param_1 + 0x38,&local_38);
  local_40 = *piVar9;
  uVar11 = local_40 == 0x3100 | 0x310;
LAB_1000fcb97:
  if (local_40 == 0) {
    return;
  }
  local_48 = 0x10;
  local_44 = 1;
  cVar4 = QAction::isChecked();
  uVar3 = uVar11 | 0x20;
  if (cVar4 == '\0') {
    uVar3 = uVar11;
  }
  cVar4 = QAction::isVisible();
  uVar11 = uVar3 | 0x400;
  if (cVar4 == '\0') {
    uVar11 = uVar3;
  }
  local_3c = param_2;
  QAction::icon();
  QAction::text();
  uVar5 = QAction::isEnabled();
  QAction::shortcut();
  FUN_1000f9b40(param_3,&local_58,&local_48,uVar5,uVar11,0,local_50,local_60);
  QKeySequence::~QKeySequence(local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fcc70;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000fcc70:
  QIcon::~QIcon(local_50);
  return;
}

