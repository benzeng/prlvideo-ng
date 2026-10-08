
void FUN_1007b3b90(long param_1)

{
  FUN_1008628b0(param_1,0);
  if (*(char *)(param_1 + 0x20) != '\0') {
    QObject::deleteLater();
    return;
  }
  return;
}

