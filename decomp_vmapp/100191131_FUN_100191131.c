
undefined4 FUN_100191131(xmlChar *param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while ((&PTR_s_div_100bace80)[(long)local_c * 2] != (undefined *)0x0) {
    iVar1 = _xmlStrEqual((&PTR_s_div_100bace80)[(long)local_c * 2],param_1);
    if (iVar1 != 0) break;
    local_c = local_c + 1;
  }
  return *(undefined4 *)(&DAT_100bace88 + (long)local_c * 0x10);
}

