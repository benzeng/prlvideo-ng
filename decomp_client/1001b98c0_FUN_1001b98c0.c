
long FUN_1001b98c0(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  int local_ec;
  Data *local_e8;
  Data *local_e0;
  Data *local_d8;
  undefined4 local_d0;
  Data *local_c8;
  int local_bc;
  undefined1 local_b8 [128];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_bc = -1;
  local_38 = lVar1;
  iVar3 = _CGGetActiveDisplayList(0x20,local_b8,&local_bc);
  if (iVar3 != 0) {
    lVar7 = 0;
    FUN_100df99c0("","prl_client_app",0,"CGGetActiveDisplayList err = %d",iVar3);
    goto LAB_1001b9bcc;
  }
  lVar7 = 0;
  if (local_bc != 2) goto LAB_1001b9bcc;
  lVar7 = 0;
  cVar2 = MacUtils::isFrontProcess();
  if (cVar2 == '\0') goto LAB_1001b9bcc;
  uVar6 = FUN_100152280();
  FUN_100154b10(&local_c8,uVar6);
  local_e8 = local_c8;
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 == 0) {
      QListData::detach((int)&local_e8);
      lVar7 = (long)*(int *)(local_e8 + 8);
      if ((local_c8 + (long)*(int *)(local_c8 + 8) * 8 != local_e8 + lVar7 * 8) &&
         (lVar9 = *(int *)(local_e8 + 0xc) - lVar7, lVar9 != 0 && lVar7 <= *(int *)(local_e8 + 0xc))
         ) {
        _memcpy(local_e8 + lVar7 * 8 + 0x10,local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10,
                lVar9 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_b8[0] = *(int *)local_c8 != 0;
      UNLOCK();
    }
  }
  local_e0 = local_e8 + (long)*(int *)(local_e8 + 8) * 8 + 0x10;
  local_d8 = local_e8 + (long)*(int *)(local_e8 + 0xc) * 8 + 0x10;
  bVar10 = 1;
  iVar3 = 0;
  lVar9 = 0;
  if (*(int *)(local_e8 + 8) != *(int *)(local_e8 + 0xc)) {
    bVar10 = 1;
    iVar3 = 0;
    lVar9 = 0;
    do {
      local_d0 = 1;
      lVar7 = *(long *)local_e0;
      if (lVar7 != 0) {
        iVar4 = FUN_10018a9d0(lVar7);
        if (iVar4 == 0x30000004) {
          iVar3 = iVar3 + 1;
          lVar9 = lVar7;
        }
        else {
          iVar4 = FUN_10018a9d0(lVar7);
          if (iVar4 + 0xcfffffffU < 9) {
            bVar8 = (byte)(0x161 >> ((byte)(iVar4 + 0xcfffffffU) & 0x1f)) & 1;
          }
          else {
            bVar8 = 0;
          }
          bVar10 = bVar10 & bVar8;
        }
      }
      local_e0 = local_e0 + 8;
    } while (local_e0 != local_d8);
  }
  local_d0 = 1;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_b8[0] = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_b8[0]) goto LAB_1001b9acf;
    }
    QListData::dispose(local_e8);
  }
LAB_1001b9acf:
  lVar7 = 0;
  if (((iVar3 == 1) && (lVar9 != 0)) && (bVar10 != 0)) {
    iVar3 = FUN_10018f860(lVar9);
    lVar7 = 0;
    if (iVar3 == 8) {
      cVar2 = FUN_10018ffc0(lVar9);
      lVar7 = 0;
      if (cVar2 == '\0') {
        cVar2 = FUN_10018ff50(lVar9);
        lVar7 = 0;
        if (cVar2 == '\0') {
          uVar6 = FUN_10018c280(lVar9);
          uVar5 = FUN_100319450(uVar6);
          lVar7 = 0;
          if (1 < uVar5) {
            uVar6 = FUN_10018c280(lVar9);
            iVar3 = FUN_100319ae0(uVar6);
            if (iVar3 != 1) {
              uVar6 = FUN_10018c280(lVar9);
              iVar3 = FUN_100319ae0(uVar6);
              if (iVar3 != 2) {
                uVar6 = FUN_10018c280(lVar9);
                cVar2 = FUN_10031b620(uVar6,&local_ec,0);
                lVar7 = 0;
                if ((cVar2 == '\0') || (lVar7 = 0, 1 < local_ec - 1U)) goto LAB_1001b9b9a;
              }
            }
            lVar7 = lVar9;
          }
        }
      }
    }
  }
LAB_1001b9b9a:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_b8[0] = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_b8[0]) goto LAB_1001b9bcc;
    }
    QListData::dispose(local_c8);
  }
LAB_1001b9bcc:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

