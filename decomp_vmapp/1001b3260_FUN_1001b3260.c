
void FUN_1001b3260(long *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double local_50;
  double local_38;
  double local_30;
  int local_20;
  
  local_30 = 1.0;
  bVar2 = false;
  local_20 = 0;
  bVar3 = false;
  if ((int)param_1[2] == 0) {
    if ((*(char *)*param_1 == '.') || ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a)))) {
      local_38 = 0.0;
      while ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a))) {
        local_38 = DAT_100b4aec0 * local_38;
        bVar1 = *(byte *)*param_1;
        uVar4 = (ulong)(int)(bVar1 - 0x30);
        bVar2 = true;
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        if ((long)uVar4 < 0) {
          local_50 = (double)(uVar4 >> 1 | (ulong)(bVar1 - 0x30 & 1));
          local_50 = local_50 + local_50;
        }
        else {
          local_50 = (double)(long)uVar4;
        }
        local_38 = local_38 + local_50;
      }
      if (*(char *)*param_1 == '.') {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        if (((*(byte *)*param_1 < 0x30) || (0x39 < *(byte *)*param_1)) && (!bVar2)) {
          _xmlXPathErr(param_1,1);
          return;
        }
        while ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a))) {
          local_30 = local_30 / DAT_100b4aec0;
          local_38 = local_38 + (double)(int)(*(byte *)*param_1 - 0x30) * local_30;
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
      }
      if ((*(char *)*param_1 == 'e') || (*(char *)*param_1 == 'E')) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        if (*(char *)*param_1 == '-') {
          bVar3 = true;
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
        else if ((*(char *)*param_1 == '+') && (*(char *)*param_1 != '\0')) {
          *param_1 = *param_1 + 1;
        }
        while ((0x2f < *(byte *)*param_1 && (*(byte *)*param_1 < 0x3a))) {
          local_20 = local_20 * 10 + (uint)*(byte *)*param_1 + -0x30;
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
        if (bVar3) {
          local_20 = -local_20;
        }
        dVar6 = (double)_pow(DAT_100b4aec0,(double)local_20);
        local_38 = local_38 * dVar6;
      }
      uVar5 = _xmlXPathNewFloat(local_38);
      FUN_1001a5741(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xc,3,0,0,uVar5,0);
    }
    else {
      _xmlXPathErr(param_1,1);
    }
  }
  return;
}

