
undefined8 * FUN_100463e00(undefined8 *param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  undefined8 uVar3;
  char local_228 [512];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  _IORegistryEntryGetPath(*(undefined4 *)(param_2 + 4),"IOService",local_228);
  sVar2 = _strlen(local_228);
  uVar3 = QString::fromLatin1_helper(local_228,(int)sVar2);
  *param_1 = uVar3;
  if (lVar1 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

