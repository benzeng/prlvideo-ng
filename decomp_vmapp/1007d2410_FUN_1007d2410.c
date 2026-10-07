
void FUN_1007d2410(void)

{
  QMutex *pQVar1;
  
  pQVar1 = DAT_1011bff70;
  if (DAT_1011bff70 != (QMutex *)0x0) {
    QMutex::~QMutex(DAT_1011bff70);
    operator_delete(pQVar1);
  }
  DAT_1011bff68 = 0xfffffffe;
  return;
}

