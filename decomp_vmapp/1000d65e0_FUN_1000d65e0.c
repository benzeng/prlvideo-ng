
void FUN_1000d65e0(QFile *param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
  }
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  QFile::~QFile(param_1);
  return;
}

