
void FUN_100a5ea80(long param_1,char param_2)

{
  if (*(char *)(param_1 + 0x32) != param_2) {
    *(char *)(param_1 + 0x32) = param_2;
    QByteArray::clear();
    if ((((param_2 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) &&
        (*(char *)(param_1 + 0x34) != '\0')) && (*(char *)(param_1 + 0x33) != '\0')) {
      FUN_100a5e890(param_1);
      return;
    }
  }
  return;
}

