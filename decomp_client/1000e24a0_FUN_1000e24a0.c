
void FUN_1000e24a0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = 0;
  FUN_100df99c0("SGAC","prl_client_app",0,"* <RunAppsList> (ptr=%p, size=%i)>:",param_1,
                *(int *)(*param_1 + 0xc) - *(int *)(*param_1 + 8));
  lVar1 = *param_1;
  uVar2 = (ulong)*(uint *)(lVar1 + 8);
  if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    do {
      FUN_1000e20b0(*(undefined8 *)(lVar1 + 0x10 + ((int)uVar2 + lVar3) * 8));
      lVar3 = lVar3 + 1;
      lVar1 = *param_1;
      uVar2 = (ulong)*(int *)(lVar1 + 8);
    } while (lVar3 < (long)((long)*(int *)(lVar1 + 0xc) - uVar2));
  }
  FUN_100df99c0("SGAC","prl_client_app",0,"* </RunAppsList>");
  return;
}

