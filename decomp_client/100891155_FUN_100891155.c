
int FUN_100891155(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int local_4c;
  int local_14;
  
  if ((param_1 == 0) || (param_2 < 1)) {
    local_4c = 0;
  }
  else {
    local_14 = 0;
    while (local_14 < param_2) {
      bVar2 = *(byte *)(local_14 + param_1);
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0xe0) == 0xc0) {
          if (param_2 < local_14 + 2) {
            return local_14;
          }
          if ((*(byte *)(local_14 + param_1 + 1) & 0xc0) != 0x80) {
            return -local_14;
          }
          uVar1 = (*(byte *)(local_14 + param_1) & 0x1f) << 6 |
                  *(byte *)(local_14 + param_1 + 1) & 0x3f;
          if (uVar1 < 0x100) {
            if ((((uVar1 < 9) || (10 < uVar1)) && (uVar1 != 0xd)) && (uVar1 < 0x20)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else if ((((uVar1 < 0x100) || (0xd7ff < uVar1)) && ((uVar1 < 0xe000 || (0xfffd < uVar1))))
                  && ((uVar1 < 0x10000 || (0x10ffff < uVar1)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            return -local_14;
          }
          local_14 = local_14 + 2;
        }
        else if ((bVar2 & 0xf0) == 0xe0) {
          if (param_2 < local_14 + 3) {
            return local_14;
          }
          if (((*(byte *)(local_14 + param_1 + 1) & 0xc0) != 0x80) ||
             ((*(byte *)(local_14 + param_1 + 2) & 0xc0) != 0x80)) {
            return -local_14;
          }
          uVar1 = (*(byte *)(local_14 + param_1) & 0xf) << 0xc |
                  (*(byte *)(local_14 + param_1 + 1) & 0x3f) << 6 |
                  *(byte *)(local_14 + param_1 + 2) & 0x3f;
          if (uVar1 < 0x100) {
            if ((((uVar1 < 9) || (10 < uVar1)) && (uVar1 != 0xd)) && (uVar1 < 0x20)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else if ((((uVar1 < 0x100) || (0xd7ff < uVar1)) && ((uVar1 < 0xe000 || (0xfffd < uVar1))))
                  && ((uVar1 < 0x10000 || (0x10ffff < uVar1)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            return -local_14;
          }
          local_14 = local_14 + 3;
        }
        else {
          if ((bVar2 & 0xf8) != 0xf0) {
            return -local_14;
          }
          if (param_2 < local_14 + 4) {
            return local_14;
          }
          if ((((*(byte *)(local_14 + param_1 + 1) & 0xc0) != 0x80) ||
              ((*(byte *)(local_14 + param_1 + 2) & 0xc0) != 0x80)) ||
             ((*(byte *)(local_14 + param_1 + 3) & 0xc0) != 0x80)) {
            return -local_14;
          }
          uVar1 = (*(byte *)(local_14 + param_1) & 7) << 0x12 |
                  (*(byte *)(local_14 + param_1 + 1) & 0x3f) << 0xc |
                  (*(byte *)(local_14 + param_1 + 2) & 0x3f) << 6 |
                  *(byte *)(local_14 + param_1 + 3) & 0x3f;
          if (uVar1 < 0x100) {
            if ((((uVar1 < 9) || (10 < uVar1)) && (uVar1 != 0xd)) && (uVar1 < 0x20)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
          }
          else if ((((uVar1 < 0x100) || (0xd7ff < uVar1)) && ((uVar1 < 0xe000 || (0xfffd < uVar1))))
                  && ((uVar1 < 0x10000 || (0x10ffff < uVar1)))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            return -local_14;
          }
          local_14 = local_14 + 4;
        }
      }
      else if (bVar2 < 0x20) {
        if (((bVar2 != 10) && (bVar2 != 0xd)) && (bVar2 != 9)) {
          return -local_14;
        }
        local_14 = local_14 + 1;
      }
      else {
        local_14 = local_14 + 1;
      }
    }
    local_4c = local_14;
  }
  return local_4c;
}

