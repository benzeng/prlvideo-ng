
void FUN_10013ea10(long param_1)

{
  do {
    QVariant::~QVariant((QVariant *)(param_1 + 0x28));
    if (*(long *)(param_1 + 8) != 0) {
      FUN_10013ea10();
    }
    param_1 = *(long *)(param_1 + 0x10);
  } while (param_1 != 0);
  return;
}

