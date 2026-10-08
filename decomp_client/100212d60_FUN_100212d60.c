
undefined8 FUN_100212d60(long param_1)

{
  undefined8 uVar1;
  CVmHardDisk *pCVar2;
  CVmHardDisk local_170 [344];
  
  pCVar2 = (CVmHardDisk *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pCVar2 = (CVmHardDisk *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pCVar2 = *(CVmHardDisk **)(param_1 + 0x20);
  }
  CVmHardDisk::CVmHardDisk(local_170,pCVar2);
  CVmHardDisk::setSize((ulong)local_170);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar1 = FUN_100160a90(uVar1,local_170,0);
  CVmHardDisk::~CVmHardDisk(local_170);
  return uVar1;
}

