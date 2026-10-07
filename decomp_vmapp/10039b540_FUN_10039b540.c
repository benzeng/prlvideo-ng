
char FUN_10039b540(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  
  cVar1 = '\0';
  switch(*(undefined4 *)(param_2 + 0x24)) {
  case 1:
    cVar1 = '\0';
    if (param_4 == 1) {
      return *(char *)(param_2 + 0xb4);
    }
    break;
  case 3:
    cVar1 = '\0';
    if ((param_4 | 4) == 6) {
      return '\x03';
    }
    break;
  case 5:
  case 8:
    cVar1 = (param_4 == 3) * '\x02';
  }
  return cVar1;
}

