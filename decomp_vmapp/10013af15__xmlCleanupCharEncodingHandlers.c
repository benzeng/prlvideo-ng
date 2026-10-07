
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupCharEncodingHandlers(void)

{
  _xmlCleanupEncodingAliases();
  if (DAT_1011b76e0 != 0) {
    while (0 < DAT_1011b76e8) {
      DAT_1011b76e8 = DAT_1011b76e8 + -1;
      if (*(long *)((long)DAT_1011b76e8 * 8 + DAT_1011b76e0) != 0) {
        if (**(long **)((long)DAT_1011b76e8 * 8 + DAT_1011b76e0) != 0) {
          (*(code *)_xmlFree)(**(undefined8 **)((long)DAT_1011b76e8 * 8 + DAT_1011b76e0));
        }
        (*(code *)_xmlFree)(*(undefined8 *)((long)DAT_1011b76e8 * 8 + DAT_1011b76e0));
      }
    }
    (*(code *)_xmlFree)(DAT_1011b76e0);
    DAT_1011b76e0 = 0;
    DAT_1011b76e8 = 0;
    DAT_1011b76f0 = 0;
  }
  return;
}

