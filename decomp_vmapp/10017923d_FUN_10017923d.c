
void FUN_10017923d(int *param_1)

{
  if (*(long *)(param_1 + 2) != 0) {
    (*(code *)_xmlFree)(*(undefined8 *)(param_1 + 2));
  }
  if (*(long *)(param_1 + 4) != 0) {
    if (*param_1 < 1) {
      _xmlOutputBufferClose(*(xmlOutputBufferPtr *)(param_1 + 4));
    }
    else {
      FUN_100178b31(*(undefined8 *)(param_1 + 4));
    }
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

