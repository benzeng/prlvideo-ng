
QString * FUN_1004e2de0(void)

{
  QString *pQVar1;
  
  pQVar1 = operator_new(0x18);
  QDir::toNativeSeparators(pQVar1);
  QString::toUtf8_helper(pQVar1 + 1);
  *(undefined4 *)&pQVar1[2].field0_0x0 = 0xffffffff;
  *(undefined1 *)((long)&pQVar1[2].field0_0x0 + 4) = 0;
  return pQVar1;
}

