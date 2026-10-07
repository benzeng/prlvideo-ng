
long * FUN_100807bc0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  timeval local_28;
  
  if ((*(long *)(*(long *)(param_1 + 0x88) + 0x350) != 0) ||
     (plVar3 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x88) + 0x358) != 0)) {
    _gettimeofday(&local_28,(void *)0x0);
    lVar4 = *(long *)(param_1 + 0x88);
    if ((local_28.tv_sec <= *(long *)(lVar4 + 0x350)) &&
       ((*(long *)(lVar4 + 0x350) != local_28.tv_sec || (local_28.tv_usec < *(int *)(lVar4 + 0x358))
        ))) {
      lVar1 = *(long *)(lVar4 + 0x350);
      param_2[1] = *(long *)(lVar4 + 0x358);
      *param_2 = lVar1;
      lVar4 = *param_2 - local_28.tv_sec;
      *param_2 = lVar4;
      iVar2 = (int)param_2[1] - local_28.tv_usec;
      *(int *)(param_2 + 1) = iVar2;
      if (iVar2 < 0) {
        lVar4 = lVar4 + -1;
        *param_2 = lVar4;
        iVar2 = iVar2 + 1000000;
        *(int *)(param_2 + 1) = iVar2;
      }
      if (lVar4 != 0) {
        return param_2;
      }
      if (14999 < iVar2) {
        return param_2;
      }
    }
    param_2[1] = 0;
    *param_2 = 0;
    plVar3 = param_2;
  }
  return plVar3;
}

