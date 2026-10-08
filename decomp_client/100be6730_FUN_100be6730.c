
char * FUN_100be6730(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0x300) {
    if (iVar1 == 2) {
      return "SSLv2";
    }
  }
  else {
    switch(iVar1) {
    case 0x300:
      return "SSLv3";
    case 0x301:
      return "TLSv1";
    case 0x302:
      return "TLSv1.1";
    case 0x303:
      return "TLSv1.2";
    }
  }
  return "unknown";
}

