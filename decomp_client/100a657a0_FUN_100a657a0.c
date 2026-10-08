
void FUN_100a657a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_102238e68;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  iVar1 = _pipe((int)param_1 + 0x10);
  if (iVar1 == -1) {
    piVar2 = ___error();
    FUN_100df99c0("","IpcServer",0,"pipe(), err=%d",*piVar2);
    param_1[2] = 0xffffffffffffffff;
  }
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_100a652a0(param_2,param_1,1);
  return;
}

