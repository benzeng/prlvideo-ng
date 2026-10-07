
undefined8 FUN_1007eb590(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 extraout_var;
  long lVar3;
  timeval local_18;
  
  lVar1 = *param_1;
  lVar3 = lVar1 / 1000 + (lVar1 >> 0x3f);
  local_18.tv_sec = lVar3 - (lVar1 >> 0x3f);
  local_18.tv_usec = ((int)lVar1 + ((int)lVar3 - (int)(lVar1 >> 0x3f)) * -1000) * 1000;
  iVar2 = _settimeofday(&local_18,(timezone *)0x0);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
}

