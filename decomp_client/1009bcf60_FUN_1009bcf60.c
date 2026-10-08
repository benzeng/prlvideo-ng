
void FUN_1009bcf60(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x48) = 1;
    QObject::deleteLater();
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = 0;
  }
  return;
}

