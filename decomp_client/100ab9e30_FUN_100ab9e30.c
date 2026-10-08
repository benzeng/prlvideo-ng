
undefined8 * FUN_100ab9e30(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  puVar2 = PTR___DefaultRuneLocale_1021e1278;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    if (('\0' < cVar1) && ((puVar2[(long)cVar1 * 4 + 0x3d] & 5) != 0)) {
      std::string::push_back((char)param_1);
    }
    cVar1 = *param_2;
  }
  return param_1;
}

