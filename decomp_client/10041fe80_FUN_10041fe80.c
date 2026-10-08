
void FUN_10041fe80(long param_1)

{
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_10013bd60(*(undefined8 *)(*(long *)(param_1 + 0x60) + 8));
    if (*(CVmHardDisk **)(param_1 + 0x68) != (CVmHardDisk *)0x0) {
      CVmHardDisk::operator=((CVmHardDisk *)(param_1 + 0x70),*(CVmHardDisk **)(param_1 + 0x68));
    }
  }
  QDialog::open();
  return;
}

