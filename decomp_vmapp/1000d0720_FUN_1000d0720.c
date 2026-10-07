
void FUN_1000d0720(long param_1)

{
  QFile::remove((QString *)(param_1 + 0x1d0));
  QFile::remove((QString *)(param_1 + 0x1d8));
  QFile::remove((QString *)(param_1 + 0x1e0));
  if (*(long *)(*(long *)(param_1 + 0x2b0) + 0x1940) != 0) {
    FUN_10008bf70();
    return;
  }
  return;
}

