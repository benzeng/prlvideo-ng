
int _xmlDelEncodingAlias(char *alias)

{
  int iVar1;
  int local_c;
  
  if ((alias != (char *)0x0) && (DAT_102312450 != 0)) {
    for (local_c = 0; local_c < DAT_102312458; local_c = local_c + 1) {
      iVar1 = _strcmp(*(char **)((long)local_c * 0x10 + DAT_102312450 + 8),alias);
      if (iVar1 == 0) {
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_102312450));
        (*(code *)_xmlFree)(*(undefined8 *)((long)local_c * 0x10 + DAT_102312450 + 8));
        DAT_102312458 = DAT_102312458 + -1;
        _memmove((void *)((long)local_c * 0x10 + DAT_102312450),
                 (void *)((long)local_c * 0x10 + DAT_102312450 + 0x10),
                 (long)(DAT_102312458 - local_c) << 4);
        return 0;
      }
    }
  }
  return -1;
}

