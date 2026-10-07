
void FUN_10019e7cc(long param_1,xmlChar *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    if (param_2 == (xmlChar *)0x0) {
      FUN_10019e49b(param_1,0x1397,"Name is NULL");
    }
    else {
      iVar1 = _xmlValidateName(param_2,0);
      if (iVar1 != 0) {
        FUN_10019e607(param_1,0x13aa,"Name is not an NCName \'%s\'",param_2);
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        iVar1 = _xmlDictOwns(*(xmlDictPtr *)(param_1 + 0x88),param_2);
        if (iVar1 == 0) {
          FUN_10019e607(param_1,0x13ab,"Name is not from the document dictionnary \'%s\'",param_2);
        }
      }
    }
  }
  return;
}

