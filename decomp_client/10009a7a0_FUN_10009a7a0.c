
void FUN_10009a7a0(long param_1,ulong param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  CScreenSaverBlocker *pCVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  QArrayData *local_a0;
  ulong local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_98 = param_2;
  lVar4 = FUN_1000a9690(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_10009a97c;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0xc;
  uStack_80 = 0x50;
  local_68 = param_2 & 0xffffffff;
  _iStack_60 = CONCAT44((param_4 & 1) * 2 + 1,param_3);
  local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
  QByteArray::append((char *)&local_a0,(int)&local_88);
  FUN_1000b7a20(lVar4,param_2,&local_a0);
  plVar8 = (long *)(param_1 + 0x48);
  if (param_3 == 1) {
    lVar4 = *plVar8;
    iVar1 = *(int *)(lVar4 + 8);
    puVar6 = (ulong *)(lVar4 + 0x10 + (long)iVar1 * 8);
    iVar2 = *(int *)(lVar4 + 0xc);
    if (iVar1 == iVar2) {
LAB_10009a8ec:
      if (puVar6 == (ulong *)(lVar4 + 0x10 + (long)iVar2 * 8)) goto LAB_10009a8f6;
    }
    else {
      lVar7 = (long)iVar2 * 8 + (long)iVar1 * -8;
      do {
        if (*puVar6 == param_2) goto LAB_10009a8ec;
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar7 != 0);
LAB_10009a8f6:
      FUN_10009c430(plVar8,&local_98);
    }
    puVar3 = PTR_m_instance_1021e1420;
    pCVar5 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
    if (pCVar5 == (CScreenSaverBlocker *)0x0) {
      pCVar5 = operator_new(0x18);
      CScreenSaverBlocker::CScreenSaverBlocker(pCVar5);
      *(CScreenSaverBlocker **)puVar3 = pCVar5;
      DAT_10226c8a0 = 1;
    }
    CScreenSaverBlocker::addBlocker(pCVar5,1);
  }
  else {
    FUN_10009c090(plVar8,&local_98);
    puVar3 = PTR_m_instance_1021e1420;
    if (*(int *)(*plVar8 + 0xc) == *(int *)(*plVar8 + 8)) {
      pCVar5 = *(CScreenSaverBlocker **)PTR_m_instance_1021e1420;
      if (pCVar5 == (CScreenSaverBlocker *)0x0) {
        pCVar5 = operator_new(0x18);
        CScreenSaverBlocker::CScreenSaverBlocker(pCVar5);
        *(CScreenSaverBlocker **)puVar3 = pCVar5;
        DAT_10226c8a0 = 1;
      }
      CScreenSaverBlocker::removeBlocker(pCVar5,1);
    }
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_89 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_89) goto LAB_10009a97c;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_10009a97c:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

