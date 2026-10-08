
undefined4 FUN_1008c4ad0(xmlChar *param_1,xmlChar *param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (DAT_1023128c8 == 0) {
    _htmlInitAutoClose();
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    local_10 = *(undefined8 **)(&DAT_1023128e0 + (long)local_14 * 8);
    if (local_10 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _xmlStrEqual((xmlChar *)*local_10,param_1);
    if (iVar1 != 0) break;
  }
  local_18 = (int)((long)(local_10 + -0x2044f0b8) >> 3);
  do {
    local_18 = local_18 + 1;
    if ((&PTR_s_form_1022785c0)[local_18] == (undefined *)0x0) {
      return 0;
    }
    iVar1 = _xmlStrEqual((&PTR_s_form_1022785c0)[local_18],param_2);
  } while (iVar1 == 0);
  return 1;
}

