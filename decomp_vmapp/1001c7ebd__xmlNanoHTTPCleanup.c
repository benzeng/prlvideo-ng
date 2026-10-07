
void _xmlNanoHTTPCleanup(void)

{
  if (DAT_1011b7eb0 != 0) {
    (*(code *)_xmlFree)(DAT_1011b7eb0);
    DAT_1011b7eb0 = 0;
  }
  DAT_1011b7ea8 = 0;
  return;
}

