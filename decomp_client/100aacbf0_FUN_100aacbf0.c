
void FUN_100aacbf0(void)

{
  QMutex *pQVar1;
  
  pQVar1 = DAT_102313a20;
  if (DAT_102313a20 != (QMutex *)0x0) {
    QMutex::~QMutex(DAT_102313a20);
    operator_delete(pQVar1);
  }
  DAT_102313a18 = 0xfffffffe;
  return;
}

