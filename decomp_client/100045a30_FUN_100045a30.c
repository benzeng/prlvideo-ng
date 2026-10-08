
bool FUN_100045a30(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  short sVar3;
  int iVar4;
  undefined8 in_stack_00000008;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined1 local_80 [80];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar2;
  QString::toUtf8();
  iVar4 = _FSPathMakeRef(local_128 + *(long *)(local_128 + 0x10),local_80,&local_11a);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_119 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_119) goto LAB_100045ac0;
    }
    QArrayData::deallocate(local_128,1,8);
  }
LAB_100045ac0:
  if (iVar4 == 0) {
    sVar3 = _FSGetCatalogInfo(local_80,0x20,local_118,0,0,0);
    if (sVar3 == 0) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_108;
      }
      local_108 = in_stack_00000008;
      sVar3 = _FSSetCatalogInfo(local_80,0x20,local_118);
      iVar4 = (int)sVar3;
      if ((sVar3 == 0) || (DAT_10230ffd0 < 1)) goto LAB_100045cd2;
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"FSSetCatalogInfo(%s) failed with error %d",
                    local_130 + *(long *)(local_130 + 0x10),iVar4);
      if (*(int *)local_130 == -1) goto LAB_100045cd2;
      local_140 = local_130;
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        iVar1 = *(int *)local_130;
        UNLOCK();
        goto joined_r0x000100045cba;
      }
    }
    else {
      iVar4 = (int)sVar3;
      if (DAT_10230ffd0 < 1) goto LAB_100045cd2;
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"FSGetCatalogInfo(%s) failed with error %d",
                    local_138 + *(long *)(local_138 + 0x10),iVar4);
      if (*(int *)local_138 == -1) goto LAB_100045cd2;
      local_140 = local_138;
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        iVar1 = *(int *)local_138;
        UNLOCK();
joined_r0x000100045cba:
        local_119 = iVar1 != 0;
        if ((bool)local_119) goto LAB_100045cd2;
      }
    }
  }
  else {
    if (DAT_10230ffd0 < 1) goto LAB_100045cd2;
    QString::toUtf8();
    FUN_100df99c0("SGASMGMT","prl_client_app",1,"FSPathMakeRef(%s) failed with error %d",
                  local_140 + *(long *)(local_140 + 0x10),iVar4);
    if (*(int *)local_140 == -1) goto LAB_100045cd2;
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      iVar1 = *(int *)local_140;
      UNLOCK();
      goto joined_r0x000100045cba;
    }
  }
  QArrayData::deallocate(local_140,1,8);
LAB_100045cd2:
  if (lVar2 == local_30) {
    return iVar4 == 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

