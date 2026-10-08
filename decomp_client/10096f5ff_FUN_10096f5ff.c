
void FUN_10096f5ff(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    _fwrite("<grammar",1,8,param_1);
    if (param_3 != 0) {
      _fwrite(" xmlns=\"http://relaxng.org/ns/structure/1.0\"",1,0x2c,param_1);
    }
    iVar1 = *(int *)(param_2 + 0x20);
    if (iVar1 == 1) {
      _fwrite(" combine=\"choice\"",1,0x11,param_1);
    }
    else if (iVar1 != 0) {
      if (iVar1 == 2) {
        _fwrite(" combine=\"interleave\"",1,0x15,param_1);
      }
      else {
        _fwrite(" <!-- invalid combine value -->",1,0x1f,param_1);
      }
    }
    _fwrite(">\n",1,2,param_1);
    if (*(long *)(param_2 + 0x18) == 0) {
      _fwrite(" <!-- grammar had no start -->",1,0x1e,param_1);
    }
    else {
      _fwrite("<start>\n",1,8,param_1);
      FUN_10096ef79(param_1,*(undefined8 *)(param_2 + 0x18));
      _fwrite("</start>\n",1,9,param_1);
    }
    _fwrite("</grammar>\n",1,0xb,param_1);
  }
  return;
}

