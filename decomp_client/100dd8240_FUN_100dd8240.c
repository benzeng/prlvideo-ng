
undefined8 * FUN_100dd8240(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  char local_a8 [128];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  _IORegistryEntryGetName(param_2,local_a8);
  sVar2 = _strlen(local_a8);
  uVar3 = QString::fromAscii_helper(local_a8,(int)sVar2);
  *param_1 = uVar3;
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

