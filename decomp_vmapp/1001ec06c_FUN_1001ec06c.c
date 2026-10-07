
void FUN_1001ec06c(long param_1,FILE *param_2,undefined8 param_3,long param_4)

{
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x58) >> 6 & 1) == 0) {
      _fwrite("Element",1,7,param_2);
      if ((*(uint *)(param_1 + 0x58) >> 1 & 1) != 0) {
        _fwrite(" (global)",1,9,param_2);
      }
      _fprintf(param_2,": %s ",*(undefined8 *)(param_1 + 0x10));
      if (param_4 != 0) {
        _fprintf(param_2,"ns %s",param_4);
      }
    }
    else {
      _fprintf(param_2,"Particle: %s",param_3);
      _fprintf(param_2,", term element: %s",*(undefined8 *)(param_1 + 0x20));
      if (*(long *)(param_1 + 0x28) != 0) {
        _fprintf(param_2," ns %s",*(undefined8 *)(param_1 + 0x28));
      }
    }
    _fputc(10,param_2);
    if ((*(int *)(param_1 + 0x50) != 1) || (*(int *)(param_1 + 0x54) != 1)) {
      _fprintf(param_2,"  min %d ",(ulong)*(uint *)(param_1 + 0x50));
      if (*(int *)(param_1 + 0x54) < 0x40000000) {
        if (*(int *)(param_1 + 0x54) == 1) {
          _fputc(10,param_2);
        }
        else {
          _fprintf(param_2,"max: %d\n",(ulong)*(uint *)(param_1 + 0x54));
        }
      }
      else {
        _fwrite("max: unbounded\n",1,0xf,param_2);
      }
    }
    if (((((*(uint *)(param_1 + 0x58) & 1) != 0) || ((*(uint *)(param_1 + 0x58) >> 4 & 1) != 0)) ||
        ((*(uint *)(param_1 + 0x58) >> 3 & 1) != 0)) ||
       (((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0 || (*(long *)(param_1 + 0x18) != 0)))) {
      _fwrite("  props: ",1,9,param_2);
      if ((*(uint *)(param_1 + 0x58) >> 3 & 1) != 0) {
        _fwrite("[fixed] ",1,8,param_2);
      }
      if ((*(uint *)(param_1 + 0x58) >> 2 & 1) != 0) {
        _fwrite("[default] ",1,10,param_2);
      }
      if ((*(uint *)(param_1 + 0x58) >> 4 & 1) != 0) {
        _fwrite("[abstract] ",1,0xb,param_2);
      }
      if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
        _fwrite("[nillable] ",1,0xb,param_2);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        _fprintf(param_2,"[id: \'%s\'] ",*(undefined8 *)(param_1 + 0x18));
      }
      _fputc(10,param_2);
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      _fprintf(param_2,"  value: \'%s\'\n",*(undefined8 *)(param_1 + 0x90));
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      _fprintf(param_2,"  type: %s ",*(undefined8 *)(param_1 + 0x68));
      if (*(long *)(param_1 + 0x70) == 0) {
        _fputc(10,param_2);
      }
      else {
        _fprintf(param_2,"ns %s\n",*(undefined8 *)(param_1 + 0x70));
      }
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      _fprintf(param_2,"  substitutionGroup: %s ",*(undefined8 *)(param_1 + 0x78));
      if (*(long *)(param_1 + 0x80) == 0) {
        _fputc(10,param_2);
      }
      else {
        _fprintf(param_2,"ns %s\n",*(undefined8 *)(param_1 + 0x80));
      }
    }
  }
  return;
}

