
void FUN_100c63950(ulong param_1,char *param_2,ulong param_3)

{
  long lVar1;
  undefined1 *puVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_110;
  ulong local_108 [2];
  undefined1 local_f8 [64];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  local_108[0] = param_1 & 0xff000000;
  lVar1 = (*(code *)DAT_1023167f0[2])(local_108);
  local_110 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    local_110 = *(undefined1 **)(lVar1 + 8);
  }
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  local_108[0] = param_1 & 0xfffff000;
  lVar1 = (*(code *)DAT_1023167f0[2])(local_108);
  puVar2 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    puVar2 = *(undefined1 **)(lVar1 + 8);
  }
  if (DAT_1023167f0 == (undefined **)0x0) {
    FUN_100bf2780(9,1,"err.c",0x127);
    if (DAT_1023167f0 == (undefined **)0x0) {
      DAT_1023167f0 = &PTR_FUN_10224e4e8;
    }
    FUN_100bf2780(10,1,"err.c",0x12a);
  }
  local_108[0] = param_1 & 0xff000fff;
  lVar1 = (*(code *)DAT_1023167f0[2])(local_108);
  if (lVar1 == 0) {
    local_108[0] = param_1 & 0xfff;
    lVar1 = (*(code *)DAT_1023167f0[2])(local_108);
    puVar6 = (undefined1 *)0x0;
    if (lVar1 == 0) goto LAB_100c63b53;
  }
  puVar6 = *(undefined1 **)(lVar1 + 8);
LAB_100c63b53:
  if (local_110 == (undefined1 *)0x0) {
    FUN_100c5d5b0(local_78,0x40,"lib(%lu)",param_1 >> 0x18 & 0xff);
  }
  if (puVar2 == (undefined1 *)0x0) {
    FUN_100c5d5b0(local_b8,0x40,"func(%lu)",param_1 >> 0xc & 0xfff);
  }
  if (puVar6 == (undefined1 *)0x0) {
    FUN_100c5d5b0(local_f8,0x40,"reason(%lu)",param_1 & 0xfff);
  }
  puVar7 = local_78;
  if (local_110 != (undefined1 *)0x0) {
    puVar7 = local_110;
  }
  puVar8 = local_b8;
  if (puVar2 != (undefined1 *)0x0) {
    puVar8 = puVar2;
  }
  puVar2 = local_f8;
  if (puVar6 != (undefined1 *)0x0) {
    puVar2 = puVar6;
  }
  FUN_100c5d5b0(param_2,param_3,"error:%08lX:%s:%s:%s",param_1,puVar7,puVar8,puVar2);
  sVar3 = _strlen(param_2);
  if ((4 < param_3) && (sVar3 == param_3 - 1)) {
    pcVar4 = _strchr(param_2,0x3a);
    pcVar5 = param_2 + (param_3 - 5);
    if ((pcVar4 == (char *)0x0) || (pcVar5 < pcVar4)) {
      *pcVar5 = ':';
      pcVar4 = pcVar5;
    }
    pcVar4 = _strchr(pcVar4 + 1,0x3a);
    pcVar5 = param_2 + (param_3 - 4);
    if ((pcVar4 == (char *)0x0) || (pcVar5 < pcVar4)) {
      *pcVar5 = ':';
      pcVar4 = pcVar5;
    }
    pcVar4 = _strchr(pcVar4 + 1,0x3a);
    pcVar5 = param_2 + (param_3 - 3);
    if ((pcVar4 == (char *)0x0) || (pcVar5 < pcVar4)) {
      *pcVar5 = ':';
      pcVar4 = pcVar5;
    }
    pcVar5 = _strchr(pcVar4 + 1,0x3a);
    if ((pcVar5 == (char *)0x0) || (param_2 + (param_3 - 2) < pcVar5)) {
      param_2[param_3 - 2] = ':';
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

