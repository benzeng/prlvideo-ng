
void FUN_10076f000(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[0xe] = -1;
  lVar2 = QString::fromAscii_helper("<unk>",5);
  param_1[0xf] = lVar2;
  param_1[0x10] = param_3;
  iVar1 = _proc_pidinfo(*(int *)(*param_1 + 0x28),4,0,param_1 + 2,0x60);
  *(bool *)(param_1 + 1) = iVar1 < 1;
  return;
}

