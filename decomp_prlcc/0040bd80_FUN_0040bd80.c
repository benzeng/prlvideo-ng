
bool FUN_0040bd80(undefined8 *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)param_1 = 0x8230;
  *(undefined4 *)((long)param_1 + 4) = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0x18;
  *(uint *)(param_1 + 2) = (-(uint)(param_2 == 0) & 0xfffffffc) + 8;
  iVar1 = FUN_0040bac0();
  bVar2 = false;
  if (-1 < iVar1) {
    bVar2 = *(int *)((long)param_1 + 4) == 0;
  }
  return bVar2;
}

