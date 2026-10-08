
void FUN_100378b40(long param_1)

{
  char cVar1;
  QMargins *pQVar2;
  
  cVar1 = FUN_10037da90(*(undefined8 *)(param_1 + 0x38));
  if (cVar1 == '\0') {
    pQVar2 = *(QMargins **)(param_1 + 0x10);
  }
  else {
    FUN_10037daa0(*(undefined8 *)(param_1 + 0x38));
    pQVar2 = *(QMargins **)(param_1 + 0x10);
  }
  QAbstractScrollArea::setViewportMargins(pQVar2);
  return;
}

