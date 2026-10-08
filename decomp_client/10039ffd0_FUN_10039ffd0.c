
ulong FUN_10039ffd0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  QWidget *pQVar6;
  int extraout_var;
  int extraout_var_00;
  long lVar7;
  ulong uVar8;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar8 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (param_2 == (long *)0x0) goto LAB_1003a00d4;
  uVar2 = FUN_1003a0360(param_1,param_2);
  iVar3 = FUN_1003a0140();
  pQVar6 = (QWidget *)QWidget::window();
  uVar4 = MacUtils::getToolbarMinimumWidth(pQVar6);
  if ((int)uVar2 < (int)uVar4) {
    uVar2 = uVar4;
  }
  uVar5 = (ulong)uVar2;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x20) + 0x70))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x18) + 0x70))();
  lVar7 = (**(code **)(*param_2 + 0x1f8))(param_2);
  if (lVar7 == 0) {
    local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_10044e7e0(&local_40,lVar7);
  }
  iVar1 = *(int *)(local_40 + 4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1003a00b7;
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a00b7:
  uVar2 = extraout_var + iVar3 + extraout_var_00;
  if (iVar1 != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
    uVar2 = (uVar2 + 1 + *(int *)(lVar7 + 0x20)) - *(int *)(lVar7 + 0x18);
  }
  uVar8 = (ulong)uVar2;
LAB_1003a00d4:
  return uVar8 << 0x20 | uVar5;
}

