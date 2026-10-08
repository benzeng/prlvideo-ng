
bool FUN_1009cfcd0(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  
  if (3 < param_2 - 1U) {
    return false;
  }
  lVar3 = (long)param_2;
  switch(param_2) {
  case 1:
    bVar2 = *param_1;
    goto LAB_1009cfcf8;
  case 4:
    if (-1 < (char)param_1[lVar3 + -1]) {
      return false;
    }
    if (0xbf < param_1[lVar3 + -1]) {
      return false;
    }
    lVar3 = lVar3 + -1;
  case 3:
    if (-1 < (char)param_1[lVar3 + -1]) {
      return false;
    }
    if (0xbf < param_1[lVar3 + -1]) {
      return false;
    }
    lVar3 = lVar3 + -1;
  }
  bVar1 = param_1[lVar3 + -1];
  if (0xbf < bVar1) {
    return false;
  }
  bVar2 = *param_1;
  if (bVar2 < 0xf0) {
    if (bVar2 == 0xe0) {
      if (bVar1 < 0xa0) {
        return false;
      }
      goto LAB_1009cfcf8;
    }
    if (bVar2 == 0xed) {
      if (0x9f < bVar1) {
        return false;
      }
      goto LAB_1009cfcf8;
    }
  }
  else {
    if (bVar2 == 0xf0) {
      if (bVar1 < 0x90) {
        return false;
      }
      goto LAB_1009cfcf8;
    }
    if (bVar2 == 0xf4) {
      if (0x8f < bVar1) {
        return false;
      }
      goto LAB_1009cfcf8;
    }
  }
  if (-1 < (char)bVar1) {
    return false;
  }
LAB_1009cfcf8:
  if (((char)bVar2 < '\0') && (bVar2 < 0xc2)) {
    bVar4 = false;
  }
  else {
    bVar4 = bVar2 < 0xf5;
  }
  return bVar4;
}

