
bool FUN_100ad1bc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  
  lVar1 = param_1 + 0x100;
  plVar7 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x910));
  lVar2 = *plVar7;
  plVar7 = (long *)FUN_100adb590(lVar1,*(undefined4 *)(param_1 + 0x914));
  bVar4 = true;
  if ((lVar2 != 0) && (lVar3 = *plVar7, lVar3 != 0)) {
    iVar5 = FUN_100adc6d0(lVar1,*(undefined4 *)(lVar2 + 8));
    iVar6 = FUN_100adc6d0(lVar1,*(undefined4 *)(lVar3 + 8));
    bVar4 = iVar5 < iVar6;
  }
  return bVar4;
}

