
undefined8 FUN_1000fc6a0(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  QMenu local_88;
  QKeySequence local_58 [8];
  QArrayData *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 local_31;
  
  local_38 = param_2;
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x10);
  if (lVar5 == 0) {
    return 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
  if (lVar8 == 0) {
    return 0;
  }
  lVar9 = 0;
  do {
    while (lVar6 = lVar8, iVar1 = *(int *)(lVar6 + 0x18), iVar1 < param_2) {
      lVar8 = *(long *)(lVar6 + 0x10);
      if (*(long *)(lVar6 + 0x10) == 0) {
        if (lVar9 == 0) {
          return 0;
        }
        iVar1 = *(int *)(lVar9 + 0x18);
        goto LAB_1000fc729;
      }
    }
    lVar8 = *(long *)(lVar6 + 8);
    lVar9 = lVar6;
  } while (*(long *)(lVar6 + 8) != 0);
LAB_1000fc729:
  if (param_2 < iVar1) {
    return 0;
  }
  puVar7 = (undefined4 *)FUN_1000fded0(param_1 + 0x38,&local_38);
  uVar2 = *puVar7;
  local_48 = 0x10;
  local_3c = 0;
  local_44 = 2;
  local_50 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = uVar2;
  QKeySequence::QKeySequence(local_58);
  FUN_1000f9b40(param_3,&local_50,&local_48,1,0,0,0,local_58);
  QKeySequence::~QKeySequence(local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fc7e6;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000fc7e6:
  uVar4 = FUN_1006915d0();
  lVar8 = FUN_100691620(uVar4,param_2,lVar5);
  if (lVar8 != 0) {
    uVar3 = 0x100;
    if (param_2 - 5U < 8) {
      uVar3 = *(undefined4 *)(&DAT_100e14af0 + (long)(int)(param_2 - 5U) * 4);
    }
    QMenu::QMenu(&local_88,(QWidget *)0x0);
    uVar4 = FUN_1006e1350();
    uVar4 = FUN_1006e1670(uVar4,lVar8,&local_88,lVar5,1);
    FUN_1000fbfb0(param_1,uVar4,param_3,uVar2,uVar3);
    QObject::deleteLater();
    QMenu::~QMenu(&local_88);
  }
  return 1;
}

