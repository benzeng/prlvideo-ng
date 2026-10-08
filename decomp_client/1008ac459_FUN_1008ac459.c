
void FUN_1008ac459(long param_1)

{
  if (param_1 != 0) {
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 0x10));
    _deflateEnd((z_streamp)(param_1 + 0x18));
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

