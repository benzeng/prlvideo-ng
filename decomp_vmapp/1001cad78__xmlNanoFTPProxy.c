
void _xmlNanoFTPProxy(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5)

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
  if (param_1 != 0) {
    DAT_1011b7ec8 = (*(code *)_xmlMemStrdup)(param_1);
  }
  if (param_3 != 0) {
    DAT_1011b7ed8 = (*(code *)_xmlMemStrdup)(param_3);
  }
  if (param_4 != 0) {
    DAT_1011b7ee0 = (*(code *)_xmlMemStrdup)(param_4);
  }
  DAT_1011b7ed0 = param_2;
  DAT_1011b7ee8 = param_5;
  return;
}

