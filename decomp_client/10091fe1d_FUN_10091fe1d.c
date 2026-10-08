
void FUN_10091fe1d(long param_1,FILE *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  char local_88 [104];
  undefined8 local_20;
  int *local_18;
  int local_c;
  
  local_20 = 0;
  if (param_1 != 0) {
    for (local_c = 0; (local_c < param_3 && (local_c < 0x19)); local_c = local_c + 1) {
      iVar1 = local_c * 2 + 1;
      local_88[iVar1] = ' ';
      local_88[local_c * 2] = local_88[iVar1];
    }
    iVar1 = local_c * 2 + 1;
    local_88[iVar1] = '\0';
    local_88[local_c * 2] = local_88[iVar1];
    _fprintf(param_2,local_88);
    if (*(long *)(param_1 + 0x18) == 0) {
      _fwrite("MISSING particle term\n",1,0x16,param_2);
    }
    else {
      local_18 = *(int **)(param_1 + 0x18);
      switch(*local_18) {
      default:
        _fwrite("UNKNOWN\n",1,8,param_2);
        return;
      case 2:
        _fwrite("ANY",1,3,param_2);
        break;
      case 6:
        _fwrite("SEQUENCE",1,8,param_2);
        break;
      case 7:
        _fwrite("CHOICE",1,6,param_2);
        break;
      case 8:
        _fwrite("ALL",1,3,param_2);
        break;
      case 0xe:
        uVar2 = FUN_10091a69e(&local_20,*(undefined8 *)(local_18 + 0x18),
                              *(undefined8 *)(local_18 + 4));
        _fprintf(param_2,"ELEM \'%s\'",uVar2);
      }
      if (*(int *)(param_1 + 0x20) != 1) {
        _fprintf(param_2," min: %d",(ulong)*(uint *)(param_1 + 0x20));
      }
      if (*(int *)(param_1 + 0x24) < 0x40000000) {
        if (*(int *)(param_1 + 0x24) != 1) {
          _fprintf(param_2," max: %d",(ulong)*(uint *)(param_1 + 0x24));
        }
      }
      else {
        _fwrite(" max: unbounded",1,0xf,param_2);
      }
      _fputc(10,param_2);
      if ((((*local_18 == 6) || (*local_18 == 7)) || (*local_18 == 8)) &&
         (*(long *)(local_18 + 6) != 0)) {
        FUN_10091fe1d(*(undefined8 *)(local_18 + 6),param_2,param_3 + 1);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10091fe1d(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
      }
    }
  }
  return;
}

