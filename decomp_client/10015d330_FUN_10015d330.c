
long FUN_10015d330(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 200);
    if (param_2 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      plVar2 = *(long **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_2) * 8);
      lVar1 = *plVar2;
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 4) == 0) {
        return 0;
      }
      return plVar2[1];
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: VM index is out of the range.");
  return 0;
}

