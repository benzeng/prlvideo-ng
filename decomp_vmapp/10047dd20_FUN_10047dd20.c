
undefined8 FUN_10047dd20(long param_1,void *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 local_60;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar9 = *(uint **)(param_1 + 0x50);
  plVar7 = (long *)(param_1 + 0x50);
  if (1 < *puVar9) {
    uVar1 = puVar9[2];
    pDVar4 = (Data *)QListData::detach((int)plVar7);
    lVar2 = *plVar7;
    lVar5 = (long)*(int *)(lVar2 + 8);
    if ((puVar9 + (long)(int)uVar1 * 2 != (uint *)(lVar2 + lVar5 * 8)) &&
       (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
      _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),puVar9 + (long)(int)uVar1 * 2 + 4,lVar6 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        UNLOCK();
        if (*(int *)pDVar4 != 0) goto LAB_10047ddc5;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_10047ddc5:
  puVar8 = (uint *)*plVar7;
  puVar9 = puVar8 + (long)(int)puVar8[2] * 2 + 4;
  local_60 = 0;
  do {
    if (1 < *puVar8) {
      uVar1 = puVar8[2];
      pDVar4 = (Data *)QListData::detach((int)plVar7);
      lVar2 = *plVar7;
      lVar5 = (long)*(int *)(lVar2 + 8);
      if ((puVar8 + (long)(int)uVar1 * 2 != (uint *)(lVar2 + lVar5 * 8)) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),puVar8 + (long)(int)uVar1 * 2 + 4,lVar6 * 8);
      }
      if (*(int *)pDVar4 != -1) {
        if (*(int *)pDVar4 != 0) {
          LOCK();
          *(int *)pDVar4 = *(int *)pDVar4 + -1;
          UNLOCK();
          if (*(int *)pDVar4 != 0) goto LAB_10047de70;
        }
        QListData::dispose(pDVar4);
      }
    }
LAB_10047de70:
    if (puVar9 == (uint *)(*plVar7 + 0x10 + (long)*(int *)(*plVar7 + 0xc) * 8)) goto LAB_10047deb0;
    FUN_1007d6bf0(*(long *)puVar9 + 0x10,local_48);
    iVar3 = _memcmp(param_2,local_48,0x10);
    if (iVar3 == 0) {
      local_60 = *(undefined8 *)puVar9;
LAB_10047deb0:
      if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
        return local_60;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    puVar9 = puVar9 + 2;
    puVar8 = (uint *)*plVar7;
  } while( true );
}

