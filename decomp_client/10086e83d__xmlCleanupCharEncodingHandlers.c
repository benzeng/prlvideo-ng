
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlCleanupCharEncodingHandlers(void)

{
  _xmlCleanupEncodingAliases();
  if (DAT_102312460 != 0) {
    while (0 < DAT_102312468) {
      DAT_102312468 = DAT_102312468 + -1;
      if (*(long *)((long)DAT_102312468 * 8 + DAT_102312460) != 0) {
        if (**(long **)((long)DAT_102312468 * 8 + DAT_102312460) != 0) {
          (*(code *)_xmlFree)(**(undefined8 **)((long)DAT_102312468 * 8 + DAT_102312460));
        }
        (*(code *)_xmlFree)(*(undefined8 *)((long)DAT_102312468 * 8 + DAT_102312460));
      }
    }
    (*(code *)_xmlFree)(DAT_102312460);
    DAT_102312460 = 0;
    DAT_102312468 = 0;
    DAT_102312470 = 0;
  }
  return;
}

