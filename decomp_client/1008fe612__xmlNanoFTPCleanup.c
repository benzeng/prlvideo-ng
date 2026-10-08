
void _xmlNanoFTPCleanup(void)

{
  if (DAT_102312c48 != 0) {
    (*(code *)_xmlFree)(DAT_102312c48);
    DAT_102312c48 = 0;
  }
  if (DAT_102312c58 != 0) {
    (*(code *)_xmlFree)(DAT_102312c58);
    DAT_102312c58 = 0;
  }
  if (DAT_102312c60 != 0) {
    (*(code *)_xmlFree)(DAT_102312c60);
    DAT_102312c60 = 0;
  }
  DAT_102312c40 = 0;
  return;
}

