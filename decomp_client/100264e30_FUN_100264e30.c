
undefined8 FUN_100264e30(long param_1)

{
  char cVar1;
  CVmHardDisk *this;
  undefined8 uVar2;
  
  this = operator_new(0x158);
  CVmHardDisk::CVmHardDisk(this);
  *(CVmHardDisk **)(param_1 + 0x128) = this;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = FUN_100112b70(uVar2,this,param_1 + 0x130,param_1 + 0x134);
  uVar2 = 0x80000009;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  return uVar2;
}

