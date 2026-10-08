
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100bc1630(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  size_t local_c0;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == (int *)0x0)) {
    uVar9 = FUN_100b9d470(0xfffffffd,0);
    return uVar9;
  }
  iVar3 = FUN_100bc14f0();
  *param_2 = iVar3;
  if (iVar3 < 1) {
    uVar5 = FUN_100b9d560();
LAB_100bc19be:
    uVar9 = (ulong)uVar5;
    puVar6 = (undefined8 *)*param_1;
    while (puVar6 != param_1) {
      puVar1 = (undefined8 *)*puVar6;
      _free(puVar6);
      puVar6 = puVar1;
    }
  }
  else {
    iVar3 = 0;
    do {
      puVar6 = _malloc(0x38);
      if (puVar6 == (undefined8 *)0x0) {
        uVar5 = FUN_100b9d470(0xfffffffe,0);
        goto LAB_100bc19be;
      }
      puVar6[6] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      if (DAT_102315d20 == '\0') {
        while (cVar2 = _OSAtomicCompareAndSwap32(0,1,&DAT_102315d24), cVar2 == '\0') {
          _usleep(1000);
        }
        if (DAT_102315d20 != '\0') {
LAB_100bc1820:
          _DAT_102315d24 = 0;
          goto LAB_100bc182a;
        }
        local_c0 = 0x100;
        ___snprintf_chk(local_b8,0x7f,0,0x80,"%s.%s.%s","machdep","cpu","brand_string");
        iVar4 = _sysctlbyname(local_b8,&DAT_102315d30,&local_c0,(void *)0x0,0);
        if (iVar4 == 0) {
          local_c0 = 0x100;
          ___snprintf_chk(local_b8,0x7f,0,0x80,"%s.%s.%s","machdep","cpu","model_string");
          iVar4 = _sysctlbyname(local_b8,&DAT_102315e30,&local_c0,(void *)0x0,0);
          if (iVar4 == 0) {
            DAT_102315d20 = '\x01';
            goto LAB_100bc1820;
          }
        }
        _DAT_102315d24 = 0;
LAB_100bc191b:
        piVar7 = ___error();
        pcVar8 = _strerror(*piVar7);
        uVar5 = FUN_100b9d470(0xffffffff,"Can\'t get CPU information: %s",pcVar8);
        if (uVar5 != 0) {
          _free(puVar6);
          goto LAB_100bc19be;
        }
      }
      else {
LAB_100bc182a:
        puVar6[2] = &DAT_102315d30;
        puVar6[3] = &DAT_102315e30;
        ___snprintf_chk(local_b8,0x7f,0,0x80,"%s.%s.%s","machdep","cpu","logical_per_package");
        local_c0 = 4;
        iVar4 = _sysctlbyname(local_b8,puVar6 + 5,&local_c0,(void *)0x0,0);
        if (iVar4 != 0) goto LAB_100bc191b;
        *(undefined4 *)((long)puVar6 + 0x2c) = *(undefined4 *)(puVar6 + 5);
        ___snprintf_chk(local_b8,0x7f,0,0x80,"%s.%s.%s","machdep","cpu","cores_per_package");
        local_c0 = 4;
        iVar4 = _sysctlbyname(local_b8,puVar6 + 6,&local_c0,(void *)0x0,0);
        if (iVar4 != 0) goto LAB_100bc191b;
      }
      puVar1 = (undefined8 *)param_1[1];
      puVar6[1] = puVar1;
      *puVar6 = param_1;
      *puVar1 = puVar6;
      param_1[1] = puVar6;
      iVar3 = iVar3 + 1;
      uVar9 = 0;
    } while (iVar3 < *param_2);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

