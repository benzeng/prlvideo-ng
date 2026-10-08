
void FUN_100202f80(long param_1)

{
  if (*(long *)(param_1 + 0x70) != 0) {
    CSdkRequest::cancel();
    return;
  }
  return;
}

