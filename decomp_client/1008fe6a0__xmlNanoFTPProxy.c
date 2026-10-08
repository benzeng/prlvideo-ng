
void _xmlNanoFTPProxy(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5)

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
  if (param_1 != 0) {
    DAT_102312c48 = (*(code *)_xmlMemStrdup)(param_1);
  }
  if (param_3 != 0) {
    DAT_102312c58 = (*(code *)_xmlMemStrdup)(param_3);
  }
  if (param_4 != 0) {
    DAT_102312c60 = (*(code *)_xmlMemStrdup)(param_4);
  }
  DAT_102312c50 = param_2;
  DAT_102312c68 = param_5;
  return;
}

