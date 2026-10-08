
int FUN_100b9bc30(long param_1,char *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)(param_2 + 0x54) == 0) {
LAB_100b9bd5d:
    bVar2 = false;
  }
  else {
    iVar3 = _strncmp(param_2,(char *)(param_1 + 0x184),0x50);
    if (iVar3 != 0) {
      iVar3 = FUN_100b9e3d0(param_2);
      if (iVar3 != 0) goto LAB_100b9be2a;
      if (4 < *(int *)(param_2 + 0x54)) {
        _local_98 = CONCAT44(*(int *)(param_2 + 0x54),*(undefined4 *)(param_2 + 0x50));
        _memcpy(&uStack_90,param_2,0x50);
        FUN_100b93750(DAT_1022cf500,2,0x58,&local_98);
      }
      param_2[0x54] = '\0';
      param_2[0x55] = '\0';
      param_2[0x56] = '\0';
      param_2[0x57] = '\0';
      param_2[0x4e] = '\0';
      param_2[0x4c] = '\0';
      param_2[0x4d] = '\0';
      param_2[0x48] = '\0';
      param_2[0x49] = '\0';
      param_2[0x4a] = '\0';
      param_2[0x4b] = '\0';
      param_2[0x40] = '\0';
      param_2[0x41] = '\0';
      param_2[0x42] = '\0';
      param_2[0x43] = '\0';
      param_2[0x44] = '\0';
      param_2[0x45] = '\0';
      param_2[0x46] = '\0';
      param_2[0x47] = '\0';
      param_2[0x38] = '\0';
      param_2[0x39] = '\0';
      param_2[0x3a] = '\0';
      param_2[0x3b] = '\0';
      param_2[0x3c] = '\0';
      param_2[0x3d] = '\0';
      param_2[0x3e] = '\0';
      param_2[0x3f] = '\0';
      param_2[0x30] = '\0';
      param_2[0x31] = '\0';
      param_2[0x32] = '\0';
      param_2[0x33] = '\0';
      param_2[0x34] = '\0';
      param_2[0x35] = '\0';
      param_2[0x36] = '\0';
      param_2[0x37] = '\0';
      param_2[0x28] = '\0';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      param_2[0] = '\0';
      param_2[1] = '\0';
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2[4] = '\0';
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      goto LAB_100b9bd5d;
    }
    iVar4 = FUN_100b9e040((char *)(param_1 + 0x184));
    bVar2 = true;
    iVar3 = 0;
    if (0 < iVar4) goto LAB_100b9be2a;
  }
  if ((*(byte *)(param_1 + 0x1d4) & 2) == 0) {
    lVar5 = (long)param_4;
  }
  else {
    param_3 = 0;
    lVar5 = 0;
  }
  iVar3 = FUN_100b9d980((void *)(param_1 + 0x184),param_3,lVar5);
  if (!bVar2 && iVar3 == 0) {
    FUN_100b93e30(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x1d8) = uVar1;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    local_48 = 0;
    _local_98 = CONCAT44(uVar1,*(undefined4 *)(param_2 + 0x50));
    _memcpy(&uStack_90,(void *)(param_1 + 0x184),0x50);
    FUN_100b93750(DAT_1022cf500,1,0x58,&local_98);
  }
LAB_100b9be2a:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

