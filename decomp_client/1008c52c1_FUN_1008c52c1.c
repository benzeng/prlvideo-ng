
undefined4 FUN_1008c52c1(long *param_1)

{
  xmlChar *str1;
  int iVar1;
  undefined4 local_24;
  int local_c;
  
  if (param_1 == (long *)0x0) {
    local_24 = 0xffffffff;
  }
  else {
    str1 = (xmlChar *)param_1[0x24];
    if (str1 == (xmlChar *)0x0) {
      FUN_1008c4d9d(param_1,"p");
      FUN_1008c500c(param_1,"p");
      FUN_1008c40a7(param_1,"p");
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) {
        (**(code **)(*param_1 + 0x70))(param_1[1],"p",0);
      }
      local_24 = 1;
    }
    else if (DAT_102275a60 == 0) {
      local_24 = 0;
    }
    else {
      for (local_c = 0; (&PTR_s_html_102278f30)[local_c] != (undefined *)0x0; local_c = local_c + 1)
      {
        iVar1 = _xmlStrEqual(str1,(&PTR_s_html_102278f30)[local_c]);
        if (iVar1 != 0) {
          FUN_1008c4d9d(param_1,"p");
          FUN_1008c500c(param_1,"p");
          FUN_1008c40a7(param_1,"p");
          if ((*param_1 != 0) && (*(long *)(*param_1 + 0x70) != 0)) {
            (**(code **)(*param_1 + 0x70))(param_1[1],"p",0);
          }
          return 1;
        }
      }
      local_24 = 0;
    }
  }
  return local_24;
}

