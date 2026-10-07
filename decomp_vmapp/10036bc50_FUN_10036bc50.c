
char FUN_10036bc50(float param_1,float param_2,long param_3,long param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(int *)(param_3 + 0x70) != 0) &&
     ((param_5 == (undefined8 *)0x0 || (*(uint *)*param_5 < 0xffff0300)))) {
    cVar2 = '\0';
    bVar1 = false;
    if ((param_1 == DAT_100b39678) && (!NAN(param_1) && !NAN(DAT_100b39678))) {
      bVar1 = param_2 == DAT_100b39678;
    }
    switch(*(undefined4 *)(param_3 + 0x8c)) {
    case 0:
      cVar2 = '\a';
      if (param_4 != 0) {
        cVar2 = '\a';
        if (*(char *)(param_4 + 0xbd) == '\0') {
          cVar2 = '\0';
        }
        return cVar2;
      }
      break;
    case 1:
      return !bVar1 * '\x03' + '\x01';
    case 2:
      return !bVar1 * '\x03' + '\x02';
    case 3:
      cVar2 = !bVar1 * '\x03' + '\x03';
    }
  }
  return cVar2;
}

