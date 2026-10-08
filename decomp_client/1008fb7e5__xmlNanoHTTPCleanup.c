
void _xmlNanoHTTPCleanup(void)

{
  if (DAT_102312c30 != 0) {
    (*(code *)_xmlFree)(DAT_102312c30);
    DAT_102312c30 = 0;
  }
  DAT_102312c28 = 0;
  return;
}

