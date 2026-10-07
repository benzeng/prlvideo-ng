
undefined1 FUN_1004acf10(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
LAB_1004acf40:
      *(int *)(param_1 + 0x88) = param_2;
      return 1;
    }
  }
  else if ((param_2 != 3) || (iVar1 = *(int *)(param_1 + 0x88), iVar1 == 2)) goto LAB_1004acf40;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("CHRSERVER","ChrToolSrv",2,
                  "[SetCoherenceServerState] cannot set state %d (curr state=%d)",param_2,iVar1);
  }
  return 0;
}

