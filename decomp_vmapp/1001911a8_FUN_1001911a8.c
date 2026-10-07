
undefined4 FUN_1001911a8(xmlChar *param_1,xmlChar *param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (DAT_1011b7b48 == 0) {
    _htmlInitAutoClose();
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    local_10 = *(undefined8 **)(&DAT_1011b7b60 + (long)local_14 * 8);
    if (local_10 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _xmlStrEqual((xmlChar *)*local_10,param_1);
    if (iVar1 != 0) break;
  }
  local_18 = (int)((long)(local_10 + -0x20222098) >> 3);
  do {
    local_18 = local_18 + 1;
    if ((&PTR_s_form_1011104c0)[local_18] == (undefined *)0x0) {
      return 0;
    }
    iVar1 = _xmlStrEqual((&PTR_s_form_1011104c0)[local_18],param_2);
  } while (iVar1 == 0);
  return 1;
}

