
void FUN_100a1e760(long param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_100a1e8b0(param_1);
      return;
    }
    if (param_3 == 1) {
      FUN_100a1eab0(param_1 + 0x10);
      QObject::deleteLater();
      return;
    }
    if (param_3 == 0) {
      FUN_100322530(param_1);
      return;
    }
  }
  return;
}

