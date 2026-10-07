
int FUN_100694e30(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(*param_1 + -0x48);
  iVar2 = FUN_100694340(lVar1 + 0x180f8 + (long)param_1);
  if (-1 < iVar2) {
    iVar2 = 0;
    *(int *)(param_2 + 8) =
         (int)((ulong)*(uint *)((long)param_1 + lVar1 + 0x18520) /
              *(ulong *)((long)param_1 +
                        lVar1 + *(long *)(*(long *)((long)param_1 + lVar1) + -0x18) + 0x38));
    *(undefined4 *)(param_2 + 0xc) = 0x51;
  }
  return iVar2;
}

