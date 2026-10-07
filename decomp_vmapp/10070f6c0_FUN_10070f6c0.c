
undefined8 FUN_10070f6c0(char *param_1)

{
  long lVar1;
  undefined8 local_418;
  undefined4 local_410;
  undefined2 local_40c;
  char local_40a [1010];
  long local_18;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_418 = 0x4341343633364334;
  local_40a[0] = '\0';
  local_40c = 0x2f64;
  local_410 = 0x702e5458;
  local_18 = lVar1;
  _strcpy(local_40a,param_1);
  _shm_unlink(&local_418);
  if (lVar1 == local_18) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

