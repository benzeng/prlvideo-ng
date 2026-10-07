
void FUN_1007ea090(undefined8 *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  char local_58 [8];
  undefined1 local_50;
  char local_4f [4];
  undefined1 local_4b;
  char local_4a [4];
  undefined1 local_46;
  char local_45 [4];
  undefined1 local_41;
  char local_40 [12];
  undefined1 local_34;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  param_1[1] = 0;
  *param_1 = 0;
  local_30 = lVar1;
  if (param_2 != (char *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    sVar2 = _strlen(param_2);
    if (sVar2 == 0x20) {
      _strncpy(local_58,param_2,8);
      local_50 = 0x2d;
      _strncpy(local_4f,param_2 + 8,4);
      local_4b = 0x2d;
      _strncpy(local_4a,param_2 + 0xc,4);
      local_46 = 0x2d;
      _strncpy(local_45,param_2 + 0x10,4);
      local_41 = 0x2d;
      _strncpy(local_40,param_2 + 0x14,0xc);
      local_34 = 0;
      FUN_1007ea8c0(local_58,param_1);
    }
    else {
      if (sVar2 == 0x24) {
        if (lVar1 == local_30) {
LAB_1007ea191:
          FUN_1007ea8c0(param_2,param_1);
          return;
        }
        goto LAB_1007ea1bb;
      }
      if (sVar2 == 0x26) {
        if (lVar1 == local_30) {
          param_2 = param_2 + 1;
          goto LAB_1007ea191;
        }
        goto LAB_1007ea1bb;
      }
    }
  }
  if (lVar1 == local_30) {
    return;
  }
LAB_1007ea1bb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

