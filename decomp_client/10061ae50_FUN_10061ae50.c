
undefined8 * FUN_10061ae50(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  QArrayData *local_a8;
  undefined4 local_a0;
  undefined1 local_99;
  char local_98 [104];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  iVar3 = FUN_10061aab0(param_2);
  if ((((iVar3 == 0) || (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeefa8)) ||
      (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeefff)) ||
     (((iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef8c ||
       (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef89)) ||
      (iVar3 = FUN_10061aab0(param_2), iVar3 == -0x7ffeef9b)))) {
    local_a0 = 100;
    local_98[0x50] = '\0';
    local_98[0x51] = '\0';
    local_98[0x52] = '\0';
    local_98[0x53] = '\0';
    local_98[0x54] = '\0';
    local_98[0x55] = '\0';
    local_98[0x56] = '\0';
    local_98[0x57] = '\0';
    local_98[0x58] = '\0';
    local_98[0x59] = '\0';
    local_98[0x5a] = '\0';
    local_98[0x5b] = '\0';
    local_98[0x5c] = '\0';
    local_98[0x5d] = '\0';
    local_98[0x5e] = '\0';
    local_98[0x5f] = '\0';
    local_98[0x40] = '\0';
    local_98[0x41] = '\0';
    local_98[0x42] = '\0';
    local_98[0x43] = '\0';
    local_98[0x44] = '\0';
    local_98[0x45] = '\0';
    local_98[0x46] = '\0';
    local_98[0x47] = '\0';
    local_98[0x48] = '\0';
    local_98[0x49] = '\0';
    local_98[0x4a] = '\0';
    local_98[0x4b] = '\0';
    local_98[0x4c] = '\0';
    local_98[0x4d] = '\0';
    local_98[0x4e] = '\0';
    local_98[0x4f] = '\0';
    local_98[0x30] = '\0';
    local_98[0x31] = '\0';
    local_98[0x32] = '\0';
    local_98[0x33] = '\0';
    local_98[0x34] = '\0';
    local_98[0x35] = '\0';
    local_98[0x36] = '\0';
    local_98[0x37] = '\0';
    local_98[0x38] = '\0';
    local_98[0x39] = '\0';
    local_98[0x3a] = '\0';
    local_98[0x3b] = '\0';
    local_98[0x3c] = '\0';
    local_98[0x3d] = '\0';
    local_98[0x3e] = '\0';
    local_98[0x3f] = '\0';
    local_98[0x20] = '\0';
    local_98[0x21] = '\0';
    local_98[0x22] = '\0';
    local_98[0x23] = '\0';
    local_98[0x24] = '\0';
    local_98[0x25] = '\0';
    local_98[0x26] = '\0';
    local_98[0x27] = '\0';
    local_98[0x28] = '\0';
    local_98[0x29] = '\0';
    local_98[0x2a] = '\0';
    local_98[0x2b] = '\0';
    local_98[0x2c] = '\0';
    local_98[0x2d] = '\0';
    local_98[0x2e] = '\0';
    local_98[0x2f] = '\0';
    local_98[0x10] = '\0';
    local_98[0x11] = '\0';
    local_98[0x12] = '\0';
    local_98[0x13] = '\0';
    local_98[0x14] = '\0';
    local_98[0x15] = '\0';
    local_98[0x16] = '\0';
    local_98[0x17] = '\0';
    local_98[0x18] = '\0';
    local_98[0x19] = '\0';
    local_98[0x1a] = '\0';
    local_98[0x1b] = '\0';
    local_98[0x1c] = '\0';
    local_98[0x1d] = '\0';
    local_98[0x1e] = '\0';
    local_98[0x1f] = '\0';
    local_98[0] = '\0';
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = '\0';
    local_98[4] = '\0';
    local_98[5] = '\0';
    local_98[6] = '\0';
    local_98[7] = '\0';
    local_98[8] = '\0';
    local_98[9] = '\0';
    local_98[10] = '\0';
    local_98[0xb] = '\0';
    local_98[0xc] = '\0';
    local_98[0xd] = '\0';
    local_98[0xe] = '\0';
    local_98[0xf] = '\0';
    local_98[0x60] = '\0';
    local_98[0x61] = '\0';
    local_98[0x62] = '\0';
    local_98[99] = '\0';
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    iVar3 = _PrlLic_GetCompanyName(lVar2,local_98,&local_a0);
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (-1 < iVar3) {
      _strlen(local_98);
      QString::fromUtf8_helper((char *)&local_a8,(int)local_98);
      QString::normalized(param_1,&local_a8,1,0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_99 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_10061afdb;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
      goto LAB_10061afdb;
    }
    FUN_100df99c0("[LICENSE]","prl_client_app",0,
                  "Couldn\'t extract dispatcher license info (company name). Error code: %.8X",iVar3
                 );
  }
  *param_1 = PTR_shared_null_1021e1288;
LAB_10061afdb:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

