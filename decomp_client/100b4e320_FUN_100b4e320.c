
int FUN_100b4e320(char *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = 0;
  uStack_30 = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_20 = lVar1;
  _strncpy(local_48,param_1,0xf);
  iVar2 = _ioctl(DAT_1022cf3fc,0xc02069c1,local_48);
  iVar3 = -1;
  if (-1 < iVar2) {
    if (0x5056532f < (int)local_38) {
      iVar3 = -1;
      if ((int)local_38 + -0x50565330 < 9) {
        iVar3 = (int)local_38 + -0x50565330;
      }
    }
  }
  if (lVar1 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

