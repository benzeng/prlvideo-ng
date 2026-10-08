
undefined8 FUN_1000f2480(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QArrayData *local_120;
  char local_112;
  undefined1 local_111;
  undefined1 local_110 [76];
  int local_c4;
  int local_c0;
  undefined1 local_78 [80];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  QString::toUtf8();
  iVar3 = _FSPathMakeRef(local_120 + *(long *)(local_120 + 0x10),local_78,&local_112);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_111 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_111) goto LAB_1000f250c;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_1000f250c:
  uVar5 = 3;
  if ((((iVar3 == 0) && (local_112 == '\0')) &&
      (sVar2 = _FSGetCatalogInfo(local_78,0x800,local_110,0,0,0), sVar2 == 0)) &&
     (uVar5 = 5, local_c0 == 0x50534158)) {
    uVar4 = 1;
    if (local_c4 != 0x50534135) {
      if (local_c4 != 0x50534136) goto LAB_1000f2574;
      uVar4 = 0;
    }
    *param_2 = uVar4;
    uVar5 = 0;
  }
LAB_1000f2574:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

