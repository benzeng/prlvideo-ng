
int FUN_100bd0940(long param_1,long param_2,undefined8 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined **ppuVar5;
  int iVar6;
  long local_c8;
  uint local_ac;
  undefined1 local_a8 [48];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100c65850(local_a8);
  lVar4 = 0;
  ppuVar5 = &PTR_s_A_102240550;
  iVar6 = 0;
  local_c8 = param_2;
  do {
    iVar2 = FUN_100c65920(local_a8,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xf0),0);
    if (iVar2 < 1) {
LAB_100bd0af4:
      FUN_100c62ee0(0x14,0x184,0x44,"s3_enc.c",0x356);
      iVar6 = 0;
      break;
    }
    pcVar1 = *ppuVar5;
    sVar3 = _strlen(pcVar1);
    iVar2 = FUN_100c65b10(local_a8,pcVar1,sVar3);
    if ((((((iVar2 < 1) || (iVar2 = FUN_100c65b10(local_a8,param_3,(long)param_4), iVar2 < 1)) ||
          (iVar2 = FUN_100c65b10(local_a8,*(long *)(param_1 + 0x80) + 0xc4,0x20), iVar2 < 1)) ||
         ((iVar2 = FUN_100c65b10(local_a8,*(long *)(param_1 + 0x80) + 0xa4,0x20), iVar2 < 1 ||
          (iVar2 = FUN_100c65bc0(local_a8,local_78,&local_ac), iVar2 < 1)))) ||
        ((iVar2 = FUN_100c65920(local_a8,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xe8),0),
         iVar2 < 1 ||
         ((iVar2 = FUN_100c65b10(local_a8,param_3,(long)param_4), iVar2 < 1 ||
          (iVar2 = FUN_100c65b10(local_a8,local_78,local_ac), iVar2 < 1)))))) ||
       (iVar2 = FUN_100c65bc0(local_a8,local_c8,&local_ac), iVar2 < 1)) goto LAB_100bd0af4;
    local_c8 = local_c8 + (ulong)local_ac;
    iVar6 = iVar6 + local_ac;
    lVar4 = lVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (lVar4 < 3);
  FUN_100c65c50(local_a8);
  _OPENSSL_cleanse(local_78,0x40);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

