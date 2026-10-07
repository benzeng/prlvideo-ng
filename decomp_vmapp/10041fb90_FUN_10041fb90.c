
uint FUN_10041fb90(byte *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  char cVar5;
  char cVar6;
  
  if (param_3 == 0) {
    sVar4 = _strlen((char *)param_1);
    param_3 = (uint)sVar4;
  }
  uVar3 = 0;
  if (0 < (int)param_3) {
    iVar2 = 0;
    if ((param_3 & 1) != 0) {
      cVar5 = '0';
      cVar6 = '0';
      if (0x9f < *param_1) {
        cVar6 = 'W';
      }
      *param_2 = cVar6 + (*param_1 >> 4);
      bVar1 = *param_1;
      if (9 < (bVar1 & 0xf)) {
        cVar5 = 'W';
      }
      param_1 = param_1 + 1;
      param_2[1] = cVar5 + (bVar1 & 0xf);
      param_2 = param_2 + 2;
      iVar2 = 1;
    }
    uVar3 = param_3;
    if (param_3 != 1) {
      iVar2 = param_3 - iVar2;
      do {
        cVar6 = '0';
        cVar5 = '0';
        if (0x9f < *param_1) {
          cVar5 = 'W';
        }
        *param_2 = cVar5 + (*param_1 >> 4);
        cVar5 = '0';
        if (9 < (*param_1 & 0xf)) {
          cVar5 = 'W';
        }
        param_2[1] = cVar5 + (*param_1 & 0xf);
        cVar5 = '0';
        if (0x9f < param_1[1]) {
          cVar5 = 'W';
        }
        param_2[2] = cVar5 + (param_1[1] >> 4);
        if (9 < (param_1[1] & 0xf)) {
          cVar6 = 'W';
        }
        param_2[3] = cVar6 + (param_1[1] & 0xf);
        param_1 = param_1 + 2;
        param_2 = param_2 + 4;
        iVar2 = iVar2 + -2;
      } while (iVar2 != 0);
    }
  }
  return uVar3;
}

