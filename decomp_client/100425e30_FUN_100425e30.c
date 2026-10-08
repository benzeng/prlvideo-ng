
void FUN_100425e30(long param_1,undefined1 param_2)

{
  if (((*(long *)(param_1 + 0x68) != 0) && (*(int *)(*(long *)(param_1 + 0x68) + 4) != 0)) &&
     (*(long *)(param_1 + 0x70) != 0)) {
    CVmHardDisk::setDiskType(*(long *)(param_1 + 0x70),param_2);
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Hard Disk instance is null.");
  return;
}

