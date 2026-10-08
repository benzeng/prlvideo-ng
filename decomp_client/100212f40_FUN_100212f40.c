
void FUN_100212f40(long param_1)

{
  uint uVar1;
  CVmHardDisk *this;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    CVmDevice::getIndex();
    CVmClusteredDevice::getStackIndex();
    this = (CVmHardDisk *)0x0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (this = (CVmHardDisk *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      this = *(CVmHardDisk **)(param_1 + 0x20);
    }
    CVmHardDisk::operator=(this,(CVmHardDisk *)(param_1 + 0x48));
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    }
    CVmDevice::setIndex(uVar1);
    uVar1 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    }
    CVmClusteredDevice::setStackIndex(uVar1);
    return;
  }
  return;
}

