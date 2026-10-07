
ulong FUN_1004efcd0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_1011bc198 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_1011bc198), iVar1 != 0)) {
    DAT_1011bc190 = QString::fromAscii_helper("/RECYCLER/",10);
    ___cxa_atexit(FUN_10002f530,&DAT_1011bc190,0x100000000);
    ___cxa_guard_release(&DAT_1011bc198);
  }
  iVar1 = QString::indexOf(param_1,&DAT_1011bc190,0,0);
  if (0 < iVar1) {
    iVar1 = iVar1 + *(int *)(DAT_1011bc190 + 4);
    uVar2 = QString::indexOf(param_1,0x2f,iVar1,1);
    if (0 < (int)uVar2) {
      return uVar2;
    }
    if (iVar1 < (int)*(uint *)(*param_1 + 4)) {
      return (ulong)*(uint *)(*param_1 + 4);
    }
  }
  return 0;
}

