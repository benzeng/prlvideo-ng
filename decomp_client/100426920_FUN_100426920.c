
CVmHardDisk * FUN_100426920(long param_1)

{
  CVmHardDisk *this;
  CVmHardDisk *pCVar1;
  
  this = operator_new(0x158);
  pCVar1 = (CVmHardDisk *)0x0;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (pCVar1 = (CVmHardDisk *)0x0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) {
    pCVar1 = *(CVmHardDisk **)(param_1 + 0x70);
  }
  CVmHardDisk::CVmHardDisk(this,pCVar1);
  return this;
}

