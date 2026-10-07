
void _xmlNanoFTPCleanup(void)

{
  if (DAT_1011b7ec8 != 0) {
    (*(code *)_xmlFree)(DAT_1011b7ec8);
    DAT_1011b7ec8 = 0;
  }
  if (DAT_1011b7ed8 != 0) {
    (*(code *)_xmlFree)(DAT_1011b7ed8);
    DAT_1011b7ed8 = 0;
  }
  if (DAT_1011b7ee0 != 0) {
    (*(code *)_xmlFree)(DAT_1011b7ee0);
    DAT_1011b7ee0 = 0;
  }
  DAT_1011b7ec0 = 0;
  return;
}

