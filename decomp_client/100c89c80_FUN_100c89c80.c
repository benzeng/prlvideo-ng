
undefined8 FUN_100c89c80(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  char *local_40;
  char local_32 [2];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = _strtoul(param_1,&local_40,10);
  if (((local_40 != (char *)0x0) && (*local_40 != '\0')) && (param_1 + param_2 < local_40)) {
    return 0;
  }
  if ((long)uVar1 < 0) {
    FUN_100c62ee0(0xd,0xb6,0xbb,"asn1_gen.c",0x19c);
    return 0;
  }
  *param_3 = (int)uVar1;
  if ((local_40 != (char *)0x0) && (param_2 + (int)param_1 != (int)local_40)) {
    local_32[0] = *local_40;
    if (local_32[0] < 'P') {
      if (local_32[0] == 'A') {
        *param_4 = 0x40;
        return 1;
      }
      if (local_32[0] == 'C') goto LAB_100c89d37;
    }
    else {
      if (local_32[0] == 'P') {
        *param_4 = 0xc0;
        return 1;
      }
      if (local_32[0] == 'U') {
        *param_4 = 0;
        return 1;
      }
    }
    local_32[1] = 0;
    FUN_100c62ee0(0xd,0xb6,0xba,"asn1_gen.c",0x1bb);
    FUN_100c642a0(2,"Char=",local_32);
    return 0;
  }
LAB_100c89d37:
  *param_4 = 0x80;
  return 1;
}

